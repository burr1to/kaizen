/****************************************************************************
** Meta object code from reading C++ file 'planner.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../K/planner.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Planner_t {
    const uint offsetsAndSize[38];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Planner_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Planner_t qt_meta_stringdata_Planner = {
    {
QT_MOC_LITERAL(0, 7), // "Planner"
QT_MOC_LITERAL(8, 17), // "on_addbut_clicked"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 20), // "on_budgetbut_clicked"
QT_MOC_LITERAL(48, 17), // "on_Logout_clicked"
QT_MOC_LITERAL(66, 17), // "on_fitbut_clicked"
QT_MOC_LITERAL(84, 20), // "on_showplans_clicked"
QT_MOC_LITERAL(105, 8), // "showfour"
QT_MOC_LITERAL(114, 7), // "current"
QT_MOC_LITERAL(122, 9), // "QString[]"
QT_MOC_LITERAL(132, 10), // "querystore"
QT_MOC_LITERAL(143, 9), // "datestore"
QT_MOC_LITERAL(153, 9), // "timestore"
QT_MOC_LITERAL(163, 9), // "setbudget"
QT_MOC_LITERAL(173, 10), // "setfitness"
QT_MOC_LITERAL(184, 19), // "on_allplans_clicked"
QT_MOC_LITERAL(204, 19), // "on_fit_butt_clicked"
QT_MOC_LITERAL(224, 19), // "on_bud_butt_clicked"
QT_MOC_LITERAL(244, 14) // "on_ref_clicked"

    },
    "Planner\0on_addbut_clicked\0\0"
    "on_budgetbut_clicked\0on_Logout_clicked\0"
    "on_fitbut_clicked\0on_showplans_clicked\0"
    "showfour\0current\0QString[]\0querystore\0"
    "datestore\0timestore\0setbudget\0setfitness\0"
    "on_allplans_clicked\0on_fit_butt_clicked\0"
    "on_bud_butt_clicked\0on_ref_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Planner[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    4,   91,    2, 0x08,    6 /* Private */,
      13,    1,  100,    2, 0x08,   11 /* Private */,
      14,    0,  103,    2, 0x08,   13 /* Private */,
      15,    0,  104,    2, 0x08,   14 /* Private */,
      16,    0,  105,    2, 0x08,   15 /* Private */,
      17,    0,  106,    2, 0x08,   16 /* Private */,
      18,    0,  107,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9,    8,   10,   11,   12,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Planner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Planner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addbut_clicked(); break;
        case 1: _t->on_budgetbut_clicked(); break;
        case 2: _t->on_Logout_clicked(); break;
        case 3: _t->on_fitbut_clicked(); break;
        case 4: _t->on_showplans_clicked(); break;
        case 5: _t->showfour((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)[]>(_a[2])),(*reinterpret_cast< QString(*)[]>(_a[3])),(*reinterpret_cast< QString(*)[]>(_a[4]))); break;
        case 6: _t->setbudget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setfitness(); break;
        case 8: _t->on_allplans_clicked(); break;
        case 9: _t->on_fit_butt_clicked(); break;
        case 10: _t->on_bud_butt_clicked(); break;
        case 11: _t->on_ref_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Planner::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Planner.offsetsAndSize,
    qt_meta_data_Planner,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Planner_t
, QtPrivate::TypeAndForceComplete<Planner, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Planner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Planner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Planner.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Planner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
