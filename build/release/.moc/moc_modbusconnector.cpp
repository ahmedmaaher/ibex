/****************************************************************************
** Meta object code from reading C++ file 'modbusconnector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../launch/modbusconnector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modbusconnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModBusConnector_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModBusConnector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModBusConnector_t qt_meta_stringdata_ModBusConnector = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ModBusConnector"
QT_MOC_LITERAL(1, 16, 13), // "NotifyMessage"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "message"
QT_MOC_LITERAL(4, 39, 21), // "NotifyConnectionError"
QT_MOC_LITERAL(5, 61, 5), // "error"
QT_MOC_LITERAL(6, 67, 22), // "NotifyConnectionOpened"
QT_MOC_LITERAL(7, 90, 22) // "NotifyConnectionClosed"

    },
    "ModBusConnector\0NotifyMessage\0\0message\0"
    "NotifyConnectionError\0error\0"
    "NotifyConnectionOpened\0NotifyConnectionClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModBusConnector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,
       7,    0,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModBusConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModBusConnector *_t = static_cast<ModBusConnector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NotifyMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->NotifyConnectionError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->NotifyConnectionOpened(); break;
        case 3: _t->NotifyConnectionClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ModBusConnector::*_t)(const QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModBusConnector::NotifyMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModBusConnector::*_t)(const QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModBusConnector::NotifyConnectionError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ModBusConnector::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModBusConnector::NotifyConnectionOpened)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ModBusConnector::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModBusConnector::NotifyConnectionClosed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ModBusConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModBusConnector.data,
      qt_meta_data_ModBusConnector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModBusConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModBusConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModBusConnector.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IConnector"))
        return static_cast< IConnector*>(this);
    if (!strcmp(_clname, "tr.edu.boun.IConnector"))
        return static_cast< IConnector*>(this);
    return QObject::qt_metacast(_clname);
}

int ModBusConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ModBusConnector::NotifyMessage(const QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ModBusConnector *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModBusConnector::NotifyConnectionError(const QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ModBusConnector *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModBusConnector::NotifyConnectionOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ModBusConnector::NotifyConnectionClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x16, 0x00, 't',  'r',  '.',  'e',  'd',  'u', 
    '.',  'b',  'o',  'u',  'n',  '.',  'I',  'C', 
    'o',  'n',  'n',  'e',  'c',  't',  'o',  'r', 
    0x1b, 0x08, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0f, 0x00, 'M',  'o',  'd',  'B',  'u',  's', 
    'C',  'o',  'n',  'n',  'e',  'c',  't',  'o', 
    'r',  0x00, 0x00, 0x00, 0x9a, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x10, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, '0',  0x00, 0x00, 0x00,
    'd',  0x00, 0x00, 0x00, 'T',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x16, 0x00, 't',  'r',  '.',  'e',  'd',  'u', 
    '.',  'b',  'o',  'u',  'n',  '.',  'I',  'C', 
    'o',  'n',  'n',  'e',  'c',  't',  'o',  'r', 
    0x15, 0x08, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0b, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0f, 0x00, 'M',  'o', 
    'd',  'B',  'u',  's',  'C',  'o',  'n',  'n', 
    'e',  'c',  't',  'o',  'r',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x9a, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(ModBusConnector, ModBusConnector)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
