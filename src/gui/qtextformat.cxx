// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qtextformat.h
// dst-file: /src/gui/qtextformat.cxx
//

// header block begin =>
#include <qtextformat.h>

extern "C" {

int QTextLength_Class_Size()
{
  return sizeof(QTextLength);
}

// QTextLength(enum QTextLength::Type, qreal)
QTextLength* dector_ZN11QTextLengthC1ENS_4TypeEd(QTextLength::Type type, double value)
{
  // static_assert(sizeof(QTextLength) == 32, "tyszerr");
  QTextLength* rthis = new QTextLength(type, value);
  return rthis;
}

// QTextLength()
QTextLength* dector_ZN11QTextLengthC1Ev()
{
  // static_assert(sizeof(QTextLength) == 32, "tyszerr");
  QTextLength* rthis = new QTextLength();
  return rthis;
}

  // proto:  void QTextLength::QTextLength(QTextLength::Type type, qreal value);
void demth_ZN11QTextLengthC1ENS_4TypeEd(void *that, QTextLength::Type type, double value)
{
  QTextLength *cthat = (QTextLength *)that;
  auto _o = new(that) QTextLength(type, value);
}

  // proto:  qreal QTextLength::value(qreal maximumLength);
qreal demth_ZNK11QTextLength5valueEd(void *that, double maximumLength)
{
  QTextLength *cthat = (QTextLength *)that;
  return cthat->value(maximumLength);
}

  // proto:  void QTextLength::QTextLength();
void demth_ZN11QTextLengthC1Ev(void *that)
{
  QTextLength *cthat = (QTextLength *)that;
  auto _o = new(that) QTextLength();
}

  // proto:  qreal QTextLength::rawValue();
qreal demth_ZNK11QTextLength8rawValueEv(void *that)
{
  QTextLength *cthat = (QTextLength *)that;
  return cthat->rawValue();
}

int QTextImageFormat_Class_Size()
{
  return sizeof(QTextImageFormat);
}

// QTextImageFormat()
QTextImageFormat* dector_ZN16QTextImageFormatC1Ev()
{
  // static_assert(sizeof(QTextImageFormat) == 32, "tyszerr");
  QTextImageFormat* rthis = new QTextImageFormat();
  return rthis;
}

  // proto:  bool QTextImageFormat::isValid();
bool demth_ZNK16QTextImageFormat7isValidEv(void *that)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
  return cthat->isValid();
}

  // proto:  qreal QTextImageFormat::width();
qreal demth_ZNK16QTextImageFormat5widthEv(void *that)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
  return cthat->width();
}

  // proto:  void QTextImageFormat::setHeight(qreal height);
void demth_ZN16QTextImageFormat9setHeightEd(void *that, double height)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
   cthat->setHeight(height);
}

  // proto:  void QTextImageFormat::setWidth(qreal width);
void demth_ZN16QTextImageFormat8setWidthEd(void *that, double width)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
   cthat->setWidth(width);
}

  // proto:  void QTextImageFormat::setName(const QString & name);
void demth_ZN16QTextImageFormat7setNameERK7QString(void *that, const QString & name)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
   cthat->setName(name);
}

  // proto:  QString QTextImageFormat::name();
QString* demth_ZNK16QTextImageFormat4nameEv(void *that)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
  auto recret = cthat->name();
  return new QString(recret);
}

  // proto:  qreal QTextImageFormat::height();
qreal demth_ZNK16QTextImageFormat6heightEv(void *that)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
  return cthat->height();
}

int QTextFormat_Class_Size()
{
  return sizeof(QTextFormat);
}

// ~QTextFormat()
void dedtor_ZN11QTextFormatD0Ev(QTextFormat* that)
{
  QTextFormat* rthis = (QTextFormat*)that;
  delete rthis;
}

// QTextFormat(const class QTextFormat &)
QTextFormat* dector_ZN11QTextFormatC1ERKS_(const QTextFormat & rhs)
{
  // static_assert(sizeof(QTextFormat) == 32, "tyszerr");
  QTextFormat* rthis = new QTextFormat(rhs);
  return rthis;
}

// QTextFormat()
QTextFormat* dector_ZN11QTextFormatC1Ev()
{
  // static_assert(sizeof(QTextFormat) == 32, "tyszerr");
  QTextFormat* rthis = new QTextFormat();
  return rthis;
}

// QTextFormat(int)
QTextFormat* dector_ZN11QTextFormatC1Ei(int type)
{
  // static_assert(sizeof(QTextFormat) == 32, "tyszerr");
  QTextFormat* rthis = new QTextFormat(type);
  return rthis;
}

  // proto:  void QTextFormat::setLayoutDirection(Qt::LayoutDirection direction);
void demth_ZN11QTextFormat18setLayoutDirectionEN2Qt15LayoutDirectionE(void *that, Qt::LayoutDirection direction)
{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setLayoutDirection(direction);
}

  // proto:  void QTextFormat::clearForeground();
void demth_ZN11QTextFormat15clearForegroundEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->clearForeground();
}

  // proto:  bool QTextFormat::isTableCellFormat();
bool demth_ZNK11QTextFormat17isTableCellFormatEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isTableCellFormat();
}

  // proto:  bool QTextFormat::isValid();
bool demth_ZNK11QTextFormat7isValidEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isValid();
}

  // proto:  void QTextFormat::setForeground(const QBrush & brush);
void demth_ZN11QTextFormat13setForegroundERK6QBrush(void *that, const QBrush & brush)
{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setForeground(brush);
}

  // proto:  bool QTextFormat::isListFormat();
bool demth_ZNK11QTextFormat12isListFormatEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isListFormat();
}

  // proto:  bool QTextFormat::isImageFormat();
bool demth_ZNK11QTextFormat13isImageFormatEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isImageFormat();
}

  // proto:  bool QTextFormat::isTableFormat();
bool demth_ZNK11QTextFormat13isTableFormatEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isTableFormat();
}

  // proto:  bool QTextFormat::isCharFormat();
bool demth_ZNK11QTextFormat12isCharFormatEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isCharFormat();
}

  // proto:  void QTextFormat::clearBackground();
void demth_ZN11QTextFormat15clearBackgroundEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->clearBackground();
}

  // proto:  bool QTextFormat::isBlockFormat();
bool demth_ZNK11QTextFormat13isBlockFormatEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isBlockFormat();
}

  // proto:  QBrush QTextFormat::background();
QBrush* demth_ZNK11QTextFormat10backgroundEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  auto recret = cthat->background();
  return new QBrush(recret);
}

  // proto:  void QTextFormat::swap(QTextFormat & other);
void demth_ZN11QTextFormat4swapERS_(void *that, QTextFormat & other)
{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->swap(other);
}

  // proto:  QBrush QTextFormat::foreground();
QBrush* demth_ZNK11QTextFormat10foregroundEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  auto recret = cthat->foreground();
  return new QBrush(recret);
}

  // proto:  void QTextFormat::setObjectType(int type);
void demth_ZN11QTextFormat13setObjectTypeEi(void *that, int type)
{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setObjectType(type);
}

  // proto:  void QTextFormat::setBackground(const QBrush & brush);
void demth_ZN11QTextFormat13setBackgroundERK6QBrush(void *that, const QBrush & brush)
{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setBackground(brush);
}

  // proto:  bool QTextFormat::isFrameFormat();
bool demth_ZNK11QTextFormat13isFrameFormatEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isFrameFormat();
}

  // proto:  bool QTextFormat::isEmpty();
bool demth_ZNK11QTextFormat7isEmptyEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isEmpty();
}

  // proto:  int QTextFormat::objectType();
int demth_ZNK11QTextFormat10objectTypeEv(void *that)
{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->objectType();
}

int QTextBlockFormat_Class_Size()
{
  return sizeof(QTextBlockFormat);
}

// QTextBlockFormat()
QTextBlockFormat* dector_ZN16QTextBlockFormatC1Ev()
{
  // static_assert(sizeof(QTextBlockFormat) == 32, "tyszerr");
  QTextBlockFormat* rthis = new QTextBlockFormat();
  return rthis;
}

  // proto:  int QTextBlockFormat::indent();
int demth_ZNK16QTextBlockFormat6indentEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->indent();
}

  // proto:  void QTextBlockFormat::setTextIndent(qreal aindent);
void demth_ZN16QTextBlockFormat13setTextIndentEd(void *that, double aindent)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setTextIndent(aindent);
}

  // proto:  void QTextBlockFormat::setNonBreakableLines(bool b);
void demth_ZN16QTextBlockFormat20setNonBreakableLinesEb(void *that, bool b)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setNonBreakableLines(b);
}

  // proto:  void QTextBlockFormat::setIndent(int indent);
void demth_ZN16QTextBlockFormat9setIndentEi(void *that, int indent)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setIndent(indent);
}

  // proto:  qreal QTextBlockFormat::textIndent();
qreal demth_ZNK16QTextBlockFormat10textIndentEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->textIndent();
}

  // proto:  qreal QTextBlockFormat::lineHeight();
qreal demth_ZNK16QTextBlockFormat10lineHeightEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->lineHeight();
}

  // proto:  void QTextBlockFormat::setPageBreakPolicy(PageBreakFlags flags);
void demth_ZN16QTextBlockFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE(void *that, QTextFormat::PageBreakFlag flags)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setPageBreakPolicy(flags);
}

  // proto:  qreal QTextBlockFormat::lineHeight(qreal scriptLineHeight, qreal scaling);
qreal demth_ZNK16QTextBlockFormat10lineHeightEdd(void *that, double scriptLineHeight, double scaling)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->lineHeight(scriptLineHeight, scaling);
}

  // proto:  void QTextBlockFormat::setRightMargin(qreal margin);
void demth_ZN16QTextBlockFormat14setRightMarginEd(void *that, double margin)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setRightMargin(margin);
}

  // proto:  qreal QTextBlockFormat::topMargin();
qreal demth_ZNK16QTextBlockFormat9topMarginEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->topMargin();
}

  // proto:  qreal QTextBlockFormat::rightMargin();
qreal demth_ZNK16QTextBlockFormat11rightMarginEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->rightMargin();
}

  // proto:  qreal QTextBlockFormat::bottomMargin();
qreal demth_ZNK16QTextBlockFormat12bottomMarginEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->bottomMargin();
}

  // proto:  void QTextBlockFormat::setTopMargin(qreal margin);
void demth_ZN16QTextBlockFormat12setTopMarginEd(void *that, double margin)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setTopMargin(margin);
}

  // proto:  qreal QTextBlockFormat::leftMargin();
qreal demth_ZNK16QTextBlockFormat10leftMarginEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->leftMargin();
}

  // proto:  void QTextBlockFormat::setAlignment(Qt::Alignment alignment);
void demth_ZN16QTextBlockFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment alignment)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setAlignment(alignment);
}

  // proto:  void QTextBlockFormat::setLineHeight(qreal height, int heightType);
void demth_ZN16QTextBlockFormat13setLineHeightEdi(void *that, double height, int heightType)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setLineHeight(height, heightType);
}

  // proto:  void QTextBlockFormat::setBottomMargin(qreal margin);
void demth_ZN16QTextBlockFormat15setBottomMarginEd(void *that, double margin)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setBottomMargin(margin);
}

  // proto:  int QTextBlockFormat::lineHeightType();
int demth_ZNK16QTextBlockFormat14lineHeightTypeEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->lineHeightType();
}

  // proto:  void QTextBlockFormat::setLeftMargin(qreal margin);
void demth_ZN16QTextBlockFormat13setLeftMarginEd(void *that, double margin)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setLeftMargin(margin);
}

  // proto:  bool QTextBlockFormat::isValid();
bool demth_ZNK16QTextBlockFormat7isValidEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->isValid();
}

  // proto:  bool QTextBlockFormat::nonBreakableLines();
bool demth_ZNK16QTextBlockFormat17nonBreakableLinesEv(void *that)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->nonBreakableLines();
}

int QTextCharFormat_Class_Size()
{
  return sizeof(QTextCharFormat);
}

// QTextCharFormat()
QTextCharFormat* dector_ZN15QTextCharFormatC1Ev()
{
  // static_assert(sizeof(QTextCharFormat) == 32, "tyszerr");
  QTextCharFormat* rthis = new QTextCharFormat();
  return rthis;
}

  // proto:  void QTextCharFormat::setFontCapitalization(QFont::Capitalization capitalization);
void demth_ZN15QTextCharFormat21setFontCapitalizationEN5QFont14CapitalizationE(void *that, QFont::Capitalization capitalization)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontCapitalization(capitalization);
}

  // proto:  void QTextCharFormat::setFontLetterSpacing(qreal spacing);
void demth_ZN15QTextCharFormat20setFontLetterSpacingEd(void *that, double spacing)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontLetterSpacing(spacing);
}

  // proto:  bool QTextCharFormat::isAnchor();
bool demth_ZNK15QTextCharFormat8isAnchorEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->isAnchor();
}

  // proto:  void QTextCharFormat::setFontHintingPreference(QFont::HintingPreference hintingPreference);
void demth_ZN15QTextCharFormat24setFontHintingPreferenceEN5QFont17HintingPreferenceE(void *that, QFont::HintingPreference hintingPreference)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontHintingPreference(hintingPreference);
}

  // proto:  bool QTextCharFormat::fontOverline();
bool demth_ZNK15QTextCharFormat12fontOverlineEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontOverline();
}

  // proto:  QString QTextCharFormat::fontFamily();
QString* demth_ZNK15QTextCharFormat10fontFamilyEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->fontFamily();
  return new QString(recret);
}

  // proto:  bool QTextCharFormat::fontStrikeOut();
bool demth_ZNK15QTextCharFormat13fontStrikeOutEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontStrikeOut();
}

  // proto:  void QTextCharFormat::setFontPointSize(qreal size);
void demth_ZN15QTextCharFormat16setFontPointSizeEd(void *that, double size)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontPointSize(size);
}

  // proto:  void QTextCharFormat::setUnderlineColor(const QColor & color);
void demth_ZN15QTextCharFormat17setUnderlineColorERK6QColor(void *that, const QColor & color)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setUnderlineColor(color);
}

  // proto:  int QTextCharFormat::tableCellRowSpan();
int demth_ZNK15QTextCharFormat16tableCellRowSpanEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->tableCellRowSpan();
}

  // proto:  void QTextCharFormat::setFontUnderline(bool underline);
void demth_ZN15QTextCharFormat16setFontUnderlineEb(void *that, bool underline)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontUnderline(underline);
}

  // proto:  bool QTextCharFormat::isValid();
bool demth_ZNK15QTextCharFormat7isValidEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->isValid();
}

  // proto:  bool QTextCharFormat::fontItalic();
bool demth_ZNK15QTextCharFormat10fontItalicEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontItalic();
}

  // proto:  void QTextCharFormat::setToolTip(const QString & tip);
void demth_ZN15QTextCharFormat10setToolTipERK7QString(void *that, const QString & tip)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setToolTip(tip);
}

  // proto:  void QTextCharFormat::setTextOutline(const QPen & pen);
void demth_ZN15QTextCharFormat14setTextOutlineERK4QPen(void *that, const QPen & pen)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setTextOutline(pen);
}

  // proto:  void QTextCharFormat::setTableCellRowSpan(int tableCellRowSpan);
void demth_ZN15QTextCharFormat19setTableCellRowSpanEi(void *that, int tableCellRowSpan)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setTableCellRowSpan(tableCellRowSpan);
}

  // proto:  void QTextCharFormat::setVerticalAlignment(QTextCharFormat::VerticalAlignment alignment);
void demth_ZN15QTextCharFormat20setVerticalAlignmentENS_17VerticalAlignmentE(void *that, QTextCharFormat::VerticalAlignment alignment)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setVerticalAlignment(alignment);
}

  // proto:  void QTextCharFormat::setAnchor(bool anchor);
void demth_ZN15QTextCharFormat9setAnchorEb(void *that, bool anchor)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setAnchor(anchor);
}

  // proto:  qreal QTextCharFormat::fontPointSize();
qreal demth_ZNK15QTextCharFormat13fontPointSizeEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontPointSize();
}

  // proto:  void QTextCharFormat::setFontStrikeOut(bool strikeOut);
void demth_ZN15QTextCharFormat16setFontStrikeOutEb(void *that, bool strikeOut)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontStrikeOut(strikeOut);
}

  // proto:  qreal QTextCharFormat::fontWordSpacing();
qreal demth_ZNK15QTextCharFormat15fontWordSpacingEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontWordSpacing();
}

  // proto:  QString QTextCharFormat::toolTip();
QString* demth_ZNK15QTextCharFormat7toolTipEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->toolTip();
  return new QString(recret);
}

  // proto:  void QTextCharFormat::setAnchorNames(const QStringList & names);
void demth_ZN15QTextCharFormat14setAnchorNamesERK11QStringList(void *that, const QStringList & names)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setAnchorNames(names);
}

  // proto:  void QTextCharFormat::setFontFixedPitch(bool fixedPitch);
void demth_ZN15QTextCharFormat17setFontFixedPitchEb(void *that, bool fixedPitch)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontFixedPitch(fixedPitch);
}

  // proto:  void QTextCharFormat::setFontStyleStrategy(QFont::StyleStrategy strategy);
void demth_ZN15QTextCharFormat20setFontStyleStrategyEN5QFont13StyleStrategyE(void *that, QFont::StyleStrategy strategy)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontStyleStrategy(strategy);
}

  // proto:  void QTextCharFormat::setFontItalic(bool italic);
void demth_ZN15QTextCharFormat13setFontItalicEb(void *that, bool italic)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontItalic(italic);
}

  // proto:  void QTextCharFormat::setFontFamily(const QString & family);
void demth_ZN15QTextCharFormat13setFontFamilyERK7QString(void *that, const QString & family)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontFamily(family);
}

  // proto:  bool QTextCharFormat::fontFixedPitch();
bool demth_ZNK15QTextCharFormat14fontFixedPitchEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontFixedPitch();
}

  // proto:  void QTextCharFormat::setAnchorHref(const QString & value);
void demth_ZN15QTextCharFormat13setAnchorHrefERK7QString(void *that, const QString & value)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setAnchorHref(value);
}

  // proto:  int QTextCharFormat::fontStretch();
int demth_ZNK15QTextCharFormat11fontStretchEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontStretch();
}

  // proto:  void QTextCharFormat::setFontKerning(bool enable);
void demth_ZN15QTextCharFormat14setFontKerningEb(void *that, bool enable)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontKerning(enable);
}

  // proto:  int QTextCharFormat::tableCellColumnSpan();
int demth_ZNK15QTextCharFormat19tableCellColumnSpanEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->tableCellColumnSpan();
}

  // proto:  qreal QTextCharFormat::fontLetterSpacing();
qreal demth_ZNK15QTextCharFormat17fontLetterSpacingEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontLetterSpacing();
}

  // proto:  void QTextCharFormat::setFontLetterSpacingType(QFont::SpacingType letterSpacingType);
void demth_ZN15QTextCharFormat24setFontLetterSpacingTypeEN5QFont11SpacingTypeE(void *that, QFont::SpacingType letterSpacingType)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontLetterSpacingType(letterSpacingType);
}

  // proto:  QString QTextCharFormat::anchorHref();
QString* demth_ZNK15QTextCharFormat10anchorHrefEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->anchorHref();
  return new QString(recret);
}

  // proto:  void QTextCharFormat::setFontStretch(int factor);
void demth_ZN15QTextCharFormat14setFontStretchEi(void *that, int factor)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontStretch(factor);
}

  // proto:  void QTextCharFormat::setAnchorName(const QString & name);
void demth_ZN15QTextCharFormat13setAnchorNameERK7QString(void *that, const QString & name)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setAnchorName(name);
}

  // proto:  bool QTextCharFormat::fontKerning();
bool demth_ZNK15QTextCharFormat11fontKerningEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontKerning();
}

  // proto:  void QTextCharFormat::setFontWeight(int weight);
void demth_ZN15QTextCharFormat13setFontWeightEi(void *that, int weight)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontWeight(weight);
}

  // proto:  void QTextCharFormat::setFontStyleHint(QFont::StyleHint hint, QFont::StyleStrategy strategy);
void demth_ZN15QTextCharFormat16setFontStyleHintEN5QFont9StyleHintENS0_13StyleStrategyE(void *that, QFont::StyleHint hint, QFont::StyleStrategy strategy)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontStyleHint(hint, strategy);
}

  // proto:  void QTextCharFormat::setFontWordSpacing(qreal spacing);
void demth_ZN15QTextCharFormat18setFontWordSpacingEd(void *that, double spacing)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontWordSpacing(spacing);
}

  // proto:  QColor QTextCharFormat::underlineColor();
QColor* demth_ZNK15QTextCharFormat14underlineColorEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->underlineColor();
  return new QColor(recret);
}

  // proto:  int QTextCharFormat::fontWeight();
int demth_ZNK15QTextCharFormat10fontWeightEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontWeight();
}

  // proto:  void QTextCharFormat::setFontOverline(bool overline);
void demth_ZN15QTextCharFormat15setFontOverlineEb(void *that, bool overline)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontOverline(overline);
}

  // proto:  void QTextCharFormat::setTableCellColumnSpan(int tableCellColumnSpan);
void demth_ZN15QTextCharFormat22setTableCellColumnSpanEi(void *that, int tableCellColumnSpan)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setTableCellColumnSpan(tableCellColumnSpan);
}

  // proto:  QPen QTextCharFormat::textOutline();
QPen* demth_ZNK15QTextCharFormat11textOutlineEv(void *that)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->textOutline();
  return new QPen(recret);
}

int QTextTableFormat_Class_Size()
{
  return sizeof(QTextTableFormat);
}

// QTextTableFormat()
QTextTableFormat* dector_ZN16QTextTableFormatC1Ev()
{
  // static_assert(sizeof(QTextTableFormat) == 32, "tyszerr");
  QTextTableFormat* rthis = new QTextTableFormat();
  return rthis;
}

  // proto:  bool QTextTableFormat::isValid();
bool demth_ZNK16QTextTableFormat7isValidEv(void *that)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->isValid();
}

  // proto:  void QTextTableFormat::setColumnWidthConstraints(const QVector<QTextLength> & constraints);
void demth_ZN16QTextTableFormat25setColumnWidthConstraintsERK7QVectorI11QTextLengthE(void *that, const QVector<QTextLength> & constraints)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setColumnWidthConstraints(constraints);
}

  // proto:  int QTextTableFormat::headerRowCount();
int demth_ZNK16QTextTableFormat14headerRowCountEv(void *that)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->headerRowCount();
}

  // proto:  int QTextTableFormat::columns();
int demth_ZNK16QTextTableFormat7columnsEv(void *that)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->columns();
}

  // proto:  QVector<QTextLength> QTextTableFormat::columnWidthConstraints();
QVector<QTextLength> demth_ZNK16QTextTableFormat22columnWidthConstraintsEv(void *that)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->columnWidthConstraints();
}

  // proto:  void QTextTableFormat::setAlignment(Qt::Alignment alignment);
void demth_ZN16QTextTableFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment alignment)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setAlignment(alignment);
}

  // proto:  void QTextTableFormat::setCellPadding(qreal padding);
void demth_ZN16QTextTableFormat14setCellPaddingEd(void *that, double padding)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setCellPadding(padding);
}

  // proto:  qreal QTextTableFormat::cellPadding();
qreal demth_ZNK16QTextTableFormat11cellPaddingEv(void *that)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->cellPadding();
}

  // proto:  void QTextTableFormat::setCellSpacing(qreal spacing);
void demth_ZN16QTextTableFormat14setCellSpacingEd(void *that, double spacing)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setCellSpacing(spacing);
}

  // proto:  void QTextTableFormat::setColumns(int columns);
void demth_ZN16QTextTableFormat10setColumnsEi(void *that, int columns)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setColumns(columns);
}

  // proto:  void QTextTableFormat::clearColumnWidthConstraints();
void demth_ZN16QTextTableFormat27clearColumnWidthConstraintsEv(void *that)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->clearColumnWidthConstraints();
}

  // proto:  void QTextTableFormat::setHeaderRowCount(int count);
void demth_ZN16QTextTableFormat17setHeaderRowCountEi(void *that, int count)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setHeaderRowCount(count);
}

  // proto:  qreal QTextTableFormat::cellSpacing();
qreal demth_ZNK16QTextTableFormat11cellSpacingEv(void *that)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->cellSpacing();
}

int QTextTableCellFormat_Class_Size()
{
  return sizeof(QTextTableCellFormat);
}

// QTextTableCellFormat()
QTextTableCellFormat* dector_ZN20QTextTableCellFormatC1Ev()
{
  // static_assert(sizeof(QTextTableCellFormat) == 32, "tyszerr");
  QTextTableCellFormat* rthis = new QTextTableCellFormat();
  return rthis;
}

  // proto:  void QTextTableCellFormat::setLeftPadding(qreal padding);
void demth_ZN20QTextTableCellFormat14setLeftPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setLeftPadding(padding);
}

  // proto:  bool QTextTableCellFormat::isValid();
bool demth_ZNK20QTextTableCellFormat7isValidEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->isValid();
}

  // proto:  void QTextTableCellFormat::setTopPadding(qreal padding);
void demth_ZN20QTextTableCellFormat13setTopPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setTopPadding(padding);
}

  // proto:  qreal QTextTableCellFormat::leftPadding();
qreal demth_ZNK20QTextTableCellFormat11leftPaddingEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->leftPadding();
}

  // proto:  void QTextTableCellFormat::setPadding(qreal padding);
void demth_ZN20QTextTableCellFormat10setPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setPadding(padding);
}

  // proto:  qreal QTextTableCellFormat::topPadding();
qreal demth_ZNK20QTextTableCellFormat10topPaddingEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->topPadding();
}

  // proto:  qreal QTextTableCellFormat::rightPadding();
qreal demth_ZNK20QTextTableCellFormat12rightPaddingEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->rightPadding();
}

  // proto:  qreal QTextTableCellFormat::bottomPadding();
qreal demth_ZNK20QTextTableCellFormat13bottomPaddingEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->bottomPadding();
}

  // proto:  void QTextTableCellFormat::setRightPadding(qreal padding);
void demth_ZN20QTextTableCellFormat15setRightPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setRightPadding(padding);
}

  // proto:  void QTextTableCellFormat::setBottomPadding(qreal padding);
void demth_ZN20QTextTableCellFormat16setBottomPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setBottomPadding(padding);
}

int QTextListFormat_Class_Size()
{
  return sizeof(QTextListFormat);
}

// QTextListFormat()
QTextListFormat* dector_ZN15QTextListFormatC1Ev()
{
  // static_assert(sizeof(QTextListFormat) == 32, "tyszerr");
  QTextListFormat* rthis = new QTextListFormat();
  return rthis;
}

  // proto:  int QTextListFormat::indent();
int demth_ZNK15QTextListFormat6indentEv(void *that)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
  return cthat->indent();
}

  // proto:  void QTextListFormat::setIndent(int indent);
void demth_ZN15QTextListFormat9setIndentEi(void *that, int indent)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setIndent(indent);
}

  // proto:  QString QTextListFormat::numberSuffix();
QString* demth_ZNK15QTextListFormat12numberSuffixEv(void *that)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
  auto recret = cthat->numberSuffix();
  return new QString(recret);
}

  // proto:  QString QTextListFormat::numberPrefix();
QString* demth_ZNK15QTextListFormat12numberPrefixEv(void *that)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
  auto recret = cthat->numberPrefix();
  return new QString(recret);
}

  // proto:  bool QTextListFormat::isValid();
bool demth_ZNK15QTextListFormat7isValidEv(void *that)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
  return cthat->isValid();
}

  // proto:  void QTextListFormat::setNumberSuffix(const QString & numberSuffix);
void demth_ZN15QTextListFormat15setNumberSuffixERK7QString(void *that, const QString & numberSuffix)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setNumberSuffix(numberSuffix);
}

  // proto:  void QTextListFormat::setNumberPrefix(const QString & numberPrefix);
void demth_ZN15QTextListFormat15setNumberPrefixERK7QString(void *that, const QString & numberPrefix)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setNumberPrefix(numberPrefix);
}

  // proto:  void QTextListFormat::setStyle(QTextListFormat::Style style);
void demth_ZN15QTextListFormat8setStyleENS_5StyleE(void *that, QTextListFormat::Style style)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setStyle(style);
}

int QTextFrameFormat_Class_Size()
{
  return sizeof(QTextFrameFormat);
}

// QTextFrameFormat()
QTextFrameFormat* dector_ZN16QTextFrameFormatC1Ev()
{
  // static_assert(sizeof(QTextFrameFormat) == 32, "tyszerr");
  QTextFrameFormat* rthis = new QTextFrameFormat();
  return rthis;
}

  // proto:  void QTextFrameFormat::setBorderStyle(QTextFrameFormat::BorderStyle style);
void demth_ZN16QTextFrameFormat14setBorderStyleENS_11BorderStyleE(void *that, QTextFrameFormat::BorderStyle style)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBorderStyle(style);
}

  // proto:  bool QTextFrameFormat::isValid();
bool demth_ZNK16QTextFrameFormat7isValidEv(void *that)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  return cthat->isValid();
}

  // proto:  void QTextFrameFormat::setHeight(qreal height);
void demth_ZN16QTextFrameFormat9setHeightEd(void *that, double height)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setHeight(height);
}

  // proto:  void QTextFrameFormat::setBorderBrush(const QBrush & brush);
void demth_ZN16QTextFrameFormat14setBorderBrushERK6QBrush(void *that, const QBrush & brush)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBorderBrush(brush);
}

  // proto:  qreal QTextFrameFormat::margin();
qreal demth_ZNK16QTextFrameFormat6marginEv(void *that)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  return cthat->margin();
}

  // proto:  QBrush QTextFrameFormat::borderBrush();
QBrush* demth_ZNK16QTextFrameFormat11borderBrushEv(void *that)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  auto recret = cthat->borderBrush();
  return new QBrush(recret);
}

  // proto:  void QTextFrameFormat::setRightMargin(qreal margin);
void demth_ZN16QTextFrameFormat14setRightMarginEd(void *that, double margin)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setRightMargin(margin);
}

  // proto:  void QTextFrameFormat::setBorder(qreal border);
void demth_ZN16QTextFrameFormat9setBorderEd(void *that, double border)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBorder(border);
}

  // proto:  void QTextFrameFormat::setHeight(const QTextLength & height);
void demth_ZN16QTextFrameFormat9setHeightERK11QTextLength(void *that, const QTextLength & height)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setHeight(height);
}

  // proto:  void QTextFrameFormat::setWidth(const QTextLength & length);
void demth_ZN16QTextFrameFormat8setWidthERK11QTextLength(void *that, const QTextLength & length)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setWidth(length);
}

  // proto:  void QTextFrameFormat::setPosition(QTextFrameFormat::Position f);
void demth_ZN16QTextFrameFormat11setPositionENS_8PositionE(void *that, QTextFrameFormat::Position f)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setPosition(f);
}

  // proto:  void QTextFrameFormat::setBottomMargin(qreal margin);
void demth_ZN16QTextFrameFormat15setBottomMarginEd(void *that, double margin)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBottomMargin(margin);
}

  // proto:  void QTextFrameFormat::setPageBreakPolicy(PageBreakFlags flags);
void demth_ZN16QTextFrameFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE(void *that, QTextFormat::PageBreakFlag flags)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setPageBreakPolicy(flags);
}

  // proto:  QTextLength QTextFrameFormat::height();
QTextLength* demth_ZNK16QTextFrameFormat6heightEv(void *that)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  auto recret = cthat->height();
  return new QTextLength(recret);
}

  // proto:  void QTextFrameFormat::setWidth(qreal width);
void demth_ZN16QTextFrameFormat8setWidthEd(void *that, double width)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setWidth(width);
}

  // proto:  void QTextFrameFormat::setPadding(qreal padding);
void demth_ZN16QTextFrameFormat10setPaddingEd(void *that, double padding)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setPadding(padding);
}

  // proto:  void QTextFrameFormat::setTopMargin(qreal margin);
void demth_ZN16QTextFrameFormat12setTopMarginEd(void *that, double margin)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setTopMargin(margin);
}

  // proto:  QTextLength QTextFrameFormat::width();
QTextLength* demth_ZNK16QTextFrameFormat5widthEv(void *that)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  auto recret = cthat->width();
  return new QTextLength(recret);
}

  // proto:  qreal QTextFrameFormat::padding();
qreal demth_ZNK16QTextFrameFormat7paddingEv(void *that)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  return cthat->padding();
}

  // proto:  void QTextFrameFormat::setLeftMargin(qreal margin);
void demth_ZN16QTextFrameFormat13setLeftMarginEd(void *that, double margin)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setLeftMargin(margin);
}

  // proto:  qreal QTextFrameFormat::border();
qreal demth_ZNK16QTextFrameFormat6borderEv(void *that)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  return cthat->border();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

