//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextImageFormat is pure virtual: false
// QTextImageFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextImageFormat_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextImageFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextImageFormat_t qt_meta_stringdata_MyQTextImageFormat = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQTextImageFormat"
  },
  "MyQTextImageFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextImageFormat[] = {
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
class Q_DECL_EXPORT MyQTextImageFormat : public QTextImageFormat {
public:
  virtual ~MyQTextImageFormat() {}
// void QTextImageFormat()
MyQTextImageFormat() : QTextImageFormat() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:742
// [-2] void QTextImageFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN16QTextImageFormatC2Ev() {
  return  new QTextImageFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:744
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTextImageFormat7isValidEv(void *this_) {
  return (bool)((QTextImageFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:746
// [-2] void setName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormat7setNameERK7QString(void *this_, QString* name) {
  ((QTextImageFormat*)this_)->setName(*name);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:747
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTextImageFormat4nameEv(void *this_) {
  auto rv = ((QTextImageFormat*)this_)->name();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:750
// [-2] void setWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormat8setWidthEd(void *this_, qreal width) {
  ((QTextImageFormat*)this_)->setWidth(width);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:751
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextImageFormat5widthEv(void *this_) {
  return (qreal)((QTextImageFormat*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:754
// [-2] void setHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormat9setHeightEd(void *this_, qreal height) {
  ((QTextImageFormat*)this_)->setHeight(height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:755
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextImageFormat6heightEv(void *this_) {
  return (qreal)((QTextImageFormat*)this_)->height();
}

// Public inline Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qtextformat.h:758
// [-2] void setQuality(int)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormat10setQualityEi(void *this_, int quality) {
  ((QTextImageFormat*)this_)->setQuality(quality);
}
#endif // QT_VERSION >= 0x050c00

// Public inline Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qtextformat.h:759
// [4] int quality()
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextImageFormat7qualityEv(void *this_) {
  return (int)((QTextImageFormat*)this_)->quality();
}
#endif // QT_VERSION >= 0x050c00


extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormatD2Ev(void *this_) {
  delete (QTextImageFormat*)(this_);
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
