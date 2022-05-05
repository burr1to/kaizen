/****************************************************************************
** Meta object code from reading C++ file 'upper_body.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../K/upper_body.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upper_body.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_upper_body_t {
    const uint offsetsAndSize[26];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_upper_body_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_upper_body_t qt_meta_stringdata_upper_body = {
    {
QT_MOC_LITERAL(0, 10), // "upper_body"
QT_MOC_LITERAL(11, 35), // "on_pushButton_start_workout_c..."
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 14), // "getfitnessdata"
QT_MOC_LITERAL(63, 8), // "username"
QT_MOC_LITERAL(72, 9), // "QString[]"
QT_MOC_LITERAL(82, 4), // "fitd"
QT_MOC_LITERAL(87, 6), // "timerr"
QT_MOC_LITERAL(94, 32), // "on_pushButton_stop_timer_clicked"
QT_MOC_LITERAL(127, 15), // "on_home_clicked"
QT_MOC_LITERAL(143, 19), // "on_fit_butt_clicked"
QT_MOC_LITERAL(163, 19), // "on_bud_butt_clicked"
QT_MOC_LITERAL(183, 15) // "on_logo_clicked"

    },
    "upper_body\0on_pushButton_start_workout_clicked\0"
    "\0getfitnessdata\0username\0QString[]\0"
    "fitd\0timerr\0on_pushButton_stop_timer_clicked\0"
    "on_home_clicked\0on_fit_butt_clicked\0"
    "on_bud_butt_clicked\0on_logo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_upper_body[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    2,   63,    2, 0x08,    2 /* Private */,
       7,    0,   68,    2, 0x08,    5 /* Private */,
       8,    0,   69,    2, 0x08,    6 /* Private */,
       9,    0,   70,    2, 0x08,    7 /* Private */,
      10,    0,   71,    2, 0x08,    8 /* Private */,
      11,    0,   72,    2, 0x08,    9 /* Private */,
      12,    0,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void upper_body::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<upper_body *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_start_workout_clicked(); break;
        case 1: _t->getfitnessdata((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)[]>(_a[2]))); break;
        case 2: _t->timerr(); break;
        case 3: _t->on_pushButton_stop_timer_clicked(); break;
        case 4: _t->on_home_clicked(); break;
        case 5: _t->on_fit_butt_clicked(); break;
        case 6: _t->on_bud_butt_clicked(); break;
        case 7: _t->on_logo_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject upper_body::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_upper_body.offsetsAndSize,
    qt_meta_data_upper_body,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_upper_body_t
, QtPrivate::TypeAndForceComplete<upper_body, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *upper_body::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *upper_body::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_upper_body.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int upper_body::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
