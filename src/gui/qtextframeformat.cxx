//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFrameFormat is pure virtual: false
// QTextFrameFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextFrameFormat_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextFrameFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextFrameFormat_t qt_meta_stringdata_MyQTextFrameFormat = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQTextFrameFormat"
  },
  "MyQTextFrameFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextFrameFormat[] = {
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
class Q_DECL_EXPORT MyQTextFrameFormat : public QTextFrameFormat {
public:
  virtual ~MyQTextFrameFormat() {}
// void QTextFrameFormat()
MyQTextFrameFormat() : QTextFrameFormat() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:784
// [-2] void QTextFrameFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN16QTextFrameFormatC2Ev() {
  return  new QTextFrameFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:786
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTextFrameFormat7isValidEv(void *this_) {
  return (bool)((QTextFrameFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:810
// [-2] void setPosition(QTextFrameFormat::Position)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat11setPositionENS_8PositionE(void *this_, QTextFrameFormat::Position f) {
  ((QTextFrameFormat*)this_)->setPosition(f);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:812
// [4] QTextFrameFormat::Position position()
extern "C" Q_DECL_EXPORT
QTextFrameFormat::Position C_ZNK16QTextFrameFormat8positionEv(void *this_) {
  return (QTextFrameFormat::Position)((QTextFrameFormat*)this_)->position();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:815
// [-2] void setBorder(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat9setBorderEd(void *this_, qreal border) {
  ((QTextFrameFormat*)this_)->setBorder(border);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:816
// [8] qreal border()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextFrameFormat6borderEv(void *this_) {
  return (qreal)((QTextFrameFormat*)this_)->border();
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:819
// [-2] void setBorderBrush(const QBrush &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat14setBorderBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QTextFrameFormat*)this_)->setBorderBrush(*brush);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:821
// [8] QBrush borderBrush()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTextFrameFormat11borderBrushEv(void *this_) {
  auto rv = ((QTextFrameFormat*)this_)->borderBrush();
return new QBrush(rv);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:824
// [-2] void setBorderStyle(QTextFrameFormat::BorderStyle)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat14setBorderStyleENS_11BorderStyleE(void *this_, QTextFrameFormat::BorderStyle style) {
  ((QTextFrameFormat*)this_)->setBorderStyle(style);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:826
// [4] QTextFrameFormat::BorderStyle borderStyle()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
QTextFrameFormat::BorderStyle C_ZNK16QTextFrameFormat11borderStyleEv(void *this_) {
  return (QTextFrameFormat::BorderStyle)((QTextFrameFormat*)this_)->borderStyle();
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:829
// [-2] void setMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat9setMarginEd(void *this_, qreal margin) {
  ((QTextFrameFormat*)this_)->setMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:830
// [8] qreal margin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextFrameFormat6marginEv(void *this_) {
  return (qreal)((QTextFrameFormat*)this_)->margin();
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:833
// [-2] void setTopMargin(qreal)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat12setTopMarginEd(void *this_, qreal margin) {
  ((QTextFrameFormat*)this_)->setTopMargin(margin);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:834
// [8] qreal topMargin()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextFrameFormat9topMarginEv(void *this_) {
  return (qreal)((QTextFrameFormat*)this_)->topMargin();
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:836
// [-2] void setBottomMargin(qreal)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat15setBottomMarginEd(void *this_, qreal margin) {
  ((QTextFrameFormat*)this_)->setBottomMargin(margin);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:837
// [8] qreal bottomMargin()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextFrameFormat12bottomMarginEv(void *this_) {
  return (qreal)((QTextFrameFormat*)this_)->bottomMargin();
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:839
// [-2] void setLeftMargin(qreal)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat13setLeftMarginEd(void *this_, qreal margin) {
  ((QTextFrameFormat*)this_)->setLeftMargin(margin);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:840
// [8] qreal leftMargin()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextFrameFormat10leftMarginEv(void *this_) {
  return (qreal)((QTextFrameFormat*)this_)->leftMargin();
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:842
// [-2] void setRightMargin(qreal)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat14setRightMarginEd(void *this_, qreal margin) {
  ((QTextFrameFormat*)this_)->setRightMargin(margin);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:843
// [8] qreal rightMargin()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextFrameFormat11rightMarginEv(void *this_) {
  return (qreal)((QTextFrameFormat*)this_)->rightMargin();
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:845
// [-2] void setPadding(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat10setPaddingEd(void *this_, qreal padding) {
  ((QTextFrameFormat*)this_)->setPadding(padding);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:846
// [8] qreal padding()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextFrameFormat7paddingEv(void *this_) {
  return (qreal)((QTextFrameFormat*)this_)->padding();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:849
// [-2] void setWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat8setWidthEd(void *this_, qreal width) {
  ((QTextFrameFormat*)this_)->setWidth(width);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:850
// [-2] void setWidth(const QTextLength &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat8setWidthERK11QTextLength(void *this_, QTextLength* length) {
  ((QTextFrameFormat*)this_)->setWidth(*length);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:852
// [16] QTextLength width()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTextFrameFormat5widthEv(void *this_) {
  auto rv = ((QTextFrameFormat*)this_)->width();
return new QTextLength(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:855
// [-2] void setHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat9setHeightEd(void *this_, qreal height) {
  ((QTextFrameFormat*)this_)->setHeight(height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:856
// [-2] void setHeight(const QTextLength &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat9setHeightERK11QTextLength(void *this_, QTextLength* height) {
  ((QTextFrameFormat*)this_)->setHeight(*height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:857
// [16] QTextLength height()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTextFrameFormat6heightEv(void *this_) {
  auto rv = ((QTextFrameFormat*)this_)->height();
return new QTextLength(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextformat.h:860
// [-2] void setPageBreakPolicy(QTextFormat::PageBreakFlags)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE(void *this_, QFlags<QTextFormat::PageBreakFlag> flags) {
  ((QTextFrameFormat*)this_)->setPageBreakPolicy(flags);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextformat.h:862
// [4] QTextFormat::PageBreakFlags pageBreakPolicy()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QTextFormat::PageBreakFlags* C_ZNK16QTextFrameFormat15pageBreakPolicyEv(void *this_) {
  auto rv = ((QTextFrameFormat*)this_)->pageBreakPolicy();
return new QTextFormat::PageBreakFlags(rv);
}
#endif // QT_VERSION >= 0x040200


extern "C" Q_DECL_EXPORT
void C_ZN16QTextFrameFormatD2Ev(void *this_) {
  delete (QTextFrameFormat*)(this_);
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
