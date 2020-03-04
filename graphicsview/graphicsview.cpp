#include "graphicsview.h"
#include "edid.h"
#include "qdruler.h"
#include "scene.h"
#include <QtOpenGL/QGLWidget>
#include <QSettings>
#include <QTimer>
#include <QTransform>
#include <QtWidgets>
#include <gi/bridgeitem.h>
//#include <gi/ruler.h>
#include <mainwindow.h>
#include <settings.h>

#include <sh/circle.h>
#include <sh/constructor.h>

#include <forms/thermal/thermalmodel.h>
#include <forms/thermal/thermalpreviewitem.h>

#include "project.h"

const double zoomFactor = 1.5;

GraphicsView* GraphicsView::m_instance = nullptr;

GraphicsView::GraphicsView(QWidget* parent)
    : QGraphicsView(parent)
{
    if (m_instance) {
        QMessageBox::critical(nullptr, "Err", "You cannot create class GraphicsView more than 2 times!!!");
        exit(1);
    }
    setCacheMode(/*CacheBackground*/ CacheNone);
    setOptimizationFlags(DontSavePainterState | DontClipPainter | DontAdjustForAntialiasing);
    setViewportUpdateMode(FullViewportUpdate /*SmartViewportUpdate*/ /*NoViewportUpdate*/);
    setDragMode(RubberBandDrag);
    setInteractive(true);
    setContextMenuPolicy(Qt::CustomContextMenu);
    ////////////////////////////////////

    // add two rulers on top and left.
    setViewportMargins(RulerBreadth, 0, 0, RulerBreadth);

    // add grid layout
    QGridLayout* gridLayout = new QGridLayout(this);
    gridLayout->setSpacing(0);
    //gridLayout->setMargin(0);

    // create rulers
    hRuler = new QDRuler(QDRuler::Horizontal, this);
    vRuler = new QDRuler(QDRuler::Vertical, this);
    hRuler->SetMouseTrack(true);
    vRuler->SetMouseTrack(true);

    // add items to grid layout

    //QLabel* corner = new QLabel("<html><head/><body><p><span style=\" color:#ffffff;\">mm</span></p></body></html>", this);
    QPushButton* corner = new QPushButton(Settings::inch() ? "I" : "M", this);
    connect(corner, &QPushButton::clicked, [this, corner](bool fl) {
        corner->setText(fl ? "I" : "M");
        Settings::setInch(fl);
        scene()->update();
        hRuler->update();
        vRuler->update();
    });
    corner->setCheckable(true);
    //corner->setAlignment(Qt::AlignCenter);
    corner->setFixedSize(RulerBreadth, RulerBreadth);

    gridLayout->addWidget(corner, 1, 0);
    gridLayout->addWidget(hRuler, 1, 1);
    gridLayout->addWidget(vRuler, 0, 0);
    gridLayout->addWidget(viewport(), 0, 1);

    connect(horizontalScrollBar(), &QScrollBar::valueChanged, this, &GraphicsView::updateRuler);
    connect(verticalScrollBar(), &QScrollBar::valueChanged, this, &GraphicsView::updateRuler);

    scale(1.0, -1.0); //flip vertical
    zoom100();
    QGLWidget* glw = nullptr;
    QSettings settings;
    settings.beginGroup("Viewer");
    setViewport(settings.value("OpenGl").toBool()
            ? (glw = new QGLWidget(QGLFormat(QGL::SampleBuffers | QGL::AlphaChannel | QGL::Rgba)))
            : new QWidget);
    if (glw) {
    }

    setRenderHint(QPainter::Antialiasing, settings.value("Antialiasing", false).toBool());
    viewport()->setObjectName("viewport");
    settings.endGroup();

    m_scene = new Scene(this);
    setScene(m_scene);
    connect(this, &GraphicsView::mouseMove, m_scene, &Scene::setCross1);
    //    connect(this, &GraphicsView::mouseMove, hRuler, &QDRuler::setCross);
    //    connect(this, &GraphicsView::mouseMove, vRuler, &QDRuler::setCross);

    setStyleSheet("QGraphicsView { background: black }");

    //    QTimer* t = new QTimer(this);
    //    connect(t, &QTimer::timeout, [this] {
    //        qDebug("timeout");
    //        updateSceneRect(QRectF());
    //    });
    //    t->start(16);


    connect(m_scene, &Scene::selectionChanged, m_scene, &Scene::itemSelChanged);

    m_instance = this;
}

GraphicsView::~GraphicsView()
{
    m_instance = nullptr;
}

void GraphicsView::setScene(QGraphicsScene* Scene)
{
    QGraphicsView::setScene(Scene);
    updateRuler();
}

void GraphicsView::zoomFit()
{
    m_instance->scene()->setSceneRect(m_instance->scene()->itemsBoundingRect());
    m_instance->fitInView(m_instance->scene()->sceneRect(), Qt::KeepAspectRatio);
    //scale(0.95, 0.95);
    m_instance->updateRuler();
}

void GraphicsView::zoomToSelected()
{
    if (m_instance == nullptr)
        return;
    QRectF rect;
    for (const QGraphicsItem* item : m_instance->scene()->selectedItems()) {
        const QRectF tmpRect(item->pos().isNull() ? item->boundingRect() : item->boundingRect().translated(item->pos()));
        rect = rect.isEmpty() ? tmpRect : rect.united(tmpRect);
    }
    if (rect.isEmpty())
        return;

    const double k = 5.0 / m_instance->transform().m11();
    rect += QMarginsF(k, k, k, k);
    if (Settings::guiSmoothScSh() && /* DISABLES CODE */ (0)) {
        //        // Reset the view scale to 1:1.
        //        QRectF unity = d->matrix.mapRect(QRectF(0, 0, 1, 1));
        //        if (unity.isEmpty())
        //            return;
        //        scale(1 / unity.width(), 1 / unity.height());
        //        // Find the ideal x / y scaling ratio to fit \a rect in the view.
        //        int margin = 2;
        //        QRectF viewRect = viewport()->rect().adjusted(margin, margin, -margin, -margin);
        //        if (viewRect.isEmpty())
        //            return;
        //        QRectF sceneRect = d->matrix.mapRect(rect);
        //        if (sceneRect.isEmpty())
        //            return;
        //        qreal xratio = viewRect.width() / sceneRect.width();
        //        qreal yratio = viewRect.height() / sceneRect.height();
        //        // Respect the aspect ratio mode.
        //        switch (aspectRatioMode) {
        //        case Qt::KeepAspectRatio:
        //            xratio = yratio = qMin(xratio, yratio);
        //            break;
        //        case Qt::KeepAspectRatioByExpanding:
        //            xratio = yratio = qMax(xratio, yratio);
        //            break;
        //        case Qt::IgnoreAspectRatio:
        //            break;
        //        }
        //        // Scale and center on the center of \a rect.
        //        scale(xratio, yratio);
        //        centerOn(rect.center());
        //        m_instance->anim(m_instance, "sceneRect", m_instance->scene()->sceneRect(), rect);
        m_instance->fitInView(rect, Qt::KeepAspectRatio);
        m_instance->updateRuler();
    } else {
        const double k = 10 * m_instance->scaleFactor();
        m_instance->fitInView(rect + QMarginsF(k, k, k, k), Qt::KeepAspectRatio);
        m_instance->updateRuler();
    }
}

void GraphicsView::zoom100()
{
    if (m_instance == nullptr)
        return;
    double x = 1.0, y = 1.0;
    const double m11 = m_instance->QGraphicsView::transform().m11(), m22 = m_instance->QGraphicsView::transform().m22();
    if (/* DISABLES CODE */ (0)) {
        x = qAbs(1.0 / m11 / (25.4 / m_instance->physicalDpiX()));
        y = qAbs(1.0 / m22 / (25.4 / m_instance->physicalDpiY()));
    } else {
        const QSizeF size(GetEdid()); // size in mm
        const QRect scrGeometry(QGuiApplication::primaryScreen()->geometry()); // size in pix
        x = qAbs(1.0 / m11 / (size.height() / scrGeometry.height()));
        y = qAbs(1.0 / m22 / (size.width() / scrGeometry.width()));
    }
    m_instance->scale(x, y);
    m_instance->updateRuler();
}

void GraphicsView::zoomIn()
{
    if (m_instance == nullptr)
        return;
    if (getScale() > 10000.0)
        return;

    if (Settings::guiSmoothScSh()) {
        m_instance->anim(m_instance, "scale", getScale(), getScale() * zoomFactor);
    } else {
        m_instance->scale(zoomFactor, zoomFactor);
        m_instance->updateRuler();
    }
}

void GraphicsView::zoomOut()
{
    if (m_instance == nullptr)
        return;
    if (getScale() < 1.0)
        return;

    if (Settings::guiSmoothScSh()) {
        m_instance->anim(m_instance, "scale", getScale(), getScale() * (1.0 / zoomFactor));
    } else {
        m_instance->scale(1.0 / zoomFactor, 1.0 / zoomFactor);
        m_instance->updateRuler();
    }
}

double GraphicsView::scaleFactor()
{
    return 1.0 / getScale();
}

QPointF GraphicsView::mappedPos(QMouseEvent* event) const
{
    if (event->modifiers() & Qt::AltModifier || ShapePr::Constructor::snap()) {
        const double gs = Settings::gridStep(matrix().m11());
        QPointF px(mapToScene(event->pos()) / gs);
        px.setX(gs * round(px.x()));
        px.setY(gs * round(px.y()));
        return px;
    }
    return mapToScene(event->pos());
}

void GraphicsView::setScale(double s)
{
    const auto trf = transform();
    setTransform({ +s /*11*/, trf.m12(), trf.m13(),
        /*      */ trf.m21(), -s /*22*/, trf.m23(),
        /*      */ trf.m31(), trf.m32(), trf.m33() });
}

double GraphicsView::getScale()
{
    if (m_instance == nullptr)
        return 1.0;
    return m_instance->transform().m11();
}

void GraphicsView::wheelEvent(QWheelEvent* event)
{
    QPoint numPixels = event->pixelDelta();
    QPoint numDegrees = event->angleDelta() / 8;

    int delta = 0;
    if (!numPixels.isNull()) {
        delta = numPixels.y();
        //qInfo() << QString("delta numPixels = %1,%2").arg(numPixels.x()).arg(numPixels.y());
    }
    else if (!numDegrees.isNull()) {
        delta = numDegrees.y();
        //qInfo() << QString("delta numDegrees = %1,%2").arg(numDegrees.x()).arg(numDegrees.y());
    }
    const int scbarScale = 3;
    switch (event->modifiers()) {
    case Qt::ControlModifier:
        {
            setInteractive(false);
            if (delta > 0)
                zoomIn();
            else
                zoomOut();
            setInteractive(true);
        }
        break;
    case Qt::ShiftModifier:
        {
            auto scrollBar = QAbstractScrollArea::horizontalScrollBar();
            if (Settings::guiSmoothScSh()) {
                anim(scrollBar, "value", scrollBar->value(), scrollBar->value() - scrollBar->pageStep() / (delta > 0 ? scbarScale : -scbarScale));
            } else {
                scrollBar->setValue(scrollBar->value() - delta);
            }
        }
        break;
    case Qt::NoModifier:
        {
            auto scrollBar = QAbstractScrollArea::verticalScrollBar();
            if (Settings::guiSmoothScSh()) {
                anim(scrollBar, "value", scrollBar->value(),
                     scrollBar->value() - scrollBar->pageStep() / (delta > 0 ? scbarScale : -scbarScale));
            } else {
                scrollBar->setValue(scrollBar->value() - delta);
            }
        }
        break;
    default:
        //QGraphicsView::wheelEvent(event);
        return;
    }
#ifdef _VISUALSTUDIO
    mouseMove(mapToScene(event->pos()));
#else
    mouseMove(event->position());
#endif
    event->accept();
    update();
}

void GraphicsView::updateRuler()
{
    layout()->setContentsMargins(0, 0, 0, horizontalScrollBar()->isVisible() ? horizontalScrollBar()->height() : 0);
    updateSceneRect(QRectF()); //actualize mapFromScene
    QPoint p = mapFromScene(QPointF());
    vRuler->SetOrigin(p.y());
    hRuler->SetOrigin(p.x());
    vRuler->SetRulerZoom(qAbs(transform().m22() * 0.1));
    hRuler->SetRulerZoom(qAbs(transform().m11() * 0.1));
}

void GraphicsView::dragEnterEvent(QDragEnterEvent* event)
{
    if (event->mimeData()->hasUrls()) {
        event->acceptProposedAction();
        return;
    }
    event->ignore();
}

void GraphicsView::dropEvent(QDropEvent* event)
{
    for (QUrl& var : event->mimeData()->urls())
        emit fileDroped(var.path().remove(0, 1));
    event->acceptProposedAction();
}

void GraphicsView::dragMoveEvent(QDragMoveEvent* event) { event->acceptProposedAction(); }

void GraphicsView::resizeEvent(QResizeEvent* event)
{
    QGraphicsView::resizeEvent(event);
    updateRuler();
}

void GraphicsView::mousePressEvent(QMouseEvent* event)
{
    if (event->buttons() & Qt::MiddleButton) {
        setInteractive(false);
        // by pressing the middle mouse button, create an event for releasing it, set the drag and drop mode and create an event for holding the left mouse button
        QMouseEvent releaseEvent(QEvent::MouseButtonRelease, event->localPos(), event->screenPos(), event->windowPos(), Qt::LeftButton, nullptr, event->modifiers());
        QGraphicsView::mouseReleaseEvent(&releaseEvent);
        setDragMode(ScrollHandDrag);
        QMouseEvent fakeEvent(event->type(), event->localPos(), event->screenPos(), event->windowPos(), Qt::LeftButton, event->buttons() | Qt::LeftButton, event->modifiers());
        QGraphicsView::mousePressEvent(&fakeEvent);
    } else if (event->button() == Qt::RightButton) {
        { // bridge removal
            QGraphicsItem* item = scene()->itemAt(mapToScene(event->pos()), transform());
            if (item && item->type() == GiBridge && !static_cast<BridgeItem*>(item)->ok())
                delete item;
        }
        // it would be that when calling the context menu there was nothing extraneous
        setDragMode(NoDrag);
        setInteractive(false);
        //Ruler
        m_scene->setDrawRuller(true);
        m_scene->setCross2(mappedPos(event));
        QGraphicsView::mousePressEvent(event);
    } else {
        // this is for highlighting - the default operation of the left mouse button
        QGraphicsView::mousePressEvent(event);

        pressStart = mappedPos(event);
        qInfo() << "mousePressEvent" << pressStart;
    }
}

void GraphicsView::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::MiddleButton) {
        // release the left mouse button that is virtually clamped in mousePressEvent
        QMouseEvent fakeEvent(event->type(), event->localPos(), event->screenPos(), event->windowPos(), Qt::LeftButton, event->buttons() & ~Qt::LeftButton, event->modifiers());
        QGraphicsView::mouseReleaseEvent(&fakeEvent);
        setDragMode(RubberBandDrag);
        setInteractive(true);
    } else if (event->button() == Qt::RightButton) {
        // it would be that when calling the context menu there was nothing extraneous
        QGraphicsView::mousePressEvent(event);
        setDragMode(RubberBandDrag);
        setInteractive(true);
        m_scene->setDrawRuller(false);
    } else {
        QGraphicsView::mouseReleaseEvent(event);
        ShapePr::Constructor::addShapePoint(mappedPos(event));

        if (isInteractive()) {
            //QRectF rect = self->scene()->itemsBoundingRect();
            //qInfo() << "rect " << rect;

            pressEnd = mappedPos(event);
            qInfo() << "mouseReleaseEvent" << pressEnd;

            ItemGroup* pItemGroup;
            for (Gerber::File* file : Project::instance()->files<Gerber::File>()) {
                if (file->itemGroup()->isVisible()) {
                    Paths paths;
                    paths.clear();

                    QRectF rect = QRectF(pressStart, pressEnd);
                    Path path;
                    int cnt = path.count();
                    for (int i = 0; i < file->size(); i++)
                    {
                        Gerber::GraphicObject g = file->at(i);

                        Paths paths = g.paths();
                        if (searching(paths))
                        {
                            Path path = g.path();
                            Gerber::State state = g.state();
                            qInfo() << (int)state.dCode() << (int)state.gCode() << (int)state.type() << state.aperture();
                            int cnt1 = path.count();
                            for (int j = 0; j < cnt1; j++) {
                                IntPoint xy = path[j];
                                double x = xy.X / 100000.0;
                                double y = xy.Y / 100000.0;
                                qInfo() << "g.path" << xy;
                            }
                        }
                    }
                }
            }
        }
    }
}

bool GraphicsView::searching(ClipperLib::Paths &paths)
{
    bool found = false;
    QRectF rect = QRectF(pressStart, pressEnd);
    //qInfo() << "mouse rect" << rect;
    Path path;
    int cnt = paths.count();
    for (int i = 0; i < cnt; i++) {
        path = paths[i];
#if 1 
        IntPoint ul;
        IntPoint lr;

        auto xExtremes = std::minmax_element(path.begin(), path.end(),
            [](const IntPoint lhs, const IntPoint rhs) {
                return lhs.X < rhs.X;
            });

        auto yExtremes = std::minmax_element(path.begin(), path.end(),
            [](const IntPoint lhs, const IntPoint rhs) {
                return lhs.Y < rhs.Y;
            });

        ul = IntPoint(xExtremes.first->X, yExtremes.first->Y); // 가장작은 위치.
        lr = IntPoint(xExtremes.second->X, yExtremes.second->Y); // 가장큰 위치.
        const QRectF r = QRectF(ul.X / 100000.0, ul.Y / 100000.0, (lr.X-ul.X) / 100000.0, (lr.Y-ul.Y) / 100000.0);
        //qInfo() << r;
        QRectF ir = rect.intersected(r);
        if (ir != QRectF()) {
            qInfo() << "intersected" << ir;
            found = true;
        }
#else
        int cnt1 = path.count();
        for (int j = 0; j < cnt1; j++) {
            IntPoint xy = path[j];
            double x = xy.X / 100000.0;
            double y = xy.Y / 100000.0;

            if (rect.contains(x, y)) 
            {
                qInfo() << "contains" << xy;
                found = true;
            }
        }
#endif
    }
    return found;
}

void GraphicsView::searching(ClipperLib::PolyNode* node)
{
    //qInfo() << "cnode Count " << node->ChildCount();


    QRectF rect = QRectF(pressStart, pressEnd);
    Path path;
    path = node->Contour;
    int cnt = path.count();
    for (int i = 0; i < cnt; i++) {
        double x = path[i].X / 100000.0;
        double y = path[i].Y / 100000.0;

        if (rect.contains(x, y)) {
            qInfo() << "contains" << path[i];
        }
    }

    for (int var = 0; var < node->ChildCount(); ++var) {
        ClipperLib::PolyNode* cnode = node->Childs[var];
        searching(cnode);
    }
}

void GraphicsView::mouseDoubleClickEvent(QMouseEvent* event)
{
    auto item = scene()->itemAt(mapToScene(event->pos()), transform()); //itemAt(event->pos());
    if (item && item->type() == GiThermalPr) {
        if (item->flags() & QGraphicsItem::ItemIsSelectable)
            reinterpret_cast<ThermalPreviewItem*>(item)->node()->disable();
        else
            reinterpret_cast<ThermalPreviewItem*>(item)->node()->enable();
    }
    QGraphicsView::mouseDoubleClickEvent(event);
}

void GraphicsView::mouseMoveEvent(QMouseEvent* event)
{
    vRuler->SetCursorPos(event->pos());
    hRuler->SetCursorPos(event->pos());
    const QPointF point(mappedPos(event));
    mouseMove(point);
    ShapePr::Constructor::updateShape(point);
    QGraphicsView::mouseMoveEvent(event);
}
class PropertyAnimation : public QPropertyAnimation {
public:
    PropertyAnimation(QObject* target, const QByteArray& propertyName, QObject* parent = nullptr)
        : QPropertyAnimation(target, propertyName, parent)
    {
    }
    ~PropertyAnimation()
    {
        //qDebug() << "~PropertyAnimation()";
    }
};
template <class T>
void GraphicsView::anim(QObject* target, const QByteArray& propertyName, T begin, T end)
{
    auto* animation = new PropertyAnimation(target, propertyName);
    connect(animation, &QPropertyAnimation::finished, this, &GraphicsView::updateRuler);
    animation->setDuration(100);
    animation->setStartValue(begin);
    animation->setEndValue(end);
    animation->start();
    QTimer::singleShot(101, [animation] { delete animation; });
}
