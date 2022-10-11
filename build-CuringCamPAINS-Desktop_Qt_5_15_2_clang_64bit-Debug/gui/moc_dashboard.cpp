/****************************************************************************
** Meta object code from reading C++ file 'dashboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CuringCamPAINS/gui/dashboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dashboard_t {
    QByteArrayData data[15];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dashboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dashboard_t qt_meta_stringdata_Dashboard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Dashboard"
QT_MOC_LITERAL(1, 10, 25), // "on_contactsButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "on_createMessage_clicked"
QT_MOC_LITERAL(4, 62, 26), // "on_resourcesButton_clicked"
QT_MOC_LITERAL(5, 89, 22), // "on_changeColor_clicked"
QT_MOC_LITERAL(6, 112, 22), // "on_saveMessage_clicked"
QT_MOC_LITERAL(7, 135, 26), // "on_dashboardButton_clicked"
QT_MOC_LITERAL(8, 162, 22), // "on_viewMessage_clicked"
QT_MOC_LITERAL(9, 185, 21), // "on_viewButton_clicked"
QT_MOC_LITERAL(10, 207, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(11, 231, 24), // "on_deleteMessage_clicked"
QT_MOC_LITERAL(12, 256, 21), // "on_nameButton_clicked"
QT_MOC_LITERAL(13, 278, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(14, 300, 23) // "on_pushButton_5_clicked"

    },
    "Dashboard\0on_contactsButton_clicked\0"
    "\0on_createMessage_clicked\0"
    "on_resourcesButton_clicked\0"
    "on_changeColor_clicked\0on_saveMessage_clicked\0"
    "on_dashboardButton_clicked\0"
    "on_viewMessage_clicked\0on_viewButton_clicked\0"
    "on_deleteButton_clicked\0"
    "on_deleteMessage_clicked\0on_nameButton_clicked\0"
    "on_backButton_clicked\0on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dashboard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dashboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dashboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_contactsButton_clicked(); break;
        case 1: _t->on_createMessage_clicked(); break;
        case 2: _t->on_resourcesButton_clicked(); break;
        case 3: _t->on_changeColor_clicked(); break;
        case 4: _t->on_saveMessage_clicked(); break;
        case 5: _t->on_dashboardButton_clicked(); break;
        case 6: _t->on_viewMessage_clicked(); break;
        case 7: _t->on_viewButton_clicked(); break;
        case 8: _t->on_deleteButton_clicked(); break;
        case 9: _t->on_deleteMessage_clicked(); break;
        case 10: _t->on_nameButton_clicked(); break;
        case 11: _t->on_backButton_clicked(); break;
        case 12: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Dashboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Dashboard.data,
    qt_meta_data_Dashboard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dashboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dashboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dashboard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Dashboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
