/****************************************************************************
** Meta object code from reading C++ file 'seqdelview.h'
**
** Created: Sat Feb 25 17:37:21 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../seqdelview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seqdelview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_seqDelView[] = {

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
      12,   11,   11,   11, 0x08,
      39,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      93,   11,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_seqDelView[] = {
    "seqDelView\0\0on_startButton_2_clicked()\0"
    "on_pauseButton_2_clicked()\0"
    "on_frashButton_2_clicked()\0"
    "on_explainButton_2_clicked()\0"
    "on_backButton_2_clicked()\0"
};

void seqDelView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        seqDelView *_t = static_cast<seqDelView *>(_o);
        switch (_id) {
        case 0: _t->on_startButton_2_clicked(); break;
        case 1: _t->on_pauseButton_2_clicked(); break;
        case 2: _t->on_frashButton_2_clicked(); break;
        case 3: _t->on_explainButton_2_clicked(); break;
        case 4: _t->on_backButton_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData seqDelView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject seqDelView::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_seqDelView,
      qt_meta_data_seqDelView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &seqDelView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *seqDelView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *seqDelView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_seqDelView))
        return static_cast<void*>(const_cast< seqDelView*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int seqDelView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
