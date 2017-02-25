/****************************************************************************
** Meta object code from reading C++ file 'bfs_graph.h'
**
** Created: Sat Feb 25 17:37:32 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bfs_graph.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bfs_graph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BFS_Graph[] = {

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
      11,   10,   10,   10, 0x08,
      36,   10,   10,   10, 0x08,
      61,   10,   10,   10, 0x08,
      86,   10,   10,   10, 0x08,
     113,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BFS_Graph[] = {
    "BFS_Graph\0\0on_startButton_clicked()\0"
    "on_pauseButton_clicked()\0"
    "on_frashButton_clicked()\0"
    "on_explainButton_clicked()\0"
    "on_backButton_clicked()\0"
};

void BFS_Graph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BFS_Graph *_t = static_cast<BFS_Graph *>(_o);
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

const QMetaObjectExtraData BFS_Graph::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BFS_Graph::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BFS_Graph,
      qt_meta_data_BFS_Graph, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BFS_Graph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BFS_Graph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BFS_Graph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BFS_Graph))
        return static_cast<void*>(const_cast< BFS_Graph*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BFS_Graph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
