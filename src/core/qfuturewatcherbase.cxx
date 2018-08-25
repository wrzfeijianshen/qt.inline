//  header block begin
// /usr/include/qt/QtCore/qfuturewatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfuturewatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureWatcherBase is pure virtual: true
// QFutureWatcherBase has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFutureWatcherBase : public QFutureWatcherBase {
public:
  virtual ~MyQFutureWatcherBase() {}
// Private purevirtual virtual Visibility=Default Availability=Available
// [16] const QFutureInterfaceBase & futureInterface()
  virtual const QFutureInterfaceBase & futureInterface() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"futureInterface", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const QFutureInterfaceBase &)(irv);
      // LValueReference LValueReference const QFutureInterfaceBase &
    } else {
    auto orv = (const QFutureInterfaceBase){}; return orv;
  }
  }

// Private purevirtual virtual Visibility=Default Availability=Available
// [16] QFutureInterfaceBase & futureInterface()
  virtual QFutureInterfaceBase & futureInterface()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"futureInterface", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QFutureInterfaceBase &)(irv);
      // LValueReference LValueReference QFutureInterfaceBase &
    } else {
    auto orv = (QFutureInterfaceBase){}; return orv;
  }
  }

// void QFutureWatcherBase(QObject *)
MyQFutureWatcherBase(QObject * parent) : QFutureWatcherBase(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void connectNotify(const QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"connectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFutureWatcherBase::connectNotify(signal);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void disconnectNotify(const QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"disconnectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFutureWatcherBase::disconnectNotify(signal);
  }
  }

};

// Private purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:110
// [16] const QFutureInterfaceBase & futureInterface()
// Private purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:111
// [16] QFutureInterfaceBase & futureInterface()
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:101
// [-2] void connectNotify(const QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase13connectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QFutureWatcherBase*)this_)->QFutureWatcherBase::connectNotify(*signal);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:102
// [-2] void disconnectNotify(const QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase16disconnectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QFutureWatcherBase*)this_)->QFutureWatcherBase::disconnectNotify(*signal);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFutureWatcherBase10metaObjectEv(void *this_) {
  return (void*)((QFutureWatcherBase*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFutureWatcherBase11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFutureWatcherBase*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QFutureWatcherBase11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFutureWatcherBase*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFutureWatcherBase2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFutureWatcherBase::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFutureWatcherBase6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFutureWatcherBase::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:61
// [-2] void QFutureWatcherBase(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFutureWatcherBaseC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQFutureWatcherBase*)(0);
  return  new MyQFutureWatcherBase(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:64
// [4] int progressValue()
extern "C" Q_DECL_EXPORT
int C_ZNK18QFutureWatcherBase13progressValueEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:65
// [4] int progressMinimum()
extern "C" Q_DECL_EXPORT
int C_ZNK18QFutureWatcherBase15progressMinimumEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressMinimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:66
// [4] int progressMaximum()
extern "C" Q_DECL_EXPORT
int C_ZNK18QFutureWatcherBase15progressMaximumEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressMaximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:67
// [8] QString progressText()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFutureWatcherBase12progressTextEv(void *this_) {
  auto rv = ((QFutureWatcherBase*)this_)->progressText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:69
// [1] bool isStarted()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase9isStartedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:70
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase10isFinishedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:71
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase9isRunningEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:72
// [1] bool isCanceled()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase10isCanceledEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isCanceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:73
// [1] bool isPaused()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase8isPausedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isPaused();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:75
// [-2] void waitForFinished()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase15waitForFinishedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->waitForFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:77
// [-2] void setPendingResultsLimit(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase22setPendingResultsLimitEi(void *this_, int limit) {
  ((QFutureWatcherBase*)this_)->setPendingResultsLimit(limit);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:79
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN18QFutureWatcherBase5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QFutureWatcherBase*)this_)->event(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:82
// [-2] void started()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase7startedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->started();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:83
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase8finishedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:84
// [-2] void canceled()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase8canceledEv(void *this_) {
  ((QFutureWatcherBase*)this_)->canceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:85
// [-2] void paused()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase6pausedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->paused();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:86
// [-2] void resumed()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase7resumedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->resumed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:87
// [-2] void resultReadyAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase13resultReadyAtEi(void *this_, int resultIndex) {
  ((QFutureWatcherBase*)this_)->resultReadyAt(resultIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:88
// [-2] void resultsReadyAt(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase14resultsReadyAtEii(void *this_, int beginIndex, int endIndex) {
  ((QFutureWatcherBase*)this_)->resultsReadyAt(beginIndex, endIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:89
// [-2] void progressRangeChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase20progressRangeChangedEii(void *this_, int minimum, int maximum) {
  ((QFutureWatcherBase*)this_)->progressRangeChanged(minimum, maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:90
// [-2] void progressValueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase20progressValueChangedEi(void *this_, int progressValue) {
  ((QFutureWatcherBase*)this_)->progressValueChanged(progressValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:91
// [-2] void progressTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase19progressTextChangedERK7QString(void *this_, QString* progressText) {
  ((QFutureWatcherBase*)this_)->progressTextChanged(*progressText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:94
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase6cancelEv(void *this_) {
  ((QFutureWatcherBase*)this_)->cancel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:95
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase9setPausedEb(void *this_, bool paused) {
  ((QFutureWatcherBase*)this_)->setPaused(paused);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:96
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase5pauseEv(void *this_) {
  ((QFutureWatcherBase*)this_)->pause();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:97
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase6resumeEv(void *this_) {
  ((QFutureWatcherBase*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:98
// [-2] void togglePaused()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase12togglePausedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->togglePaused();
}


extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBaseD2Ev(void *this_) {
  delete (QFutureWatcherBase*)(this_);
}
//  main block end
