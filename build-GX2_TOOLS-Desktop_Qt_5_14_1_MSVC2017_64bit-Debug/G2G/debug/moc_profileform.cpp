/****************************************************************************
** Meta object code from reading C++ file 'profileform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../GERBER_X2-0304/G2G/forms/profileform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profileform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProfileForm_t {
    QByteArrayData data[11];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProfileForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProfileForm_t qt_meta_stringdata_ProfileForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ProfileForm"
QT_MOC_LITERAL(1, 12, 19), // "on_pbSelect_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "on_pbEdit_clicked"
QT_MOC_LITERAL(4, 51, 19), // "on_pbCreate_clicked"
QT_MOC_LITERAL(5, 71, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(6, 90, 22), // "on_pbAddBridge_clicked"
QT_MOC_LITERAL(7, 113, 32), // "on_dsbxBridgeLenght_valueChanged"
QT_MOC_LITERAL(8, 146, 4), // "arg1"
QT_MOC_LITERAL(9, 151, 25), // "on_dsbxDepth_valueChanged"
QT_MOC_LITERAL(10, 177, 21) // "on_leName_textChanged"

    },
    "ProfileForm\0on_pbSelect_clicked\0\0"
    "on_pbEdit_clicked\0on_pbCreate_clicked\0"
    "on_pbClose_clicked\0on_pbAddBridge_clicked\0"
    "on_dsbxBridgeLenght_valueChanged\0arg1\0"
    "on_dsbxDepth_valueChanged\0"
    "on_leName_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProfileForm[] = {

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
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void ProfileForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProfileForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbSelect_clicked(); break;
        case 1: _t->on_pbEdit_clicked(); break;
        case 2: _t->on_pbCreate_clicked(); break;
        case 3: _t->on_pbClose_clicked(); break;
        case 4: _t->on_pbAddBridge_clicked(); break;
        case 5: _t->on_dsbxBridgeLenght_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_dsbxDepth_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_leName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProfileForm::staticMetaObject = { {
    QMetaObject::SuperData::link<FormsUtil::staticMetaObject>(),
    qt_meta_stringdata_ProfileForm.data,
    qt_meta_data_ProfileForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProfileForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProfileForm.stringdata0))
        return static_cast<void*>(this);
    return FormsUtil::qt_metacast(_clname);
}

int ProfileForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
