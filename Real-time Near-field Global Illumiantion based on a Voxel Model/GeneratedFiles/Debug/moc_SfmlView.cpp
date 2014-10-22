/****************************************************************************
** Meta object code from reading C++ file 'SfmlView.h'
**
** Created: Thu Oct 9 23:40:59 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SfmlView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SfmlView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SfmlView[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x05,
      32,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,    9,    9,    9, 0x0a,
      73,    9,    9,    9, 0x0a,
     111,  105,    9,    9, 0x0a,
     141,  139,    9,    9, 0x0a,
     172,    9,    9,    9, 0x0a,
     192,    9,    9,    9, 0x0a,
     210,    9,    9,    9, 0x0a,
     234,  232,    9,    9, 0x0a,
     263,    9,    9,    9, 0x0a,
     281,    9,    9,    9, 0x0a,
     313,  301,    9,    9, 0x0a,
     365,  360,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SfmlView[] = {
    "SfmlView\0\0fps\0updatedFPS(float)\0"
    "sceneLoaded()\0forceRandomTextureUpdate()\0"
    "forceTogglingAllObjAnimations()\0index\0"
    "forceSettingCameraPose(int)\0f\0"
    "forceSettingCameraFovH(double)\0"
    "forcePoseDeletion()\0forcePoseAdding()\0"
    "forceInstanceAdding()\0i\0"
    "forceILBufferSizeChange(int)\0"
    "forceSpotAdding()\0forceSpotDeletion()\0"
    "r,g,b,scale\0forceLightColorChange(float,float,float,float)\0"
    "show\0toggleTimerMonitor(bool)\0"
};

const QMetaObject SfmlView::staticMetaObject = {
    { &QSfmlWidget::staticMetaObject, qt_meta_stringdata_SfmlView,
      qt_meta_data_SfmlView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SfmlView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SfmlView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SfmlView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SfmlView))
        return static_cast<void*>(const_cast< SfmlView*>(this));
    return QSfmlWidget::qt_metacast(_clname);
}

int SfmlView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSfmlWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updatedFPS((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: sceneLoaded(); break;
        case 2: forceRandomTextureUpdate(); break;
        case 3: forceTogglingAllObjAnimations(); break;
        case 4: forceSettingCameraPose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: forceSettingCameraFovH((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: forcePoseDeletion(); break;
        case 7: forcePoseAdding(); break;
        case 8: forceInstanceAdding(); break;
        case 9: forceILBufferSizeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: forceSpotAdding(); break;
        case 11: forceSpotDeletion(); break;
        case 12: forceLightColorChange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 13: toggleTimerMonitor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SfmlView::updatedFPS(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SfmlView::sceneLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
