//  header block begin

// since 0x050300
// /usr/include/qt/QtCore/qmargins.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmargins.h>
#include <QtCore>
#include "callback_inherit.h"

// QMarginsF is pure virtual: false
// QMarginsF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMarginsF_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMarginsF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMarginsF_t qt_meta_stringdata_MyQMarginsF = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMarginsF"
  },
  "MyQMarginsF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMarginsF[] = {
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
class Q_DECL_EXPORT MyQMarginsF : public QMarginsF {
public:
  virtual ~MyQMarginsF() {}
// void QMarginsF()
MyQMarginsF() : QMarginsF() {}
// void QMarginsF(qreal, qreal, qreal, qreal)
MyQMarginsF(qreal left, qreal top, qreal right, qreal bottom) : QMarginsF(left, top, right, bottom) {}
// void QMarginsF(const QMargins &)
MyQMarginsF(const QMargins & margins) : QMarginsF(margins) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:288
// [-2] void QMarginsF()
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFC2Ev() {
  return  new QMarginsF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:289
// [-2] void QMarginsF(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFC2Edddd(qreal left, qreal top, qreal right, qreal bottom) {
  return  new QMarginsF(left, top, right, bottom);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:290
// [-2] void QMarginsF(const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFC2ERK8QMargins(QMargins* margins) {
  return  new QMarginsF(*margins);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:292
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMarginsF6isNullEv(void *this_) {
  return (bool)((QMarginsF*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:294
// [8] qreal left()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QMarginsF4leftEv(void *this_) {
  return (qreal)((QMarginsF*)this_)->left();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:295
// [8] qreal top()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QMarginsF3topEv(void *this_) {
  return (qreal)((QMarginsF*)this_)->top();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:296
// [8] qreal right()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QMarginsF5rightEv(void *this_) {
  return (qreal)((QMarginsF*)this_)->right();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:297
// [8] qreal bottom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QMarginsF6bottomEv(void *this_) {
  return (qreal)((QMarginsF*)this_)->bottom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:299
// [-2] void setLeft(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QMarginsF7setLeftEd(void *this_, qreal left) {
  ((QMarginsF*)this_)->setLeft(left);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:300
// [-2] void setTop(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QMarginsF6setTopEd(void *this_, qreal top) {
  ((QMarginsF*)this_)->setTop(top);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:301
// [-2] void setRight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QMarginsF8setRightEd(void *this_, qreal right) {
  ((QMarginsF*)this_)->setRight(right);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:302
// [-2] void setBottom(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QMarginsF9setBottomEd(void *this_, qreal bottom) {
  ((QMarginsF*)this_)->setBottom(bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:304
// [32] QMarginsF & operator+=(const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFpLERKS_(void *this_, QMarginsF* margins) {
  auto& rv = ((QMarginsF*)this_)->operator+=(*margins);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:305
// [32] QMarginsF & operator-=(const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFmIERKS_(void *this_, QMarginsF* margins) {
  auto& rv = ((QMarginsF*)this_)->operator-=(*margins);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:306
// [32] QMarginsF & operator+=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFpLEd(void *this_, qreal addend) {
  auto& rv = ((QMarginsF*)this_)->operator+=(addend);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:307
// [32] QMarginsF & operator-=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFmIEd(void *this_, qreal subtrahend) {
  auto& rv = ((QMarginsF*)this_)->operator-=(subtrahend);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:308
// [32] QMarginsF & operator*=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFmLEd(void *this_, qreal factor) {
  auto& rv = ((QMarginsF*)this_)->operator*=(factor);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:309
// [32] QMarginsF & operator/=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMarginsFdVEd(void *this_, qreal divisor) {
  auto& rv = ((QMarginsF*)this_)->operator/=(divisor);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:311
// [16] QMargins toMargins()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMarginsF9toMarginsEv(void *this_) {
  auto rv = ((QMarginsF*)this_)->toMargins();
return new QMargins(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QMarginsFD2Ev(void *this_) {
  delete (QMarginsF*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
