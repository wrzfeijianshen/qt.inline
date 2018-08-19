//  header block begin
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameracapturedestinationcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraCaptureDestinationControl is pure virtual: true
// QCameraCaptureDestinationControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraCaptureDestinationControl : public QCameraCaptureDestinationControl {
public:
  virtual ~MyQCameraCaptureDestinationControl() {}
// void QCameraCaptureDestinationControl(QObject *)
MyQCameraCaptureDestinationControl(QObject * parent) : QCameraCaptureDestinationControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK32QCameraCaptureDestinationControl10metaObjectEv(void *this_) {
  return (void*)((QCameraCaptureDestinationControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraCaptureDestinationControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraCaptureDestinationControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN32QCameraCaptureDestinationControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraCaptureDestinationControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraCaptureDestinationControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraCaptureDestinationControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraCaptureDestinationControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraCaptureDestinationControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:55
// [-2] void ~QCameraCaptureDestinationControl()
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraCaptureDestinationControlD2Ev(void *this_) {
  delete (QCameraCaptureDestinationControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:57
// [1] bool isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
bool C_ZNK32QCameraCaptureDestinationControl29isCaptureDestinationSupportedE6QFlagsIN19QCameraImageCapture18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  return (bool)((QCameraCaptureDestinationControl*)this_)->isCaptureDestinationSupported(destination);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:58
// [4] QCameraImageCapture::CaptureDestinations captureDestination()
extern "C" Q_DECL_EXPORT
QCameraImageCapture::CaptureDestinations C_ZNK32QCameraCaptureDestinationControl18captureDestinationEv(void *this_) {
  return (QCameraImageCapture::CaptureDestinations)((QCameraCaptureDestinationControl*)this_)->captureDestination();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:59
// [-2] void setCaptureDestination(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraCaptureDestinationControl21setCaptureDestinationE6QFlagsIN19QCameraImageCapture18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  ((QCameraCaptureDestinationControl*)this_)->setCaptureDestination(destination);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:62
// [-2] void captureDestinationChanged(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraCaptureDestinationControl25captureDestinationChangedE6QFlagsIN19QCameraImageCapture18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> arg0) {
  ((QCameraCaptureDestinationControl*)this_)->captureDestinationChanged(arg0);
}

//  main block end
