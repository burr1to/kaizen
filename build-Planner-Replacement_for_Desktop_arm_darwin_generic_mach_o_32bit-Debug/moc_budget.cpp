/****************************************************************************
** Meta object code from reading C++ file 'budget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../K/budget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'budget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Budget_t {
    const uint offsetsAndSize[38];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Budget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Budget_t qt_meta_stringdata_Budget = {
    {
QT_MOC_LITERAL(0, 6), // "Budget"
QT_MOC_LITERAL(7, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(56, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(81, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(105, 18), // "addItemstoDatabase"
QT_MOC_LITERAL(124, 18), // "allocatesomeofthis"
QT_MOC_LITERAL(143, 9), // "setTotals"
QT_MOC_LITERAL(153, 18), // "on_expta_activated"
QT_MOC_LITERAL(172, 11), // "QModelIndex"
QT_MOC_LITERAL(184, 5), // "index"
QT_MOC_LITERAL(190, 27), // "on_allocating_returnPressed"
QT_MOC_LITERAL(218, 18), // "on_planner_clicked"
QT_MOC_LITERAL(237, 19), // "on_fit_butt_clicked"
QT_MOC_LITERAL(257, 19), // "on_bud_butt_clicked"
QT_MOC_LITERAL(277, 21), // "on_updatebutt_clicked"
QT_MOC_LITERAL(299, 21), // "on_deletebutt_clicked"
QT_MOC_LITERAL(321, 15) // "on_logo_clicked"

    },
    "Budget\0on_pushButton_3_clicked\0\0"
    "on_pushButton_9_clicked\0"
    "on_pushButton_13_clicked\0"
    "on_pushButton_4_clicked\0addItemstoDatabase\0"
    "allocatesomeofthis\0setTotals\0"
    "on_expta_activated\0QModelIndex\0index\0"
    "on_allocating_returnPressed\0"
    "on_planner_clicked\0on_fit_butt_clicked\0"
    "on_bud_butt_clicked\0on_updatebutt_clicked\0"
    "on_deletebutt_clicked\0on_logo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Budget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    0,  107,    2, 0x08,    4 /* Private */,
       6,    3,  108,    2, 0x08,    5 /* Private */,
       7,    1,  115,    2, 0x08,    9 /* Private */,
       8,    1,  118,    2, 0x08,   11 /* Private */,
       9,    1,  121,    2, 0x08,   13 /* Private */,
      12,    0,  124,    2, 0x08,   15 /* Private */,
      13,    0,  125,    2, 0x08,   16 /* Private */,
      14,    0,  126,    2, 0x08,   17 /* Private */,
      15,    0,  127,    2, 0x08,   18 /* Private */,
      16,    0,  128,    2, 0x08,   19 /* Private */,
      17,    0,  129,    2, 0x08,   20 /* Private */,
      18,    0,  130,    2, 0x08,   21 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Int, 0x80000000 | 10,   11,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Budget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Budget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->on_pushButton_9_clicked(); break;
        case 2: _t->on_pushButton_13_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: { QString _r = _t->addItemstoDatabase((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->allocatesomeofthis((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setTotals((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { int _r = _t->on_expta_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->on_allocating_returnPressed();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->on_planner_clicked(); break;
        case 10: _t->on_fit_butt_clicked(); break;
        case 11: _t->on_bud_butt_clicked(); break;
        case 12: _t->on_updatebutt_clicked(); break;
        case 13: _t->on_deletebutt_clicked(); break;
        case 14: _t->on_logo_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Budget::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Budget.offsetsAndSize,
    qt_meta_data_Budget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Budget_t
, QtPrivate::TypeAndForceComplete<Budget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Budget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Budget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Budget.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Budget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
