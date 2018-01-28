//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

// QXmlStreamNotationDeclaration is pure virtual: false
//  header block end

//  main block begin

class MyQXmlStreamNotationDeclaration : public QXmlStreamNotationDeclaration {
public:
MyQXmlStreamNotationDeclaration() : QXmlStreamNotationDeclaration() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:241
// [-2] void QXmlStreamNotationDeclaration()
extern "C"
void* C_ZN29QXmlStreamNotationDeclarationC1Ev() {
  (MyQXmlStreamNotationDeclaration*)(0);
  return  new MyQXmlStreamNotationDeclaration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:243
// [-2] void ~QXmlStreamNotationDeclaration()
extern "C"
void C_ZN29QXmlStreamNotationDeclarationD1Ev(void *this_) {
  delete (QXmlStreamNotationDeclaration*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:264
// [16] QStringRef name()
extern "C"
void* C_ZNK29QXmlStreamNotationDeclaration4nameEv(void *this_) {
  auto rv = ((QXmlStreamNotationDeclaration*)this_)->name();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:265
// [16] QStringRef systemId()
extern "C"
void* C_ZNK29QXmlStreamNotationDeclaration8systemIdEv(void *this_) {
  auto rv = ((QXmlStreamNotationDeclaration*)this_)->systemId();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:266
// [16] QStringRef publicId()
extern "C"
void* C_ZNK29QXmlStreamNotationDeclaration8publicIdEv(void *this_) {
  auto rv = ((QXmlStreamNotationDeclaration*)this_)->publicId();
return new QStringRef(rv);
}
//  main block end
