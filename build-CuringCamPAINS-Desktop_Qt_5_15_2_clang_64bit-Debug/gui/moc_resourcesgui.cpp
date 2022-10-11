/****************************************************************************
** Meta object code from reading C++ file 'resourcesgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CuringCamPAINS/gui/resourcesgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resourcesgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ResourcesGui_t {
    QByteArrayData data[14];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResourcesGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResourcesGui_t qt_meta_stringdata_ResourcesGui = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ResourcesGui"
QT_MOC_LITERAL(1, 13, 17), // "changeColorSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 33), // "on_pushButton_changeColor_cli..."
QT_MOC_LITERAL(4, 66, 35), // "on_pushButton_createMessage_c..."
QT_MOC_LITERAL(5, 102, 33), // "on_pushButton_viewMessage_cli..."
QT_MOC_LITERAL(6, 136, 35), // "on_pushButton_deleteMessage_c..."
QT_MOC_LITERAL(7, 172, 33), // "on_pushButton_saveMessage_cli..."
QT_MOC_LITERAL(8, 206, 26), // "on_pushButton_view_clicked"
QT_MOC_LITERAL(9, 233, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(10, 260, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(11, 289, 27), // "on_pushButton_back2_clicked"
QT_MOC_LITERAL(12, 317, 27), // "on_pushButton_back3_clicked"
QT_MOC_LITERAL(13, 345, 35) // "on_pushButton_profileUpdate_c..."

    },
    "ResourcesGui\0changeColorSignal\0\0"
    "on_pushButton_changeColor_clicked\0"
    "on_pushButton_createMessage_clicked\0"
    "on_pushButton_viewMessage_clicked\0"
    "on_pushButton_deleteMessage_clicked\0"
    "on_pushButton_saveMessage_clicked\0"
    "on_pushButton_view_clicked\0"
    "on_pushButton_back_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_pushButton_back2_clicked\0"
    "on_pushButton_back3_clicked\0"
    "on_pushButton_profileUpdate_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResourcesGui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

       0        // eod
};

void ResourcesGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourcesGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeColorSignal(); break;
        case 1: _t->on_pushButton_changeColor_clicked(); break;
        case 2: _t->on_pushButton_createMessage_clicked(); break;
        case 3: _t->on_pushButton_viewMessage_clicked(); break;
        case 4: _t->on_pushButton_deleteMessage_clicked(); break;
        case 5: _t->on_pushButton_saveMessage_clicked(); break;
        case 6: _t->on_pushButton_view_clicked(); break;
        case 7: _t->on_pushButton_back_clicked(); break;
        case 8: _t->on_pushButton_delete_clicked(); break;
        case 9: _t->on_pushButton_back2_clicked(); break;
        case 10: _t->on_pushButton_back3_clicked(); break;
        case 11: _t->on_pushButton_profileUpdate_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ResourcesGui::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourcesGui::changeColorSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ResourcesGui::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ResourcesGui.data,
    qt_meta_data_ResourcesGui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ResourcesGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourcesGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ResourcesGui.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ResourcesGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ResourcesGui::changeColorSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
