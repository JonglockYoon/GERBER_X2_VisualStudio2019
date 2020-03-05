/****************************************************************************
** Meta object code from reading C++ file 'qdruler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../GERBER_X2-0304/graphicsview/qdruler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDRuler_t {
    QByteArrayData data[12];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDRuler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDRuler_t qt_meta_stringdata_QDRuler = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QDRuler"
QT_MOC_LITERAL(1, 8, 12), // "SetCursorPos"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "cursorPos_"
QT_MOC_LITERAL(4, 33, 13), // "SetMouseTrack"
QT_MOC_LITERAL(5, 47, 5), // "track"
QT_MOC_LITERAL(6, 53, 9), // "SetOrigin"
QT_MOC_LITERAL(7, 63, 7), // "origin_"
QT_MOC_LITERAL(8, 71, 12), // "SetRulerUnit"
QT_MOC_LITERAL(9, 84, 10), // "rulerUnit_"
QT_MOC_LITERAL(10, 95, 12), // "SetRulerZoom"
QT_MOC_LITERAL(11, 108, 10) // "rulerZoom_"

    },
    "QDRuler\0SetCursorPos\0\0cursorPos_\0"
    "SetMouseTrack\0track\0SetOrigin\0origin_\0"
    "SetRulerUnit\0rulerUnit_\0SetRulerZoom\0"
    "rulerZoom_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDRuler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,

       0        // eod
};

void QDRuler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDRuler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetCursorPos((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->SetMouseTrack((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->SetOrigin((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 3: _t->SetRulerUnit((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 4: _t->SetRulerZoom((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QDRuler::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QDRuler.data,
    qt_meta_data_QDRuler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QDRuler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDRuler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDRuler.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDRuler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
