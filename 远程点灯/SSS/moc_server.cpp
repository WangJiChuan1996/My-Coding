/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[17];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Server"
QT_MOC_LITERAL(1, 7, 7), // "hasData"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 7), // "qintptr"
QT_MOC_LITERAL(4, 24, 14), // "serverSocketID"
QT_MOC_LITERAL(5, 39, 2), // "IP"
QT_MOC_LITERAL(6, 42, 4), // "Port"
QT_MOC_LITERAL(7, 47, 4), // "data"
QT_MOC_LITERAL(8, 52, 10), // "hasConnect"
QT_MOC_LITERAL(9, 63, 13), // "hasDisConnect"
QT_MOC_LITERAL(10, 77, 10), // "ListSocket"
QT_MOC_LITERAL(11, 88, 23), // "QMap<int,ServerSocket*>"
QT_MOC_LITERAL(12, 112, 11), // "idSocketMap"
QT_MOC_LITERAL(13, 124, 17), // "QMap<int,QString>"
QT_MOC_LITERAL(14, 142, 9), // "idUserMap"
QT_MOC_LITERAL(15, 152, 8), // "ReadData"
QT_MOC_LITERAL(16, 161, 10) // "DisConnect"

    },
    "Server\0hasData\0\0qintptr\0serverSocketID\0"
    "IP\0Port\0data\0hasConnect\0hasDisConnect\0"
    "ListSocket\0QMap<int,ServerSocket*>\0"
    "idSocketMap\0QMap<int,QString>\0idUserMap\0"
    "ReadData\0DisConnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   44,    2, 0x06 /* Public */,
       8,    3,   53,    2, 0x06 /* Public */,
       9,    3,   60,    2, 0x06 /* Public */,
      10,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    4,   72,    2, 0x08 /* Private */,
      16,    3,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QByteArray,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,    4,    5,    6,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Server *_t = static_cast<Server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hasData((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 1: _t->hasConnect((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->hasDisConnect((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->ListSocket((*reinterpret_cast< QMap<int,ServerSocket*>(*)>(_a[1])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[2]))); break;
        case 4: _t->ReadData((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 5: _t->DisConnect((*reinterpret_cast< qintptr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Server::*_t)(qintptr , QString , int , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::hasData)) {
                *result = 0;
            }
        }
        {
            typedef void (Server::*_t)(qintptr , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::hasConnect)) {
                *result = 1;
            }
        }
        {
            typedef void (Server::*_t)(qintptr , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::hasDisConnect)) {
                *result = 2;
            }
        }
        {
            typedef void (Server::*_t)(QMap<int,ServerSocket*> , QMap<int,QString> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::ListSocket)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Server::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_Server.data,
      qt_meta_data_Server,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata0))
        return static_cast<void*>(const_cast< Server*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Server::hasData(qintptr _t1, QString _t2, int _t3, QByteArray _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Server::hasConnect(qintptr _t1, QString _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Server::hasDisConnect(qintptr _t1, QString _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Server::ListSocket(QMap<int,ServerSocket*> _t1, QMap<int,QString> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
