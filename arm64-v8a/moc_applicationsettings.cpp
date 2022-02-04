/****************************************************************************
** Meta object code from reading C++ file 'applicationsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SmartFarming/applicationsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApplicationSettings_t {
    QByteArrayData data[12];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplicationSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplicationSettings_t qt_meta_stringdata_ApplicationSettings = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ApplicationSettings"
QT_MOC_LITERAL(1, 20, 15), // "intervalChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "repeatsChanged"
QT_MOC_LITERAL(4, 52, 15), // "isCyclicChanged"
QT_MOC_LITERAL(5, 68, 8), // "rChanged"
QT_MOC_LITERAL(6, 77, 11), // "VrefChanged"
QT_MOC_LITERAL(7, 89, 8), // "Interval"
QT_MOC_LITERAL(8, 98, 7), // "Repeats"
QT_MOC_LITERAL(9, 106, 8), // "isCyclic"
QT_MOC_LITERAL(10, 115, 1), // "R"
QT_MOC_LITERAL(11, 117, 4) // "VREF"

    },
    "ApplicationSettings\0intervalChanged\0"
    "\0repeatsChanged\0isCyclicChanged\0"
    "rChanged\0VrefChanged\0Interval\0Repeats\0"
    "isCyclic\0R\0VREF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplicationSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void ApplicationSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplicationSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->intervalChanged(); break;
        case 1: _t->repeatsChanged(); break;
        case 2: _t->isCyclicChanged(); break;
        case 3: _t->rChanged(); break;
        case 4: _t->VrefChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApplicationSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationSettings::intervalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ApplicationSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationSettings::repeatsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ApplicationSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationSettings::isCyclicChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ApplicationSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationSettings::rChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ApplicationSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationSettings::VrefChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ApplicationSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getInterval(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getRepeats(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsCyclic(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getR(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getVREF(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ApplicationSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInterval(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRepeats(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setIsCyclic(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setR(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setVREF(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ApplicationSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ApplicationSettings.data,
    qt_meta_data_ApplicationSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApplicationSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ApplicationSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void ApplicationSettings::intervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ApplicationSettings::repeatsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ApplicationSettings::isCyclicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ApplicationSettings::rChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ApplicationSettings::VrefChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
