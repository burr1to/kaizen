/****************************************************************************
** Meta object code from reading C++ file 'planner.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../kaizen-test/Kaizen/planner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_planner_t {
    const uint offsetsAndSize[22];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_planner_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_planner_t qt_meta_stringdata_planner = {
    {
QT_MOC_LITERAL(0, 7), // "planner"
QT_MOC_LITERAL(8, 7), // "getData"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 19), // "on_dataSend_clicked"
QT_MOC_LITERAL(37, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(59, 20), // "on_budgetbut_clicked"
QT_MOC_LITERAL(80, 21), // "on_listView_activated"
QT_MOC_LITERAL(102, 11), // "QModelIndex"
QT_MOC_LITERAL(114, 5), // "index"
QT_MOC_LITERAL(120, 20), // "on_updateBut_clicked"
QT_MOC_LITERAL(141, 20) // "on_deleteBut_clicked"

    },
    "planner\0getData\0\0on_dataSend_clicked\0"
    "on_pushButton_clicked\0on_budgetbut_clicked\0"
    "on_listView_activated\0QModelIndex\0"
    "index\0on_updateBut_clicked\0"
    "on_deleteBut_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_planner[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    1,   60,    2, 0x08,    5 /* Private */,
       9,    0,   63,    2, 0x08,    7 /* Private */,
      10,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void planner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<planner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getData(); break;
        case 1: _t->on_dataSend_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_budgetbut_clicked(); break;
        case 4: { int _r = _t->on_listView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_updateBut_clicked(); break;
        case 6: _t->on_deleteBut_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (planner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&planner::getData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject planner::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_planner.offsetsAndSize,
    qt_meta_data_planner,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_planner_t
, QtPrivate::TypeAndForceComplete<planner, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *planner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *planner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_planner.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int planner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void planner::getData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
