//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFormat is pure virtual: false
// QTextFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextFormat_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextFormat_t qt_meta_stringdata_MyQTextFormat = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextFormat"
  },
  "MyQTextFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextFormat[] = {
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
class Q_DECL_EXPORT MyQTextFormat : public QTextFormat {
public:
  virtual ~MyQTextFormat() {}
// void QTextFormat()
MyQTextFormat() : QTextFormat() {}
// void QTextFormat(int)
MyQTextFormat(int type_) : QTextFormat(type_) {}
// void QTextFormat(const QTextFormat &)
MyQTextFormat(const QTextFormat & rhs) : QTextFormat(rhs) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:290
// [-2] void QTextFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextFormatC2Ev() {
  return  new QTextFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:292
// [-2] void QTextFormat(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextFormatC2Ei(int type_) {
  return  new QTextFormat(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:294
// [-2] void QTextFormat(const QTextFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextFormatC2ERKS_(QTextFormat* rhs) {
  return  new QTextFormat(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:295
// [16] QTextFormat & operator=(const QTextFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextFormataSERKS_(void *this_, QTextFormat* rhs) {
  auto& rv = ((QTextFormat*)this_)->operator=(*rhs);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:296
// [-2] void ~QTextFormat()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormatD2Ev(void *this_) {
  delete (QTextFormat*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qtextformat.h:298
// [-2] void swap(QTextFormat &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat4swapERS_(void *this_, QTextFormat* other) {
  ((QTextFormat*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:301
// [-2] void merge(const QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat5mergeERKS_(void *this_, QTextFormat* other) {
  ((QTextFormat*)this_)->merge(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:303
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat7isValidEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qtextformat.h:304
// [1] bool isEmpty()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat7isEmptyEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isEmpty();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:306
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat4typeEv(void *this_) {
  return (int)((QTextFormat*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:308
// [4] int objectIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat11objectIndexEv(void *this_) {
  return (int)((QTextFormat*)this_)->objectIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:309
// [-2] void setObjectIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat14setObjectIndexEi(void *this_, int object) {
  ((QTextFormat*)this_)->setObjectIndex(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:311
// [16] QVariant property(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat8propertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->property(propertyId);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:312
// [-2] void setProperty(int, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat11setPropertyEiRK8QVariant(void *this_, int propertyId, QVariant* value) {
  ((QTextFormat*)this_)->setProperty(propertyId, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:313
// [-2] void clearProperty(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat13clearPropertyEi(void *this_, int propertyId) {
  ((QTextFormat*)this_)->clearProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:314
// [1] bool hasProperty(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat11hasPropertyEi(void *this_, int propertyId) {
  return (bool)((QTextFormat*)this_)->hasProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:316
// [1] bool boolProperty(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat12boolPropertyEi(void *this_, int propertyId) {
  return (bool)((QTextFormat*)this_)->boolProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:317
// [4] int intProperty(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat11intPropertyEi(void *this_, int propertyId) {
  return (int)((QTextFormat*)this_)->intProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:318
// [8] qreal doubleProperty(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextFormat14doublePropertyEi(void *this_, int propertyId) {
  return (qreal)((QTextFormat*)this_)->doubleProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:319
// [8] QString stringProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat14stringPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->stringProperty(propertyId);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:320
// [16] QColor colorProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13colorPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->colorProperty(propertyId);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:321
// [8] QPen penProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat11penPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->penProperty(propertyId);
return new QPen(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:322
// [8] QBrush brushProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13brushPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->brushProperty(propertyId);
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:323
// [16] QTextLength lengthProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat14lengthPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->lengthProperty(propertyId);
return new QTextLength(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:324
// [8] QVector<QTextLength> lengthVectorProperty(int)
extern "C" Q_DECL_EXPORT
void C_ZNK11QTextFormat20lengthVectorPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->lengthVectorProperty(propertyId);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:326
// [-2] void setProperty(int, const QVector<QTextLength> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat11setPropertyEiRK7QVectorI11QTextLengthE(void *this_, int propertyId, QVector<QTextLength>* lengths) {
  ((QTextFormat*)this_)->setProperty(propertyId, *lengths);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:328
// [8] QMap<int, QVariant> properties()
extern "C" Q_DECL_EXPORT
void C_ZNK11QTextFormat10propertiesEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->properties();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:329
// [4] int propertyCount()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat13propertyCountEv(void *this_) {
  return (int)((QTextFormat*)this_)->propertyCount();
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:331
// [-2] void setObjectType(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat13setObjectTypeEi(void *this_, int type_) {
  ((QTextFormat*)this_)->setObjectType(type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:332
// [4] int objectType()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat10objectTypeEv(void *this_) {
  return (int)((QTextFormat*)this_)->objectType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:335
// [1] bool isCharFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat12isCharFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isCharFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:336
// [1] bool isBlockFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat13isBlockFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isBlockFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:337
// [1] bool isListFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat12isListFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isListFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:338
// [1] bool isFrameFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat13isFrameFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isFrameFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:339
// [1] bool isImageFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat13isImageFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isImageFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:340
// [1] bool isTableFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat13isTableFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isTableFormat();
}

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:341
// [1] bool isTableCellFormat()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat17isTableCellFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isTableCellFormat();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:343
// [16] QTextBlockFormat toBlockFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13toBlockFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toBlockFormat();
return new QTextBlockFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:344
// [16] QTextCharFormat toCharFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat12toCharFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toCharFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:345
// [16] QTextListFormat toListFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat12toListFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toListFormat();
return new QTextListFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:346
// [16] QTextTableFormat toTableFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13toTableFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toTableFormat();
return new QTextTableFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:347
// [16] QTextFrameFormat toFrameFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13toFrameFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toFrameFormat();
return new QTextFrameFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:348
// [16] QTextImageFormat toImageFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13toImageFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toImageFormat();
return new QTextImageFormat(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:349
// [16] QTextTableCellFormat toTableCellFormat()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat17toTableCellFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toTableCellFormat();
return new QTextTableCellFormat(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:351
// [1] bool operator==(const QTextFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormateqERKS_(void *this_, QTextFormat* rhs) {
  return (bool)((QTextFormat*)this_)->operator==(*rhs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:352
// [1] bool operator!=(const QTextFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormatneERKS_(void *this_, QTextFormat* rhs) {
  return (bool)((QTextFormat*)this_)->operator!=(*rhs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:355
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QTextFormat*)this_)->setLayoutDirection(direction);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:357
// [4] Qt::LayoutDirection layoutDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK11QTextFormat15layoutDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QTextFormat*)this_)->layoutDirection();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:360
// [-2] void setBackground(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat13setBackgroundERK6QBrush(void *this_, QBrush* brush) {
  ((QTextFormat*)this_)->setBackground(*brush);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:362
// [8] QBrush background()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat10backgroundEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->background();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:364
// [-2] void clearBackground()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat15clearBackgroundEv(void *this_) {
  ((QTextFormat*)this_)->clearBackground();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:367
// [-2] void setForeground(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat13setForegroundERK6QBrush(void *this_, QBrush* brush) {
  ((QTextFormat*)this_)->setForeground(*brush);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:369
// [8] QBrush foreground()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat10foregroundEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->foreground();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:371
// [-2] void clearForeground()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat15clearForegroundEv(void *this_) {
  ((QTextFormat*)this_)->clearForeground();
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
