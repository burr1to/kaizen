/****************************************************************************
** Meta object code from reading C++ file 'lower_body.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../K/lower_body.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lower_body.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lower_body_t {
    const uint offsetsAndSize[26];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_lower_body_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_lower_body_t qt_meta_stringdata_lower_body = {
    {
QT_MOC_LITERAL(0, 10), // "lower_body"
QT_MOC_LITERAL(11, 32), // "on_pushButton_stop_timer_clicked"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 6), // "timerr"
QT_MOC_LITERAL(52, 14), // "getfitnessdata"
QT_MOC_LITERAL(67, 8), // "username"
QT_MOC_LITERAL(76, 9), // "QString[]"
QT_MOC_LITERAL(86, 2), // "fi"
QT_MOC_LITERAL(89, 35), // "on_pushButton_start_workout_c..."
QT_MOC_LITERAL(125, 15), // "on_home_clicked"
QT_MOC_LITERAL(141, 19), // "on_fit_butt_clicked"
QT_MOC_LITERAL(161, 19), // "on_bud_butt_clicked"
QT_MOC_LITERAL(181, 15) // "on_logo_clicked"

    },
    "lower_body\0on_pushButton_stop_timer_clicked\0"
    "\0timerr\0getfitnessdata\0username\0"
    "QString[]\0fi\0on_pushButton_start_workout_clicked\0"
    "on_home_clicked\0on_fit_butt_clicked\0"
    "on_bud_butt_clicked\0on_logo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lower_body[] = {

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
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    2,   64,    2, 0x08,    3 /* Private */,
       8,    0,   69,    2, 0x08,    6 /* Private */,
       9,    0,   70,    2, 0x08,    7 /* Private */,
      10,    0,   71,    2, 0x08,    8 /* Private */,
      11,    0,   72,    2, 0x08,    9 /* Private */,
      12,    0,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void lower_body::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<lower_body *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_stop_timer_clicked(); break;
        case 1: _t->timerr(); break;
        case 2: _t->getfitnessdata((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)[]>(_a[2]))); break;
        case 3: _t->on_pushButton_start_workout_clicked(); break;
        case 4: _t->on_home_clicked(); break;
        case 5: _t->on_fit_butt_clicked(); break;
        case 6: _t->on_bud_butt_clicked(); break;
        case 7: _t->on_logo_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject lower_body::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_lower_body.offsetsAndSize,
    qt_meta_data_lower_body,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_lower_body_t
, QtPrivate::TypeAndForceComplete<lower_body, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *lower_body::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lower_body::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lower_body.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int lower_body::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
