//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterCompositeSingletonType is pure virtual: false
// RegisterCompositeSingletonType has virtual projected: false
//  header block end

//  main block begin

class MyRegisterCompositeSingletonType : public QQmlPrivate::RegisterCompositeSingletonType {
public:
  virtual ~MyRegisterCompositeSingletonType() {}
};


extern "C"
void C_ZN30RegisterCompositeSingletonTypeD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterCompositeSingletonType*)(this_);
}
//  main block end
