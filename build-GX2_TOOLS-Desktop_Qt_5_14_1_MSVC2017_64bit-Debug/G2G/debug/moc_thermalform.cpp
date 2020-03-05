/****************************************************************************
** Meta object code from reading C++ file 'thermalform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../GERBER_X2-0304/G2G/forms/thermal/thermalform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thermalform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThermalForm_t {
    QByteArrayData data[12];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThermalForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThermalForm_t qt_meta_stringdata_ThermalForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ThermalForm"
QT_MOC_LITERAL(1, 12, 19), // "on_pbSelect_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "on_pbEdit_clicked"
QT_MOC_LITERAL(4, 51, 19), // "on_pbCreate_clicked"
QT_MOC_LITERAL(5, 71, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(6, 90, 21), // "on_leName_textChanged"
QT_MOC_LITERAL(7, 112, 4), // "arg1"
QT_MOC_LITERAL(8, 117, 29), // "on_cbxFileCurrentIndexChanged"
QT_MOC_LITERAL(9, 147, 5), // "index"
QT_MOC_LITERAL(10, 153, 25), // "on_dsbxDepth_valueChanged"
QT_MOC_LITERAL(11, 179, 20) // "on_pbExclude_clicked"

    },
    "ThermalForm\0on_pbSelect_clicked\0\0"
    "on_pbEdit_clicked\0on_pbCreate_clicked\0"
    "on_pbClose_clicked\0on_leName_textChanged\0"
    "arg1\0on_cbxFileCurrentIndexChanged\0"
    "index\0on_dsbxDepth_valueChanged\0"
    "on_pbExclude_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThermalForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
      10,    1,   64,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,

       0        // eod
};

void ThermalForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThermalForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbSelect_clicked(); break;
        case 1: _t->on_pbEdit_clicked(); break;
        case 2: _t->on_pbCreate_clicked(); break;
        case 3: _t->on_pbClose_clicked(); break;
        case 4: _t->on_leName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_cbxFileCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_dsbxDepth_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_pbExclude_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThermalForm::staticMetaObject = { {
    QMetaObject::SuperData::link<FormsUtil::staticMetaObject>(),
    qt_meta_stringdata_ThermalForm.data,
    qt_meta_data_ThermalForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThermalForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThermalForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThermalForm.stringdata0))
        return static_cast<void*>(this);
    return FormsUtil::qt_metacast(_clname);
}

int ThermalForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormsUtil::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
