/****************************************************************************
** Meta object code from reading C++ file 'dashboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dashboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dashboard_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dashboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dashboard_t qt_meta_stringdata_dashboard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "dashboard"
QT_MOC_LITERAL(1, 10, 14), // "setCurrentTime"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "processImage"
QT_MOC_LITERAL(4, 39, 8), // "QPixmap*"
QT_MOC_LITERAL(5, 48, 18), // "processWeatherJson"
QT_MOC_LITERAL(6, 67, 12), // "QJsonObject*"
QT_MOC_LITERAL(7, 80, 4), // "json"
QT_MOC_LITERAL(8, 85, 30), // "on_imageDownloadButton_clicked"
QT_MOC_LITERAL(9, 116, 32) // "on_weatherDownloadButton_clicked"

    },
    "dashboard\0setCurrentTime\0\0processImage\0"
    "QPixmap*\0processWeatherJson\0QJsonObject*\0"
    "json\0on_imageDownloadButton_clicked\0"
    "on_weatherDownloadButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dashboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dashboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dashboard *_t = static_cast<dashboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentTime(); break;
        case 1: _t->processImage((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 2: _t->processWeatherJson((*reinterpret_cast< QJsonObject*(*)>(_a[1]))); break;
        case 3: _t->on_imageDownloadButton_clicked(); break;
        case 4: _t->on_weatherDownloadButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject dashboard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_dashboard.data,
      qt_meta_data_dashboard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dashboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dashboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dashboard.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int dashboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
