/****************************************************************************
** Meta object code from reading C++ file 'testwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FitstQT/testwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASStestwindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASStestwindowENDCLASS = QtMocHelpers::stringData(
    "testwindow",
    "on_exitTestButton_clicked",
    "",
    "onItemClicked",
    "QModelIndex",
    "index",
    "on_showHideButton_clicked",
    "on_checkBox_stateChanged",
    "arg1",
    "on_nextButton_clicked",
    "on_backButton_clicked",
    "on_getResultButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASStestwindowENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[26];
    char stringdata7[25];
    char stringdata8[5];
    char stringdata9[22];
    char stringdata10[22];
    char stringdata11[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASStestwindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASStestwindowENDCLASS_t qt_meta_stringdata_CLASStestwindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "testwindow"
        QT_MOC_LITERAL(11, 25),  // "on_exitTestButton_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 13),  // "onItemClicked"
        QT_MOC_LITERAL(52, 11),  // "QModelIndex"
        QT_MOC_LITERAL(64, 5),  // "index"
        QT_MOC_LITERAL(70, 25),  // "on_showHideButton_clicked"
        QT_MOC_LITERAL(96, 24),  // "on_checkBox_stateChanged"
        QT_MOC_LITERAL(121, 4),  // "arg1"
        QT_MOC_LITERAL(126, 21),  // "on_nextButton_clicked"
        QT_MOC_LITERAL(148, 21),  // "on_backButton_clicked"
        QT_MOC_LITERAL(170, 26)   // "on_getResultButton_clicked"
    },
    "testwindow",
    "on_exitTestButton_clicked",
    "",
    "onItemClicked",
    "QModelIndex",
    "index",
    "on_showHideButton_clicked",
    "on_checkBox_stateChanged",
    "arg1",
    "on_nextButton_clicked",
    "on_backButton_clicked",
    "on_getResultButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASStestwindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    1,   57,    2, 0x0a,    2 /* Public */,
       6,    0,   60,    2, 0x08,    4 /* Private */,
       7,    1,   61,    2, 0x08,    5 /* Private */,
       9,    0,   64,    2, 0x08,    7 /* Private */,
      10,    0,   65,    2, 0x08,    8 /* Private */,
      11,    0,   66,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject testwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASStestwindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASStestwindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASStestwindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<testwindow, std::true_type>,
        // method 'on_exitTestButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_showHideButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_nextButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_getResultButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void testwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<testwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_exitTestButton_clicked(); break;
        case 1: _t->onItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->on_showHideButton_clicked(); break;
        case 3: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_nextButton_clicked(); break;
        case 5: _t->on_backButton_clicked(); break;
        case 6: _t->on_getResultButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *testwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *testwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASStestwindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WindowBase"))
        return static_cast< WindowBase*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int testwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
