/****************************************************************************
** Meta object code from reading C++ file 'stackinview.h'
**
** Created: Sat Mar 25 09:58:45 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stackinview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stackinview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stackInView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      38,   12,   12,   12, 0x08,
      63,   12,   12,   12, 0x08,
      88,   12,   12,   12, 0x08,
     115,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_stackInView[] = {
    "stackInView\0\0on_startButton_clicked()\0"
    "on_pauseButton_clicked()\0"
    "on_frashButton_clicked()\0"
    "on_explainButton_clicked()\0"
    "on_backButton_clicked()\0"
};

void stackInView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        stackInView *_t = static_cast<stackInView *>(_o);
        switch (_id) {
        case 0: _t->on_startButton_clicked(); break;
        case 1: _t->on_pauseButton_clicked(); break;
        case 2: _t->on_frashButton_clicked(); break;
        case 3: _t->on_explainButton_clicked(); break;
        case 4: _t->on_backButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData stackInView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stackInView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_stackInView,
      qt_meta_data_stackInView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stackInView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stackInView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stackInView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stackInView))
        return static_cast<void*>(const_cast< stackInView*>(this));
    return QWidget::qt_metacast(_clname);
}

int stackInView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
