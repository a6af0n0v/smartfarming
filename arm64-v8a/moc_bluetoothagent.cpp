/****************************************************************************
** Meta object code from reading C++ file 'bluetoothagent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SmartFarming/bluetoothagent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BluetoothAgent_t {
    QByteArrayData data[44];
    char stringdata0[566];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluetoothAgent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluetoothAgent_t qt_meta_stringdata_BluetoothAgent = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BluetoothAgent"
QT_MOC_LITERAL(1, 15, 9), // "connected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "finished"
QT_MOC_LITERAL(4, 35, 8), // "canceled"
QT_MOC_LITERAL(5, 44, 9), // "dataReady"
QT_MOC_LITERAL(6, 54, 5), // "error"
QT_MOC_LITERAL(7, 60, 27), // "QLowEnergyController::Error"
QT_MOC_LITERAL(8, 88, 3), // "err"
QT_MOC_LITERAL(9, 92, 12), // "stateChanged"
QT_MOC_LITERAL(10, 105, 18), // "onDeviceDiscovered"
QT_MOC_LITERAL(11, 124, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(12, 145, 4), // "info"
QT_MOC_LITERAL(13, 150, 10), // "onFinished"
QT_MOC_LITERAL(14, 161, 10), // "onCanceled"
QT_MOC_LITERAL(15, 172, 19), // "onServiceDiscovered"
QT_MOC_LITERAL(16, 192, 14), // "QBluetoothUuid"
QT_MOC_LITERAL(17, 207, 7), // "service"
QT_MOC_LITERAL(18, 215, 19), // "onDiscoveryFinished"
QT_MOC_LITERAL(19, 235, 11), // "onConnected"
QT_MOC_LITERAL(20, 247, 7), // "onError"
QT_MOC_LITERAL(21, 255, 14), // "onStateChanged"
QT_MOC_LITERAL(22, 270, 31), // "QLowEnergyService::ServiceState"
QT_MOC_LITERAL(23, 302, 8), // "newState"
QT_MOC_LITERAL(24, 311, 24), // "onCharacteristicsChanged"
QT_MOC_LITERAL(25, 336, 24), // "QLowEnergyCharacteristic"
QT_MOC_LITERAL(26, 361, 14), // "characteristic"
QT_MOC_LITERAL(27, 376, 8), // "newValue"
QT_MOC_LITERAL(28, 385, 19), // "onDescriptorWritten"
QT_MOC_LITERAL(29, 405, 20), // "QLowEnergyDescriptor"
QT_MOC_LITERAL(30, 426, 10), // "descriptor"
QT_MOC_LITERAL(31, 437, 7), // "newValu"
QT_MOC_LITERAL(32, 445, 20), // "onCharacteristicRead"
QT_MOC_LITERAL(33, 466, 5), // "value"
QT_MOC_LITERAL(34, 472, 19), // "keepConnectionAlive"
QT_MOC_LITERAL(35, 492, 14), // "measureInCycle"
QT_MOC_LITERAL(36, 507, 7), // "connect"
QT_MOC_LITERAL(37, 515, 10), // "disconnect"
QT_MOC_LITERAL(38, 526, 7), // "measure"
QT_MOC_LITERAL(39, 534, 5), // "state"
QT_MOC_LITERAL(40, 540, 6), // "result"
QT_MOC_LITERAL(41, 547, 6), // "NEGVCC"
QT_MOC_LITERAL(42, 554, 3), // "ADC"
QT_MOC_LITERAL(43, 558, 7) // "current"

    },
    "BluetoothAgent\0connected\0\0finished\0"
    "canceled\0dataReady\0error\0"
    "QLowEnergyController::Error\0err\0"
    "stateChanged\0onDeviceDiscovered\0"
    "QBluetoothDeviceInfo\0info\0onFinished\0"
    "onCanceled\0onServiceDiscovered\0"
    "QBluetoothUuid\0service\0onDiscoveryFinished\0"
    "onConnected\0onError\0onStateChanged\0"
    "QLowEnergyService::ServiceState\0"
    "newState\0onCharacteristicsChanged\0"
    "QLowEnergyCharacteristic\0characteristic\0"
    "newValue\0onDescriptorWritten\0"
    "QLowEnergyDescriptor\0descriptor\0newValu\0"
    "onCharacteristicRead\0value\0"
    "keepConnectionAlive\0measureInCycle\0"
    "connect\0disconnect\0measure\0state\0"
    "result\0NEGVCC\0ADC\0current"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluetoothAgent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       5,  170, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,
       4,    0,  126,    2, 0x06 /* Public */,
       5,    0,  127,    2, 0x06 /* Public */,
       6,    1,  128,    2, 0x06 /* Public */,
       9,    1,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  134,    2, 0x0a /* Public */,
      13,    0,  137,    2, 0x0a /* Public */,
      14,    0,  138,    2, 0x0a /* Public */,
      15,    1,  139,    2, 0x0a /* Public */,
      18,    0,  142,    2, 0x0a /* Public */,
      19,    0,  143,    2, 0x0a /* Public */,
      20,    1,  144,    2, 0x0a /* Public */,
      21,    1,  147,    2, 0x0a /* Public */,
      24,    2,  150,    2, 0x0a /* Public */,
      28,    2,  155,    2, 0x0a /* Public */,
      32,    2,  160,    2, 0x0a /* Public */,
      34,    0,  165,    2, 0x0a /* Public */,
      35,    0,  166,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      36,    0,  167,    2, 0x02 /* Public */,
      37,    0,  168,    2, 0x02 /* Public */,
      38,    0,  169,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QByteArray,   26,   27,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QByteArray,   30,   31,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QByteArray,   26,   33,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      39, QMetaType::Int, 0x00495103,
      40, QMetaType::QString, 0x00095001,
      41, QMetaType::Int, 0x00095001,
      42, QMetaType::Int, 0x00095001,
      43, QMetaType::Double, 0x00095001,

 // properties: notify_signal_id
       5,
       0,
       0,
       0,
       0,

       0        // eod
};

void BluetoothAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BluetoothAgent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->finished(); break;
        case 2: _t->canceled(); break;
        case 3: _t->dataReady(); break;
        case 4: _t->error((*reinterpret_cast< QLowEnergyController::Error(*)>(_a[1]))); break;
        case 5: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onDeviceDiscovered((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 7: _t->onFinished(); break;
        case 8: _t->onCanceled(); break;
        case 9: _t->onServiceDiscovered((*reinterpret_cast< const QBluetoothUuid(*)>(_a[1]))); break;
        case 10: _t->onDiscoveryFinished(); break;
        case 11: _t->onConnected(); break;
        case 12: _t->onError((*reinterpret_cast< QLowEnergyController::Error(*)>(_a[1]))); break;
        case 13: _t->onStateChanged((*reinterpret_cast< QLowEnergyService::ServiceState(*)>(_a[1]))); break;
        case 14: _t->onCharacteristicsChanged((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 15: _t->onDescriptorWritten((*reinterpret_cast< const QLowEnergyDescriptor(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 16: _t->onCharacteristicRead((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 17: _t->keepConnectionAlive(); break;
        case 18: _t->measureInCycle(); break;
        case 19: _t->connect(); break;
        case 20: _t->disconnect(); break;
        case 21: _t->measure(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::Error >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothUuid >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::Error >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceState >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyDescriptor >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothAgent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAgent::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothAgent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAgent::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BluetoothAgent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAgent::canceled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BluetoothAgent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAgent::dataReady)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BluetoothAgent::*)(QLowEnergyController::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAgent::error)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BluetoothAgent::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAgent::stateChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BluetoothAgent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->readState(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getResult(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getNEGVCC(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getADC(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->getCurrent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BluetoothAgent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setState(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BluetoothAgent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BluetoothAgent.data,
    qt_meta_data_BluetoothAgent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BluetoothAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothAgent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BluetoothAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BluetoothAgent::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BluetoothAgent::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BluetoothAgent::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BluetoothAgent::dataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BluetoothAgent::error(QLowEnergyController::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BluetoothAgent::stateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
