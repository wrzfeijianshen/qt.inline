//  header block begin
// /usr/include/qt/QtGui/qdrag.h
#include <qdrag.h>
#include <QtGui>

// QDrag is pure virtual: false
//  header block end

//  main block begin

class MyQDrag : public QDrag {
public:
MyQDrag(QObject * dragSource) : QDrag(dragSource) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:59
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK5QDrag10metaObjectEv(void *this_) {
  return (void*)((QDrag*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:62
// [-2] void QDrag(class QObject *)
extern "C"
void* C_ZN5QDragC1EP7QObject(QObject * dragSource) {
  (MyQDrag*)(0);
  return  new MyQDrag(dragSource);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:63
// [-2] void ~QDrag()
extern "C"
void C_ZN5QDragD1Ev(void *this_) {
  delete (QDrag*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:65
// [-2] void setMimeData(class QMimeData *)
extern "C"
void C_ZN5QDrag11setMimeDataEP9QMimeData(void *this_, QMimeData * data) {
  ((QDrag*)this_)->setMimeData(data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:66
// [8] QMimeData * mimeData()
extern "C"
void* C_ZNK5QDrag8mimeDataEv(void *this_) {
  return (void*)((QDrag*)this_)->mimeData();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:68
// [-2] void setPixmap(const class QPixmap &)
extern "C"
void C_ZN5QDrag9setPixmapERK7QPixmap(void *this_, const QPixmap & arg0) {
  ((QDrag*)this_)->setPixmap(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:69
// [32] QPixmap pixmap()
extern "C"
void* C_ZNK5QDrag6pixmapEv(void *this_) {
  auto rv = ((QDrag*)this_)->pixmap();
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:71
// [-2] void setHotSpot(const class QPoint &)
extern "C"
void C_ZN5QDrag10setHotSpotERK6QPoint(void *this_, const QPoint & hotspot) {
  ((QDrag*)this_)->setHotSpot(hotspot);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:72
// [8] QPoint hotSpot()
extern "C"
void* C_ZNK5QDrag7hotSpotEv(void *this_) {
  auto rv = ((QDrag*)this_)->hotSpot();
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:74
// [8] QObject * source()
extern "C"
void* C_ZNK5QDrag6sourceEv(void *this_) {
  return (void*)((QDrag*)this_)->source();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:75
// [8] QObject * target()
extern "C"
void* C_ZNK5QDrag6targetEv(void *this_) {
  return (void*)((QDrag*)this_)->target();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:81
// [-2] void setDragCursor(const class QPixmap &, Qt::DropAction)
extern "C"
void C_ZN5QDrag13setDragCursorERK7QPixmapN2Qt10DropActionE(void *this_, const QPixmap & cursor, Qt::DropAction action) {
  ((QDrag*)this_)->setDragCursor(cursor, action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:82
// [32] QPixmap dragCursor(Qt::DropAction)
extern "C"
void* C_ZNK5QDrag10dragCursorEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  auto rv = ((QDrag*)this_)->dragCursor(action);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:84
// [4] Qt::DropActions supportedActions()
extern "C"
Qt::DropActions C_ZNK5QDrag16supportedActionsEv(void *this_) {
  return (Qt::DropActions)((QDrag*)this_)->supportedActions();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:85
// [4] Qt::DropAction defaultAction()
extern "C"
Qt::DropAction C_ZNK5QDrag13defaultActionEv(void *this_) {
  return (Qt::DropAction)((QDrag*)this_)->defaultAction();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:87
// [-2] void cancel()
extern "C"
void C_ZN5QDrag6cancelEv() {
  QDrag::cancel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:90
// [-2] void actionChanged(Qt::DropAction)
extern "C"
void C_ZN5QDrag13actionChangedEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QDrag*)this_)->actionChanged(action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:91
// [-2] void targetChanged(class QObject *)
extern "C"
void C_ZN5QDrag13targetChangedEP7QObject(void *this_, QObject * newTarget) {
  ((QDrag*)this_)->targetChanged(newTarget);
}
//  main block end
