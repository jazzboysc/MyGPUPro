/****************************************************************************
** Meta object code from reading C++ file 'PageScene.h'
**
** Created: Thu Oct 9 23:28:05 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Qt/PageScene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PageScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageScene[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      33,   10,   10,   10, 0x05,
      75,   57,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     126,   10,   10,   10, 0x0a,
     143,   10,   10,   10, 0x0a,
     163,   10,   10,   10, 0x0a,
     179,   10,   10,   10, 0x0a,
     202,   10,   10,   10, 0x0a,
     225,   10,   10,   10, 0x0a,
     265,  248,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PageScene[] = {
    "PageScene\0\0poseAddingRequested()\0"
    "poseDeletionRequested()\0r,g,b,scaleFactor\0"
    "lightColorChangeRequested(float,float,float,float)\0"
    "addCurrentPose()\0deleteCurrentPose()\0"
    "setLightColor()\0addSceneElementsList()\0"
    "setCameraZNear(double)\0setEnvMapRotation(int)\0"
    "current,previous\0"
    "handleTreeItem(QTreeWidgetItem*,QTreeWidgetItem*)\0"
};

const QMetaObject PageScene::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageScene,
      qt_meta_data_PageScene, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageScene))
        return static_cast<void*>(const_cast< PageScene*>(this));
    return QWidget::qt_metacast(_clname);
}

int PageScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: poseAddingRequested(); break;
        case 1: poseDeletionRequested(); break;
        case 2: lightColorChangeRequested((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 3: addCurrentPose(); break;
        case 4: deleteCurrentPose(); break;
        case 5: setLightColor(); break;
        case 6: addSceneElementsList(); break;
        case 7: setCameraZNear((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: setEnvMapRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: handleTreeItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PageScene::poseAddingRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PageScene::poseDeletionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PageScene::lightColorChangeRequested(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
