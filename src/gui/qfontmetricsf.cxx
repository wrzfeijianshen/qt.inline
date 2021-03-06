//  header block begin

// /usr/include/qt/QtGui/qfontmetrics.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontmetrics.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontMetricsF is pure virtual: false
// QFontMetricsF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFontMetricsF_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFontMetricsF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFontMetricsF_t qt_meta_stringdata_MyQFontMetricsF = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQFontMetricsF"
  },
  "MyQFontMetricsF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFontMetricsF[] = {
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
class Q_DECL_EXPORT MyQFontMetricsF : public QFontMetricsF {
public:
  virtual ~MyQFontMetricsF() {}
// void QFontMetricsF(const QFont &)
MyQFontMetricsF(const QFont & arg0) : QFontMetricsF(arg0) {}
// void QFontMetricsF(const QFont &, QPaintDevice *)
MyQFontMetricsF(const QFont & arg0, QPaintDevice * pd) : QFontMetricsF(arg0, pd) {}
// void QFontMetricsF(const QFontMetrics &)
MyQFontMetricsF(const QFontMetrics & arg0) : QFontMetricsF(arg0) {}
// void QFontMetricsF(const QFontMetricsF &)
MyQFontMetricsF(const QFontMetricsF & arg0) : QFontMetricsF(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:140
// [-2] void QFontMetricsF(const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFC2ERK5QFont(QFont* arg0) {
  return  new QFontMetricsF(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:141
// [-2] void QFontMetricsF(const QFont &, QPaintDevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFC2ERK5QFontP12QPaintDevice(QFont* arg0, QPaintDevice * pd) {
  return  new QFontMetricsF(*arg0, pd);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontmetrics.h:142
// [-2] void QFontMetricsF(const QFontMetrics &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFC2ERK12QFontMetrics(QFontMetrics* arg0) {
  return  new QFontMetricsF(*arg0);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:143
// [-2] void QFontMetricsF(const QFontMetricsF &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFC2ERKS_(QFontMetricsF* arg0) {
  return  new QFontMetricsF(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:144
// [-2] void ~QFontMetricsF()
extern "C" Q_DECL_EXPORT
void C_ZN13QFontMetricsFD2Ev(void *this_) {
  delete (QFontMetricsF*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:146
// [8] QFontMetricsF & operator=(const QFontMetricsF &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFaSERKS_(void *this_, QFontMetricsF* arg0) {
  auto& rv = ((QFontMetricsF*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:147
// [8] QFontMetricsF & operator=(const QFontMetrics &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFaSERK12QFontMetrics(void *this_, QFontMetrics* arg0) {
  auto& rv = ((QFontMetricsF*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:149
// [8] QFontMetricsF & operator=(QFontMetricsF &&)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFaSEOS_(void *this_, QFontMetricsF && other) {
  auto& rv = ((QFontMetricsF*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qfontmetrics.h:153
// [-2] void swap(QFontMetricsF &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN13QFontMetricsF4swapERS_(void *this_, QFontMetricsF* other) {
  ((QFontMetricsF*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:155
// [8] qreal ascent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF6ascentEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->ascent();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qfontmetrics.h:156
// [8] qreal capHeight()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF9capHeightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->capHeight();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:157
// [8] qreal descent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF7descentEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->descent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:158
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF6heightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:159
// [8] qreal leading()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF7leadingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->leading();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:160
// [8] qreal lineSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF11lineSpacingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->lineSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:161
// [8] qreal minLeftBearing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF14minLeftBearingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->minLeftBearing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:162
// [8] qreal minRightBearing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF15minRightBearingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->minRightBearing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:163
// [8] qreal maxWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF8maxWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->maxWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:165
// [8] qreal xHeight()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF7xHeightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->xHeight();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontmetrics.h:166
// [8] qreal averageCharWidth()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF16averageCharWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->averageCharWidth();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:168
// [1] bool inFont(QChar)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontMetricsF6inFontE5QChar(void *this_, QChar* arg0) {
  return (bool)((QFontMetricsF*)this_)->inFont(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:169
// [1] bool inFontUcs4(uint)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontMetricsF10inFontUcs4Ej(void *this_, uint ucs4) {
  return (bool)((QFontMetricsF*)this_)->inFontUcs4(ucs4);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:171
// [8] qreal leftBearing(QChar)
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF11leftBearingE5QChar(void *this_, QChar* arg0) {
  return (qreal)((QFontMetricsF*)this_)->leftBearing(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:172
// [8] qreal rightBearing(QChar)
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF12rightBearingE5QChar(void *this_, QChar* arg0) {
  return (qreal)((QFontMetricsF*)this_)->rightBearing(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:175
// [8] qreal width(const QString &)
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF5widthERK7QString(void *this_, QString* string) {
  return (qreal)((QFontMetricsF*)this_)->width(*string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:176
// [8] qreal width(QChar)
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF5widthE5QChar(void *this_, QChar* arg0) {
  return (qreal)((QFontMetricsF*)this_)->width(*arg0);
}

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtGui/qfontmetrics.h:179
// [8] qreal horizontalAdvance(const QString &, int)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF17horizontalAdvanceERK7QStringi(void *this_, QString* string, int length) {
  return (qreal)((QFontMetricsF*)this_)->horizontalAdvance(*string, length);
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtGui/qfontmetrics.h:180
// [8] qreal horizontalAdvance(QChar)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF17horizontalAdvanceE5QChar(void *this_, QChar* arg0) {
  return (qreal)((QFontMetricsF*)this_)->horizontalAdvance(*arg0);
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:182
// [32] QRectF boundingRect(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF12boundingRectERK7QString(void *this_, QString* string) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(*string);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:183
// [32] QRectF boundingRect(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF12boundingRectE5QChar(void *this_, QChar* arg0) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(*arg0);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:184
// [32] QRectF boundingRect(const QRectF &, int, const QString &, int, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF12boundingRectERK6QRectFiRK7QStringiPi(void *this_, QRectF* r, int flags, QString* string, int tabstops, int * tabarray) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(*r, flags, *string, tabstops, tabarray);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:185
// [16] QSizeF size(int, const QString &, int, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF4sizeEiRK7QStringiPi(void *this_, int flags, QString* str, int tabstops, int * tabarray) {
  auto rv = ((QFontMetricsF*)this_)->size(flags, *str, tabstops, tabarray);
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qfontmetrics.h:187
// [32] QRectF tightBoundingRect(const QString &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF17tightBoundingRectERK7QString(void *this_, QString* text) {
  auto rv = ((QFontMetricsF*)this_)->tightBoundingRect(*text);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontmetrics.h:189
// [8] QString elidedText(const QString &, Qt::TextElideMode, qreal, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF10elidedTextERK7QStringN2Qt13TextElideModeEdi(void *this_, QString* text, Qt::TextElideMode mode, qreal width, int flags) {
  auto rv = ((QFontMetricsF*)this_)->elidedText(*text, mode, width, flags);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:191
// [8] qreal underlinePos()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF12underlinePosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->underlinePos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:192
// [8] qreal overlinePos()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF11overlinePosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->overlinePos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:193
// [8] qreal strikeOutPos()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF12strikeOutPosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->strikeOutPos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:194
// [8] qreal lineWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF9lineWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->lineWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:196
// [1] bool operator==(const QFontMetricsF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontMetricsFeqERKS_(void *this_, QFontMetricsF* other) {
  return (bool)((QFontMetricsF*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:197
// [1] bool operator!=(const QFontMetricsF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontMetricsFneERKS_(void *this_, QFontMetricsF* other) {
  return (bool)((QFontMetricsF*)this_)->operator!=(*other);
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
