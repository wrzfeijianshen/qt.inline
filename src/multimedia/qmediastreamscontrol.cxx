//  header block begin
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediastreamscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaStreamsControl is pure virtual: true
// QMediaStreamsControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaStreamsControl : public QMediaStreamsControl {
public:
  virtual ~MyQMediaStreamsControl() {}
// void QMediaStreamsControl(QObject *)
MyQMediaStreamsControl(QObject * parent) : QMediaStreamsControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QMediaStreamsControl10metaObjectEv(void *this_) {
  return (void*)((QMediaStreamsControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QMediaStreamsControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaStreamsControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QMediaStreamsControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaStreamsControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QMediaStreamsControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaStreamsControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QMediaStreamsControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaStreamsControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:61
// [-2] void ~QMediaStreamsControl()
extern "C" Q_DECL_EXPORT
void C_ZN20QMediaStreamsControlD2Ev(void *this_) {
  delete (QMediaStreamsControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:63
// [4] int streamCount()
extern "C" Q_DECL_EXPORT
int C_ZN20QMediaStreamsControl11streamCountEv(void *this_) {
  return (int)((QMediaStreamsControl*)this_)->streamCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:64
// [4] QMediaStreamsControl::StreamType streamType(int)
extern "C" Q_DECL_EXPORT
QMediaStreamsControl::StreamType C_ZN20QMediaStreamsControl10streamTypeEi(void *this_, int streamNumber) {
  return (QMediaStreamsControl::StreamType)((QMediaStreamsControl*)this_)->streamType(streamNumber);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:66
// [16] QVariant metaData(int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QMediaStreamsControl8metaDataEiRK7QString(void *this_, int streamNumber, QString* key) {
  auto rv = ((QMediaStreamsControl*)this_)->metaData(streamNumber, *key);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:68
// [1] bool isActive(int)
extern "C" Q_DECL_EXPORT
bool C_ZN20QMediaStreamsControl8isActiveEi(void *this_, int streamNumber) {
  return (bool)((QMediaStreamsControl*)this_)->isActive(streamNumber);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:69
// [-2] void setActive(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN20QMediaStreamsControl9setActiveEib(void *this_, int streamNumber, bool state) {
  ((QMediaStreamsControl*)this_)->setActive(streamNumber, state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:72
// [-2] void streamsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN20QMediaStreamsControl14streamsChangedEv(void *this_) {
  ((QMediaStreamsControl*)this_)->streamsChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:73
// [-2] void activeStreamsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN20QMediaStreamsControl20activeStreamsChangedEv(void *this_) {
  ((QMediaStreamsControl*)this_)->activeStreamsChanged();
}

//  main block end
