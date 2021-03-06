//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QMouseEvent is pure virtual: false
// QMouseEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMouseEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMouseEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMouseEvent_t qt_meta_stringdata_MyQMouseEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQMouseEvent"
  },
  "MyQMouseEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMouseEvent[] = {
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
class Q_DECL_EXPORT MyQMouseEvent : public QMouseEvent {
public:
  virtual ~MyQMouseEvent() {}
// void QMouseEvent(QEvent::Type, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type_, const QPointF & localPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type_, localPos, button, buttons, modifiers) {}
// void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type_, const QPointF & localPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type_, localPos, screenPos, button, buttons, modifiers) {}
// void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type_, localPos, windowPos, screenPos, button, buttons, modifiers) {}
// void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::MouseEventSource)
MyQMouseEvent(QEvent::Type type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::MouseEventSource source) : QMouseEvent(type_, localPos, windowPos, screenPos, button, buttons, modifiers, source) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:107
// [-2] void QMouseEvent(QEvent::Type, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFN2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type_, QPointF* localPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QMouseEvent(type_, *localPos, button, buttons, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:109
// [-2] void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type_, QPointF* localPos, QPointF* screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QMouseEvent(type_, *localPos, *screenPos, button, buttons, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:112
// [-2] void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type_, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QMouseEvent(type_, *localPos, *windowPos, *screenPos, button, buttons, modifiers);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qevent.h:115
// [-2] void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::MouseEventSource)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEENS5_16MouseEventSourceE(QEvent::Type type_, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::MouseEventSource source) {
  return  new QMouseEvent(type_, *localPos, *windowPos, *screenPos, button, buttons, modifiers, source);
}
#endif // QT_VERSION >= 0x050600

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:118
// [-2] void ~QMouseEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QMouseEventD2Ev(void *this_) {
  delete (QMouseEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:121
// [8] QPoint pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMouseEvent3posEv(void *this_) {
  auto rv = ((QMouseEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:122
// [8] QPoint globalPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMouseEvent9globalPosEv(void *this_) {
  auto rv = ((QMouseEvent*)this_)->globalPos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:123
// [4] int x()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMouseEvent1xEv(void *this_) {
  return (int)((QMouseEvent*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:124
// [4] int y()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMouseEvent1yEv(void *this_) {
  return (int)((QMouseEvent*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:125
// [4] int globalX()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMouseEvent7globalXEv(void *this_) {
  return (int)((QMouseEvent*)this_)->globalX();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:126
// [4] int globalY()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMouseEvent7globalYEv(void *this_) {
  return (int)((QMouseEvent*)this_)->globalY();
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qevent.h:128
// [16] const QPointF & localPos()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMouseEvent8localPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->localPos();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qevent.h:129
// [16] const QPointF & windowPos()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMouseEvent9windowPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->windowPos();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qevent.h:130
// [16] const QPointF & screenPos()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMouseEvent9screenPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->screenPos();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:132
// [4] Qt::MouseButton button()
extern "C" Q_DECL_EXPORT
Qt::MouseButton C_ZNK11QMouseEvent6buttonEv(void *this_) {
  return (Qt::MouseButton)((QMouseEvent*)this_)->button();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:133
// [4] Qt::MouseButtons buttons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK11QMouseEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QMouseEvent*)this_)->buttons();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:135
// [-2] void setLocalPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMouseEvent11setLocalPosERK7QPointF(void *this_, QPointF* localPosition) {
  ((QMouseEvent*)this_)->setLocalPos(*localPosition);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qevent.h:141
// [4] Qt::MouseEventSource source()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
Qt::MouseEventSource C_ZNK11QMouseEvent6sourceEv(void *this_) {
  return (Qt::MouseEventSource)((QMouseEvent*)this_)->source();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qevent.h:142
// [4] Qt::MouseEventFlags flags()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
Qt::MouseEventFlags C_ZNK11QMouseEvent5flagsEv(void *this_) {
  return (Qt::MouseEventFlags)((QMouseEvent*)this_)->flags();
}
#endif // QT_VERSION >= 0x050300

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
