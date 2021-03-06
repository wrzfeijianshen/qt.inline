//  header block begin

// since 0x040300
// /usr/include/qt/QtNetwork/qsslcertificate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslcertificate.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslCertificate is pure virtual: false
// QSslCertificate has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslCertificate_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslCertificate_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslCertificate_t qt_meta_stringdata_MyQSslCertificate = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQSslCertificate"
  },
  "MyQSslCertificate"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslCertificate[] = {
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
class Q_DECL_EXPORT MyQSslCertificate : public QSslCertificate {
public:
  virtual ~MyQSslCertificate() {}
// void QSslCertificate(QIODevice *, QSsl::EncodingFormat)
MyQSslCertificate(QIODevice * device, QSsl::EncodingFormat format) : QSslCertificate(device, format) {}
// void QSslCertificate(const QByteArray &, QSsl::EncodingFormat)
MyQSslCertificate(const QByteArray & data, QSsl::EncodingFormat format) : QSslCertificate(data, format) {}
// void QSslCertificate(const QSslCertificate &)
MyQSslCertificate(const QSslCertificate & other) : QSslCertificate(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:87
// [-2] void QSslCertificate(QIODevice *, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateC2EP9QIODeviceN4QSsl14EncodingFormatE(QIODevice * device, QSsl::EncodingFormat format) {
  return  new QSslCertificate(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:88
// [-2] void QSslCertificate(const QByteArray &, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateC2ERK10QByteArrayN4QSsl14EncodingFormatE(QByteArray* data, QSsl::EncodingFormat format) {
  return  new QSslCertificate(*data, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:89
// [-2] void QSslCertificate(const QSslCertificate &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateC2ERKS_(QSslCertificate* other) {
  return  new QSslCertificate(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:90
// [-2] void ~QSslCertificate()
extern "C" Q_DECL_EXPORT
void C_ZN15QSslCertificateD2Ev(void *this_) {
  delete (QSslCertificate*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:92
// [8] QSslCertificate & operator=(QSslCertificate &&)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateaSEOS_(void *this_, QSslCertificate && other) {
  auto& rv = ((QSslCertificate*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:94
// [8] QSslCertificate & operator=(const QSslCertificate &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateaSERKS_(void *this_, QSslCertificate* other) {
  auto& rv = ((QSslCertificate*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcertificate.h:96
// [-2] void swap(QSslCertificate &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN15QSslCertificate4swapERS_(void *this_, QSslCertificate* other) {
  ((QSslCertificate*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:99
// [1] bool operator==(const QSslCertificate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificateeqERKS_(void *this_, QSslCertificate* other) {
  return (bool)((QSslCertificate*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:100
// [1] bool operator!=(const QSslCertificate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificateneERKS_(void *this_, QSslCertificate* other) {
  return (bool)((QSslCertificate*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:102
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificate6isNullEv(void *this_) {
  return (bool)((QSslCertificate*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:111
// [1] bool isBlacklisted()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificate13isBlacklistedEv(void *this_) {
  return (bool)((QSslCertificate*)this_)->isBlacklisted();
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtNetwork/qsslcertificate.h:112
// [1] bool isSelfSigned()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificate12isSelfSignedEv(void *this_) {
  return (bool)((QSslCertificate*)this_)->isSelfSigned();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:113
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN15QSslCertificate5clearEv(void *this_) {
  ((QSslCertificate*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:116
// [8] QByteArray version()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate7versionEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->version();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:117
// [8] QByteArray serialNumber()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate12serialNumberEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->serialNumber();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:118
// [8] QByteArray digest(QCryptographicHash::Algorithm)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate6digestEN18QCryptographicHash9AlgorithmE(void *this_, QCryptographicHash::Algorithm algorithm) {
  auto rv = ((QSslCertificate*)this_)->digest(algorithm);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:119
// [8] QStringList issuerInfo(QSslCertificate::SubjectInfo)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate10issuerInfoENS_11SubjectInfoE(void *this_, QSslCertificate::SubjectInfo info) {
  auto rv = ((QSslCertificate*)this_)->issuerInfo(info);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:120
// [8] QStringList issuerInfo(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate10issuerInfoERK10QByteArray(void *this_, QByteArray* attribute) {
  auto rv = ((QSslCertificate*)this_)->issuerInfo(*attribute);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:121
// [8] QStringList subjectInfo(QSslCertificate::SubjectInfo)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate11subjectInfoENS_11SubjectInfoE(void *this_, QSslCertificate::SubjectInfo info) {
  auto rv = ((QSslCertificate*)this_)->subjectInfo(info);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:122
// [8] QStringList subjectInfo(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate11subjectInfoERK10QByteArray(void *this_, QByteArray* attribute) {
  auto rv = ((QSslCertificate*)this_)->subjectInfo(*attribute);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtNetwork/qsslcertificate.h:123
// [8] QString issuerDisplayName()
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate17issuerDisplayNameEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->issuerDisplayName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtNetwork/qsslcertificate.h:124
// [8] QString subjectDisplayName()
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate18subjectDisplayNameEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->subjectDisplayName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcertificate.h:126
// [8] QList<QByteArray> subjectInfoAttributes()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK15QSslCertificate21subjectInfoAttributesEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->subjectInfoAttributes();
return new QList<QByteArray>(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcertificate.h:127
// [8] QList<QByteArray> issuerInfoAttributes()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK15QSslCertificate20issuerInfoAttributesEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->issuerInfoAttributes();
return new QList<QByteArray>(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:132
// [-2] QMultiMap<QSsl::AlternativeNameEntryType, QString> subjectAlternativeNames()
extern "C" Q_DECL_EXPORT
void C_ZNK15QSslCertificate23subjectAlternativeNamesEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->subjectAlternativeNames();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:133
// [8] QDateTime effectiveDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate13effectiveDateEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->effectiveDate();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:134
// [8] QDateTime expiryDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate10expiryDateEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->expiryDate();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:136
// [8] QSslKey publicKey()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate9publicKeyEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->publicKey();
return new QSslKey(rv);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcertificate.h:138
// [-2] QList<QSslCertificateExtension> extensions()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QList<QSslCertificateExtension>* C_ZNK15QSslCertificate10extensionsEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->extensions();
return new QList<QSslCertificateExtension>(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:140
// [8] QByteArray toPem()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate5toPemEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->toPem();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:141
// [8] QByteArray toDer()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate5toDerEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->toDer();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcertificate.h:142
// [8] QString toText()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate6toTextEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->toText();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:144
// [-2] QList<QSslCertificate> fromPath(const QString &, QSsl::EncodingFormat, QRegExp::PatternSyntax)
extern "C" Q_DECL_EXPORT
QList<QSslCertificate>* C_ZN15QSslCertificate8fromPathERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(QString* path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax) {
  auto rv = QSslCertificate::fromPath(*path, format, syntax);
return new QList<QSslCertificate>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:147
// [-2] QList<QSslCertificate> fromDevice(QIODevice *, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
QList<QSslCertificate>* C_ZN15QSslCertificate10fromDeviceEP9QIODeviceN4QSsl14EncodingFormatE(QIODevice * device, QSsl::EncodingFormat format) {
  auto rv = QSslCertificate::fromDevice(device, format);
return new QList<QSslCertificate>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:149
// [-2] QList<QSslCertificate> fromData(const QByteArray &, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
QList<QSslCertificate>* C_ZN15QSslCertificate8fromDataERK10QByteArrayN4QSsl14EncodingFormatE(QByteArray* data, QSsl::EncodingFormat format) {
  auto rv = QSslCertificate::fromData(*data, format);
return new QList<QSslCertificate>(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcertificate.h:156
// [8] QList<QSslError> verify(QList<QSslCertificate>, const QString &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QList<QSslError>* C_ZN15QSslCertificate6verifyE5QListIS_ERK7QString(QList<QSslCertificate> certificateChain, QString* hostName) {
  auto rv = QSslCertificate::verify(certificateChain, *hostName);
return new QList<QSslError>(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtNetwork/qsslcertificate.h:159
// [1] bool importPkcs12(QIODevice *, QSslKey *, QSslCertificate *, QList<QSslCertificate> *, const QByteArray &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
bool C_ZN15QSslCertificate12importPkcs12EP9QIODeviceP7QSslKeyPS_P5QListIS_ERK10QByteArray(QIODevice * device, QSslKey * key, QSslCertificate * cert, QList<QSslCertificate> * caCertificates, QByteArray* passPhrase) {
  return (bool)QSslCertificate::importPkcs12(device, key, cert, caCertificates, *passPhrase);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:165
// [8] Qt::HANDLE handle()
extern "C" Q_DECL_EXPORT
Qt::HANDLE C_ZNK15QSslCertificate6handleEv(void *this_) {
  return (Qt::HANDLE)((QSslCertificate*)this_)->handle();
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
