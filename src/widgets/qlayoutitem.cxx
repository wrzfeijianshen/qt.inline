//  header block begin
// /usr/include/qt/QtWidgets/qlayoutitem.h
#include <qlayoutitem.h>
#include <QtWidgets>

// QLayoutItem is pure virtual: true
//  header block end

//  main block begin

class MyQLayoutItem : public QLayoutItem {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:64
// [-2] void ~QLayoutItem()
extern "C"
void C_ZN11QLayoutItemD1Ev(void *this_) {
  delete (QLayoutItem*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:65
// [8] QSize sizeHint()
extern "C"
void* C_ZNK11QLayoutItem8sizeHintEv(void *this_) {
  auto rv = ((QLayoutItem*)this_)->sizeHint();
return new QSize(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:66
// [8] QSize minimumSize()
extern "C"
void* C_ZNK11QLayoutItem11minimumSizeEv(void *this_) {
  auto rv = ((QLayoutItem*)this_)->minimumSize();
return new QSize(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:67
// [8] QSize maximumSize()
extern "C"
void* C_ZNK11QLayoutItem11maximumSizeEv(void *this_) {
  auto rv = ((QLayoutItem*)this_)->maximumSize();
return new QSize(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:68
// [4] Qt::Orientations expandingDirections()
extern "C"
Qt::Orientations C_ZNK11QLayoutItem19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QLayoutItem*)this_)->expandingDirections();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:69
// [-2] void setGeometry(const class QRect &)
extern "C"
void C_ZN11QLayoutItem11setGeometryERK5QRect(void *this_, const QRect & arg0) {
  ((QLayoutItem*)this_)->setGeometry(arg0);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:70
// [16] QRect geometry()
extern "C"
void* C_ZNK11QLayoutItem8geometryEv(void *this_) {
  auto rv = ((QLayoutItem*)this_)->geometry();
return new QRect(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:71
// [1] bool isEmpty()
extern "C"
bool C_ZNK11QLayoutItem7isEmptyEv(void *this_) {
  return (bool)((QLayoutItem*)this_)->isEmpty();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:72
// [1] bool hasHeightForWidth()
extern "C"
bool C_ZNK11QLayoutItem17hasHeightForWidthEv(void *this_) {
  return (bool)((QLayoutItem*)this_)->hasHeightForWidth();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:73
// [4] int heightForWidth(int)
extern "C"
int C_ZNK11QLayoutItem14heightForWidthEi(void *this_, int arg0) {
  return (int)((QLayoutItem*)this_)->heightForWidth(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:74
// [4] int minimumHeightForWidth(int)
extern "C"
int C_ZNK11QLayoutItem21minimumHeightForWidthEi(void *this_, int arg0) {
  return (int)((QLayoutItem*)this_)->minimumHeightForWidth(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:75
// [-2] void invalidate()
extern "C"
void C_ZN11QLayoutItem10invalidateEv(void *this_) {
  ((QLayoutItem*)this_)->invalidate();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:77
// [8] QWidget * widget()
extern "C"
void* C_ZN11QLayoutItem6widgetEv(void *this_) {
  return (void*)((QLayoutItem*)this_)->widget();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:78
// [8] QLayout * layout()
extern "C"
void* C_ZN11QLayoutItem6layoutEv(void *this_) {
  return (void*)((QLayoutItem*)this_)->layout();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:79
// [8] QSpacerItem * spacerItem()
extern "C"
void* C_ZN11QLayoutItem10spacerItemEv(void *this_) {
  return (void*)((QLayoutItem*)this_)->spacerItem();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:81
// [4] Qt::Alignment alignment()
extern "C"
Qt::Alignment C_ZNK11QLayoutItem9alignmentEv(void *this_) {
  return (Qt::Alignment)((QLayoutItem*)this_)->alignment();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:83
// [4] QSizePolicy::ControlTypes controlTypes()
extern "C"
QSizePolicy::ControlTypes C_ZNK11QLayoutItem12controlTypesEv(void *this_) {
  return (QSizePolicy::ControlTypes)((QLayoutItem*)this_)->controlTypes();
}
//  main block end
