/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Thu Oct 9 23:10:45 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Qt/MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      36,   11,   11,   11, 0x0a,
      53,   11,   11,   11, 0x0a,
      68,   11,   11,   11, 0x0a,
      81,   11,   11,   11, 0x0a,
     100,   11,   11,   11, 0x0a,
     123,  119,   11,   11, 0x0a,
     145,  137,   11,   11, 0x0a,
     173,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0getScreenshotFileName()\0"
    "saveScreenshot()\0saveSceneXML()\0"
    "loadEnvMap()\0loadParameterXML()\0"
    "saveParameterXML()\0fps\0setFPS(float)\0"
    "checked\0toggleSwitchOffAction(bool)\0"
    "showAbout()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: getScreenshotFileName(); break;
        case 1: saveScreenshot(); break;
        case 2: saveSceneXML(); break;
        case 3: loadEnvMap(); break;
        case 4: loadParameterXML(); break;
        case 5: saveParameterXML(); break;
        case 6: setFPS((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: toggleSwitchOffAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: showAbout(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
