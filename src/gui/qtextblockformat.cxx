//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlockFormat is pure virtual: false
// QTextBlockFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextBlockFormat_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextBlockFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextBlockFormat_t qt_meta_stringdata_MyQTextBlockFormat = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQTextBlockFormat"
  },
  "MyQTextBlockFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextBlockFormat[] = {
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
class Q_DECL_EXPORT MyQTextBlockFormat : public QTextBlockFormat {
public:
  virtual ~MyQTextBlockFormat() {}
// void QTextBlockFormat()
MyQTextBlockFormat() : QTextBlockFormat() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:592
// [-2] void QTextBlockFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN16QTextBlockFormatC2Ev() {
  return  new QTextBlockFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:594
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTextBlockFormat7isValidEv(void *this_) {
  return (bool)((QTextBlockFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:596
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QTextBlockFormat*)this_)->setAlignment(alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:597
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK16QTextBlockFormat9alignmentEv(void *this_) {
  return (Qt::Alignment)((QTextBlockFormat*)this_)->alignment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:600
// [-2] void setTopMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat12setTopMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setTopMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:602
// [8] qreal topMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat9topMarginEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->topMargin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:605
// [-2] void setBottomMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat15setBottomMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setBottomMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:607
// [8] qreal bottomMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat12bottomMarginEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->bottomMargin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:610
// [-2] void setLeftMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat13setLeftMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setLeftMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:612
// [8] qreal leftMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat10leftMarginEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->leftMargin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:615
// [-2] void setRightMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat14setRightMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setRightMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:617
// [8] qreal rightMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat11rightMarginEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->rightMargin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:620
// [-2] void setTextIndent(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat13setTextIndentEd(void *this_, qreal aindent) {
  ((QTextBlockFormat*)this_)->setTextIndent(aindent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:622
// [8] qreal textIndent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat10textIndentEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->textIndent();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:625
// [-2] void setIndent(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat9setIndentEi(void *this_, int indent) {
  ((QTextBlockFormat*)this_)->setIndent(indent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:626
// [4] int indent()
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextBlockFormat6indentEv(void *this_) {
  return (int)((QTextBlockFormat*)this_)->indent();
}

// Public inline Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qtextformat.h:629
// [-2] void setHeadingLevel(int)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat15setHeadingLevelEi(void *this_, int alevel) {
  ((QTextBlockFormat*)this_)->setHeadingLevel(alevel);
}
#endif // QT_VERSION >= 0x050c00

// Public inline Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qtextformat.h:631
// [4] int headingLevel()
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextBlockFormat12headingLevelEv(void *this_) {
  return (int)((QTextBlockFormat*)this_)->headingLevel();
}
#endif // QT_VERSION >= 0x050c00

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:634
// [-2] void setLineHeight(qreal, int)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat13setLineHeightEdi(void *this_, qreal height, int heightType) {
  ((QTextBlockFormat*)this_)->setLineHeight(height, heightType);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:636
// [8] qreal lineHeight(qreal, qreal)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat10lineHeightEdd(void *this_, qreal scriptLineHeight, qreal scaling) {
  return (qreal)((QTextBlockFormat*)this_)->lineHeight(scriptLineHeight, scaling);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:637
// [8] qreal lineHeight()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat10lineHeightEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->lineHeight();
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:639
// [4] int lineHeightType()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextBlockFormat14lineHeightTypeEv(void *this_) {
  return (int)((QTextBlockFormat*)this_)->lineHeightType();
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:642
// [-2] void setNonBreakableLines(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat20setNonBreakableLinesEb(void *this_, bool b) {
  ((QTextBlockFormat*)this_)->setNonBreakableLines(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:644
// [1] bool nonBreakableLines()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTextBlockFormat17nonBreakableLinesEv(void *this_) {
  return (bool)((QTextBlockFormat*)this_)->nonBreakableLines();
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextformat.h:647
// [-2] void setPageBreakPolicy(QTextFormat::PageBreakFlags)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE(void *this_, QFlags<QTextFormat::PageBreakFlag> flags) {
  ((QTextBlockFormat*)this_)->setPageBreakPolicy(flags);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextformat.h:649
// [4] QTextFormat::PageBreakFlags pageBreakPolicy()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QTextFormat::PageBreakFlags* C_ZNK16QTextBlockFormat15pageBreakPolicyEv(void *this_) {
  auto rv = ((QTextBlockFormat*)this_)->pageBreakPolicy();
return new QTextFormat::PageBreakFlags(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:652
// [-2] void setTabPositions(const QList<QTextOption::Tab> &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat15setTabPositionsERK5QListIN11QTextOption3TabEE(void *this_, QList<QTextOption::Tab>* tabs) {
  ((QTextBlockFormat*)this_)->setTabPositions(*tabs);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:653
// [-2] QList<QTextOption::Tab> tabPositions()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QList<QTextOption::Tab>* C_ZNK16QTextBlockFormat12tabPositionsEv(void *this_) {
  auto rv = ((QTextBlockFormat*)this_)->tabPositions();
return new QList<QTextOption::Tab>(rv);
}
#endif // QT_VERSION >= 0x040400


extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormatD2Ev(void *this_) {
  delete (QTextBlockFormat*)(this_);
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
