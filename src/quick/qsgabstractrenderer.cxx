//  header block begin
// /usr/include/qt/QtQuick/qsgabstractrenderer.h
#include <qsgabstractrenderer.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGAbstractRenderer is pure virtual: true
// QSGAbstractRenderer has virtual projected: true
//  header block end

//  main block begin

class MyQSGAbstractRenderer : public QSGAbstractRenderer {
public:
  virtual ~MyQSGAbstractRenderer() {}
// void QSGAbstractRenderer(class QObject *)
MyQSGAbstractRenderer(QObject * parent) : QSGAbstractRenderer(parent) {}
// void nodeChanged(class QSGNode *, class QSGNode::DirtyState)
  virtual void nodeChanged(QSGNode * node, QFlags<QSGNode::DirtyStateBit> state) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"nodeChanged", &handled, 2, (uint64_t)node, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGAbstractRenderer::nodeChanged(node, state);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QSGAbstractRenderer10metaObjectEv(void *this_) {
  return (void*)((QSGAbstractRenderer*)this_)->metaObject();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:65
// [-2] void ~QSGAbstractRenderer()
extern "C"
void C_ZN19QSGAbstractRendererD2Ev(void *this_) {
  delete (QSGAbstractRenderer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:67
// [-2] void setRootNode(class QSGRootNode *)
extern "C"
void C_ZN19QSGAbstractRenderer11setRootNodeEP11QSGRootNode(void *this_, QSGRootNode * node) {
  ((QSGAbstractRenderer*)this_)->setRootNode(node);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:68
// [8] QSGRootNode * rootNode()
extern "C"
void* C_ZNK19QSGAbstractRenderer8rootNodeEv(void *this_) {
  return (void*)((QSGAbstractRenderer*)this_)->rootNode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:69
// [-2] void setDeviceRect(const class QRect &)
extern "C"
void C_ZN19QSGAbstractRenderer13setDeviceRectERK5QRect(void *this_, QRect* rect) {
  ((QSGAbstractRenderer*)this_)->setDeviceRect(*rect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:70
// [-2] void setDeviceRect(const class QSize &)
extern "C"
void C_ZN19QSGAbstractRenderer13setDeviceRectERK5QSize(void *this_, QSize* size) {
  ((QSGAbstractRenderer*)this_)->setDeviceRect(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:71
// [16] QRect deviceRect()
extern "C"
void* C_ZNK19QSGAbstractRenderer10deviceRectEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->deviceRect();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:73
// [-2] void setViewportRect(const class QRect &)
extern "C"
void C_ZN19QSGAbstractRenderer15setViewportRectERK5QRect(void *this_, QRect* rect) {
  ((QSGAbstractRenderer*)this_)->setViewportRect(*rect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:74
// [-2] void setViewportRect(const class QSize &)
extern "C"
void C_ZN19QSGAbstractRenderer15setViewportRectERK5QSize(void *this_, QSize* size) {
  ((QSGAbstractRenderer*)this_)->setViewportRect(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:75
// [16] QRect viewportRect()
extern "C"
void* C_ZNK19QSGAbstractRenderer12viewportRectEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->viewportRect();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:77
// [-2] void setProjectionMatrixToRect(const class QRectF &)
extern "C"
void C_ZN19QSGAbstractRenderer25setProjectionMatrixToRectERK6QRectF(void *this_, QRectF* rect) {
  ((QSGAbstractRenderer*)this_)->setProjectionMatrixToRect(*rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:78
// [-2] void setProjectionMatrix(const class QMatrix4x4 &)
extern "C"
void C_ZN19QSGAbstractRenderer19setProjectionMatrixERK10QMatrix4x4(void *this_, QMatrix4x4* matrix) {
  ((QSGAbstractRenderer*)this_)->setProjectionMatrix(*matrix);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:79
// [68] QMatrix4x4 projectionMatrix()
extern "C"
void* C_ZNK19QSGAbstractRenderer16projectionMatrixEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->projectionMatrix();
return new QMatrix4x4(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:81
// [-2] void setClearColor(const class QColor &)
extern "C"
void C_ZN19QSGAbstractRenderer13setClearColorERK6QColor(void *this_, QColor* color) {
  ((QSGAbstractRenderer*)this_)->setClearColor(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:82
// [16] QColor clearColor()
extern "C"
void* C_ZNK19QSGAbstractRenderer10clearColorEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->clearColor();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:84
// [-2] void setClearMode(QSGAbstractRenderer::ClearMode)
extern "C"
void C_ZN19QSGAbstractRenderer12setClearModeE6QFlagsINS_12ClearModeBitEE(void *this_, QFlags<QSGAbstractRenderer::ClearModeBit> mode) {
  ((QSGAbstractRenderer*)this_)->setClearMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:85
// [4] QSGAbstractRenderer::ClearMode clearMode()
extern "C"
QSGAbstractRenderer::ClearMode* C_ZNK19QSGAbstractRenderer9clearModeEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->clearMode();
return new QSGAbstractRenderer::ClearMode(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:87
// [-2] void renderScene(uint)
extern "C"
void C_ZN19QSGAbstractRenderer11renderSceneEj(void *this_, uint fboId) {
  ((QSGAbstractRenderer*)this_)->renderScene(fboId);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:90
// [-2] void sceneGraphChanged()
extern "C"
void C_ZN19QSGAbstractRenderer17sceneGraphChangedEv(void *this_) {
  ((QSGAbstractRenderer*)this_)->sceneGraphChanged();
}
//  main block end