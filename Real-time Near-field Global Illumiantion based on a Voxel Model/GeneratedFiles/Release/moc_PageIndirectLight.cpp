/****************************************************************************
** Meta object code from reading C++ file 'PageIndirectLight.h'
**
** Created: Thu Oct 9 23:10:43 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Qt/PageIndirectLight.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PageIndirectLight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageIndirectLight[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x05,
      58,   50,   18,   18, 0x05,
      97,   93,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,   50,   18,   18, 0x0a,
     165,  159,   18,   18, 0x0a,
     200,  189,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PageIndirectLight[] = {
    "PageIndirectLight\0\0size\0"
    "forwardedPatternSize(int)\0checked\0"
    "toggledIndirectLightCheckBox(bool)\0"
    "res\0changedVoxelResolution(int)\0"
    "toggleIndirectLightCheckBox(bool)\0"
    "level\0setVoxelResolution(int)\0resolution\0"
    "setVoxelResolutionSlider(int)\0"
};

const QMetaObject PageIndirectLight::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageIndirectLight,
      qt_meta_data_PageIndirectLight, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageIndirectLight::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageIndirectLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageIndirectLight::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageIndirectLight))
        return static_cast<void*>(const_cast< PageIndirectLight*>(this));
    return QWidget::qt_metacast(_clname);
}

int PageIndirectLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: forwardedPatternSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: toggledIndirectLightCheckBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: changedVoxelResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: toggleIndirectLightCheckBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: setVoxelResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setVoxelResolutionSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PageIndirectLight::forwardedPatternSize(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageIndirectLight::toggledIndirectLightCheckBox(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PageIndirectLight::changedVoxelResolution(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
