/********************************************************************************
** Form generated from reading UI file 'voronoiform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VORONOIFORM_H
#define UI_VORONOIFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "doublespinbox.h"
#include "forms/depthform.h"
#include "forms/toolname.h"

QT_BEGIN_NAMESPACE

class Ui_VoronoiForm
{
public:
    QFormLayout *formLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    DepthForm *dsbxDepth;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSelect;
    QPushButton *pbEdit;
    QFrame *line;
    QLabel *label_4;
    QLabel *label_5;
    DoubleSpinBox *dsbxPrecision;
    DoubleSpinBox *dsbxWidth;
    QLabel *label_6;
    QFrame *line_2;
    QLineEdit *leName;
    QPushButton *pbClose;
    QPushButton *pbCreate;
    QLabel *label_7;
    QComboBox *cbxSolver;
    QLabel *label_8;
    DoubleSpinBox *dsbxOffset;
    ToolName *toolName;

    void setupUi(QWidget *VoronoiForm)
    {
        if (VoronoiForm->objectName().isEmpty())
            VoronoiForm->setObjectName(QString::fromUtf8("VoronoiForm"));
        VoronoiForm->resize(246, 311);
        formLayout_2 = new QFormLayout(VoronoiForm);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(3, 3, 3, 3);
        frame = new QFrame(VoronoiForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);


        formLayout_2->setWidget(0, QFormLayout::SpanningRole, frame);

        label_2 = new QLabel(VoronoiForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(VoronoiForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        dsbxDepth = new DepthForm(VoronoiForm);
        dsbxDepth->setObjectName(QString::fromUtf8("dsbxDepth"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dsbxDepth);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSelect = new QPushButton(VoronoiForm);
        pbSelect->setObjectName(QString::fromUtf8("pbSelect"));

        horizontalLayout->addWidget(pbSelect);

        pbEdit = new QPushButton(VoronoiForm);
        pbEdit->setObjectName(QString::fromUtf8("pbEdit"));

        horizontalLayout->addWidget(pbEdit);


        formLayout_2->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        line = new QFrame(VoronoiForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, line);

        label_4 = new QLabel(VoronoiForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(VoronoiForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_5);

        dsbxPrecision = new DoubleSpinBox(VoronoiForm);
        dsbxPrecision->setObjectName(QString::fromUtf8("dsbxPrecision"));
        dsbxPrecision->setDecimals(2);
        dsbxPrecision->setMinimum(0.010000000000000);
        dsbxPrecision->setMaximum(1.000000000000000);
        dsbxPrecision->setSingleStep(0.010000000000000);
        dsbxPrecision->setValue(0.100000000000000);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, dsbxPrecision);

        dsbxWidth = new DoubleSpinBox(VoronoiForm);
        dsbxWidth->setObjectName(QString::fromUtf8("dsbxWidth"));
        dsbxWidth->setMaximum(10.000000000000000);
        dsbxWidth->setSingleStep(0.100000000000000);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, dsbxWidth);

        label_6 = new QLabel(VoronoiForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_6);

        line_2 = new QFrame(VoronoiForm);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        formLayout_2->setWidget(9, QFormLayout::SpanningRole, line_2);

        leName = new QLineEdit(VoronoiForm);
        leName->setObjectName(QString::fromUtf8("leName"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, leName);

        pbClose = new QPushButton(VoronoiForm);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        formLayout_2->setWidget(12, QFormLayout::SpanningRole, pbClose);

        pbCreate = new QPushButton(VoronoiForm);
        pbCreate->setObjectName(QString::fromUtf8("pbCreate"));

        formLayout_2->setWidget(11, QFormLayout::SpanningRole, pbCreate);

        label_7 = new QLabel(VoronoiForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_7);

        cbxSolver = new QComboBox(VoronoiForm);
        cbxSolver->addItem(QString());
        cbxSolver->addItem(QString());
        cbxSolver->setObjectName(QString::fromUtf8("cbxSolver"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, cbxSolver);

        label_8 = new QLabel(VoronoiForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_8);

        dsbxOffset = new DoubleSpinBox(VoronoiForm);
        dsbxOffset->setObjectName(QString::fromUtf8("dsbxOffset"));
        dsbxOffset->setMaximum(10.000000000000000);
        dsbxOffset->setSingleStep(0.100000000000000);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, dsbxOffset);

        toolName = new ToolName(VoronoiForm);
        toolName->setObjectName(QString::fromUtf8("toolName"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, toolName);


        retranslateUi(VoronoiForm);

        QMetaObject::connectSlotsByName(VoronoiForm);
    } // setupUi

    void retranslateUi(QWidget *VoronoiForm)
    {
        VoronoiForm->setWindowTitle(QCoreApplication::translate("VoronoiForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("VoronoiForm", "Voronoi Toolpath", nullptr));
        label_2->setText(QCoreApplication::translate("VoronoiForm", "Depth:", nullptr));
        label_3->setText(QCoreApplication::translate("VoronoiForm", "Tool:", nullptr));
        pbSelect->setText(QCoreApplication::translate("VoronoiForm", "Select", nullptr));
        pbEdit->setText(QCoreApplication::translate("VoronoiForm", "Edit", nullptr));
        label_4->setText(QCoreApplication::translate("VoronoiForm", "Precision:", nullptr));
        label_5->setText(QCoreApplication::translate("VoronoiForm", "Width:", nullptr));
        dsbxPrecision->setSuffix(QCoreApplication::translate("VoronoiForm", " mm", nullptr));
        dsbxWidth->setSuffix(QCoreApplication::translate("VoronoiForm", " mm", nullptr));
        label_6->setText(QCoreApplication::translate("VoronoiForm", "Name:", nullptr));
        pbClose->setText(QCoreApplication::translate("VoronoiForm", "Close", nullptr));
        pbCreate->setText(QCoreApplication::translate("VoronoiForm", "Create", nullptr));
        label_7->setText(QCoreApplication::translate("VoronoiForm", "Solver:", nullptr));
        cbxSolver->setItemText(0, QCoreApplication::translate("VoronoiForm", "JC_VORONOI", nullptr));
        cbxSolver->setItemText(1, QCoreApplication::translate("VoronoiForm", "CGAL", nullptr));

        label_8->setText(QCoreApplication::translate("VoronoiForm", "Frame Offset:", nullptr));
        dsbxOffset->setSuffix(QCoreApplication::translate("VoronoiForm", " mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VoronoiForm: public Ui_VoronoiForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VORONOIFORM_H
