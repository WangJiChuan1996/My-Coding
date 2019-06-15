/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[22];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 10), // "has_reback"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "qintptr"
QT_MOC_LITERAL(4, 27, 14), // "serverSocketID"
QT_MOC_LITERAL(5, 42, 2), // "IP"
QT_MOC_LITERAL(6, 45, 4), // "Port"
QT_MOC_LITERAL(7, 50, 4), // "data"
QT_MOC_LITERAL(8, 55, 9), // "has_order"
QT_MOC_LITERAL(9, 65, 5), // "order"
QT_MOC_LITERAL(10, 71, 16), // "has_order_reback"
QT_MOC_LITERAL(11, 88, 19), // "has_order_Broadcast"
QT_MOC_LITERAL(12, 108, 4), // "DATA"
QT_MOC_LITERAL(13, 113, 11), // "updateCount"
QT_MOC_LITERAL(14, 125, 10), // "updateData"
QT_MOC_LITERAL(15, 136, 14), // "reback_message"
QT_MOC_LITERAL(16, 151, 11), // "judge_order"
QT_MOC_LITERAL(17, 163, 12), // "order_reback"
QT_MOC_LITERAL(18, 176, 15), // "order_Broadcast"
QT_MOC_LITERAL(19, 192, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(20, 219, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(21, 247, 27) // "on_pushButton_clear_clicked"

    },
    "Dialog\0has_reback\0\0qintptr\0serverSocketID\0"
    "IP\0Port\0data\0has_order\0order\0"
    "has_order_reback\0has_order_Broadcast\0"
    "DATA\0updateCount\0updateData\0reback_message\0"
    "judge_order\0order_reback\0order_Broadcast\0"
    "on_pushButton_open_clicked\0"
    "on_pushButton_close_clicked\0"
    "on_pushButton_clear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   79,    2, 0x06 /* Public */,
       8,    4,   88,    2, 0x06 /* Public */,
      10,    4,   97,    2, 0x06 /* Public */,
      11,    1,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  109,    2, 0x0a /* Public */,
      14,    4,  110,    2, 0x0a /* Public */,
      15,    4,  119,    2, 0x0a /* Public */,
      16,    4,  128,    2, 0x0a /* Public */,
      17,    4,  137,    2, 0x0a /* Public */,
      18,    1,  146,    2, 0x0a /* Public */,
      19,    0,  149,    2, 0x08 /* Private */,
      20,    0,  150,    2, 0x08 /* Private */,
      21,    0,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QString,    4,    5,    6,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QString,    4,    5,    6,    9,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QString,    4,    5,    6,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QString,    4,    5,    6,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->has_reback((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 1: _t->has_order((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->has_order_reback((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->has_order_Broadcast((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateCount(); break;
        case 5: _t->updateData((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 6: _t->reback_message((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 7: _t->judge_order((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 8: _t->order_reback((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 9: _t->order_Broadcast((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_open_clicked(); break;
        case 11: _t->on_pushButton_close_clicked(); break;
        case 12: _t->on_pushButton_clear_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Dialog::*_t)(qintptr , QString , int , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::has_reback)) {
                *result = 0;
            }
        }
        {
            typedef void (Dialog::*_t)(qintptr , QString , int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::has_order)) {
                *result = 1;
            }
        }
        {
            typedef void (Dialog::*_t)(qintptr , QString , int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::has_order_reback)) {
                *result = 2;
            }
        }
        {
            typedef void (Dialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::has_order_Broadcast)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Dialog::has_reback(qintptr _t1, QString _t2, int _t3, QByteArray _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::has_order(qintptr _t1, QString _t2, int _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dialog::has_order_reback(qintptr _t1, QString _t2, int _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dialog::has_order_Broadcast(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
