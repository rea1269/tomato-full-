/****************************************************************************
** Meta object code from reading C++ file 'starttime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Tomato/starttime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'starttime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StartTime_t {
    QByteArrayData data[13];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StartTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StartTime_t qt_meta_stringdata_StartTime = {
    {
QT_MOC_LITERAL(0, 0, 9), // "StartTime"
QT_MOC_LITERAL(1, 10, 16), // "on_reset_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "on_start_clicked"
QT_MOC_LITERAL(4, 45, 17), // "on_finish_clicked"
QT_MOC_LITERAL(5, 63, 10), // "count_down"
QT_MOC_LITERAL(6, 74, 17), // "show_notification"
QT_MOC_LITERAL(7, 92, 13), // "init_TrayMenu"
QT_MOC_LITERAL(8, 106, 15), // "show_count_time"
QT_MOC_LITERAL(9, 122, 16), // "update_date_time"
QT_MOC_LITERAL(10, 139, 3), // "gpa"
QT_MOC_LITERAL(11, 143, 10), // "reset_time"
QT_MOC_LITERAL(12, 154, 13) // "update_record"

    },
    "StartTime\0on_reset_clicked\0\0"
    "on_start_clicked\0on_finish_clicked\0"
    "count_down\0show_notification\0init_TrayMenu\0"
    "show_count_time\0update_date_time\0gpa\0"
    "reset_time\0update_record"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartTime[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

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

void StartTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StartTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_reset_clicked(); break;
        case 1: _t->on_start_clicked(); break;
        case 2: _t->on_finish_clicked(); break;
        case 3: _t->count_down(); break;
        case 4: _t->show_notification(); break;
        case 5: _t->init_TrayMenu(); break;
        case 6: _t->show_count_time(); break;
        case 7: _t->update_date_time(); break;
        case 8: _t->gpa(); break;
        case 9: _t->reset_time(); break;
        case 10: _t->update_record(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StartTime::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_StartTime.data,
    qt_meta_data_StartTime,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StartTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StartTime.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StartTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
