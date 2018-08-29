//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGGeometryNode is pure virtual: false
// QSGGeometryNode has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGGeometryNode_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGGeometryNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGGeometryNode_t qt_meta_stringdata_MyQSGGeometryNode = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQSGGeometryNode"
  },
  "MyQSGGeometryNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGGeometryNode[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQSGGeometryNode : public QSGGeometryNode {
public:
  virtual ~MyQSGGeometryNode() {}
// void QSGGeometryNode()
MyQSGGeometryNode() : QSGGeometryNode() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:231
// [-2] void QSGGeometryNode()
extern "C" Q_DECL_EXPORT
void* C_ZN15QSGGeometryNodeC2Ev() {
  return  new QSGGeometryNode();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:232
// [-2] void ~QSGGeometryNode()
extern "C" Q_DECL_EXPORT
void C_ZN15QSGGeometryNodeD2Ev(void *this_) {
  delete (QSGGeometryNode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:234
// [-2] void setMaterial(QSGMaterial *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSGGeometryNode11setMaterialEP11QSGMaterial(void *this_, QSGMaterial * material) {
  ((QSGGeometryNode*)this_)->setMaterial(material);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:235
// [8] QSGMaterial * material()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSGGeometryNode8materialEv(void *this_) {
  return (void*)((QSGGeometryNode*)this_)->material();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:237
// [-2] void setOpaqueMaterial(QSGMaterial *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSGGeometryNode17setOpaqueMaterialEP11QSGMaterial(void *this_, QSGMaterial * material) {
  ((QSGGeometryNode*)this_)->setOpaqueMaterial(material);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:238
// [8] QSGMaterial * opaqueMaterial()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSGGeometryNode14opaqueMaterialEv(void *this_) {
  return (void*)((QSGGeometryNode*)this_)->opaqueMaterial();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:240
// [8] QSGMaterial * activeMaterial()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSGGeometryNode14activeMaterialEv(void *this_) {
  return (void*)((QSGGeometryNode*)this_)->activeMaterial();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:242
// [-2] void setRenderOrder(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QSGGeometryNode14setRenderOrderEi(void *this_, int order) {
  ((QSGGeometryNode*)this_)->setRenderOrder(order);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:243
// [4] int renderOrder()
extern "C" Q_DECL_EXPORT
int C_ZNK15QSGGeometryNode11renderOrderEv(void *this_) {
  return (int)((QSGGeometryNode*)this_)->renderOrder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:245
// [-2] void setInheritedOpacity(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QSGGeometryNode19setInheritedOpacityEd(void *this_, qreal opacity) {
  ((QSGGeometryNode*)this_)->setInheritedOpacity(opacity);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:246
// [8] qreal inheritedOpacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QSGGeometryNode16inheritedOpacityEv(void *this_) {
  return (qreal)((QSGGeometryNode*)this_)->inheritedOpacity();
}

//  main block end
