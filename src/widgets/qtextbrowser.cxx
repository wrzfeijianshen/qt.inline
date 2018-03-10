//  header block begin
// /usr/include/qt/QtWidgets/qtextbrowser.h
#ifndef protected
#define protected public
#endif
#include <qtextbrowser.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTextBrowser is pure virtual: false
// QTextBrowser has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextBrowser : public QTextBrowser {
public:
  virtual ~MyQTextBrowser() {}
// void QTextBrowser(class QWidget *)
MyQTextBrowser(QWidget * parent) : QTextBrowser(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTextBrowser::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::keyPressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::mouseMoveEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::mousePressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::mouseReleaseEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::focusOutEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTextBrowser::focusNextPrevChild(next);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBrowser::paintEvent(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:107
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QTextBrowser5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QTextBrowser*)this_)->QTextBrowser::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:108
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::keyPressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:109
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::mouseMoveEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:110
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::mousePressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:111
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::mouseReleaseEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:112
// [-2] void focusOutEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * ev) {
  ((QTextBrowser*)this_)->QTextBrowser::focusOutEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:113
// [1] bool focusNextPrevChild(_Bool)
extern "C" Q_DECL_EXPORT
bool C_ZN12QTextBrowser18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QTextBrowser*)this_)->QTextBrowser::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:114
// [-2] void paintEvent(class QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QTextBrowser*)this_)->QTextBrowser::paintEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser10metaObjectEv(void *this_) {
  return (void*)((QTextBrowser*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:66
// [-2] void QTextBrowser(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextBrowserC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTextBrowser*)(0);
  return  new MyQTextBrowser(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:67
// [-2] void ~QTextBrowser()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowserD2Ev(void *this_) {
  delete (QTextBrowser*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:69
// [8] QUrl source()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser6sourceEv(void *this_) {
  auto rv = ((QTextBrowser*)this_)->source();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:71
// [8] QStringList searchPaths()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser11searchPathsEv(void *this_) {
  auto rv = ((QTextBrowser*)this_)->searchPaths();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:72
// [-2] void setSearchPaths(const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser14setSearchPathsERK11QStringList(void *this_, QStringList* paths) {
  ((QTextBrowser*)this_)->setSearchPaths(*paths);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:74
// [16] QVariant loadResource(int, const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextBrowser12loadResourceEiRK4QUrl(void *this_, int type_, QUrl* name) {
  auto rv = ((QTextBrowser*)this_)->loadResource(type_, *name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextbrowser.h:76
// [1] bool isBackwardAvailable()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextBrowser19isBackwardAvailableEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->isBackwardAvailable();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextbrowser.h:77
// [1] bool isForwardAvailable()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextBrowser18isForwardAvailableEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->isForwardAvailable();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextbrowser.h:78
// [-2] void clearHistory()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser12clearHistoryEv(void *this_) {
  ((QTextBrowser*)this_)->clearHistory();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:79
// [8] QString historyTitle(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser12historyTitleEi(void *this_, int arg0) {
  auto rv = ((QTextBrowser*)this_)->historyTitle(arg0);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:80
// [8] QUrl historyUrl(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTextBrowser10historyUrlEi(void *this_, int arg0) {
  auto rv = ((QTextBrowser*)this_)->historyUrl(arg0);
return new QUrl(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:81
// [4] int backwardHistoryCount()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZNK12QTextBrowser20backwardHistoryCountEv(void *this_) {
  return (int)((QTextBrowser*)this_)->backwardHistoryCount();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:82
// [4] int forwardHistoryCount()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZNK12QTextBrowser19forwardHistoryCountEv(void *this_) {
  return (int)((QTextBrowser*)this_)->forwardHistoryCount();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:84
// [1] bool openExternalLinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextBrowser17openExternalLinksEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->openExternalLinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:85
// [-2] void setOpenExternalLinks(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser20setOpenExternalLinksEb(void *this_, bool open) {
  ((QTextBrowser*)this_)->setOpenExternalLinks(open);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:87
// [1] bool openLinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextBrowser9openLinksEv(void *this_) {
  return (bool)((QTextBrowser*)this_)->openLinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:88
// [-2] void setOpenLinks(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser12setOpenLinksEb(void *this_, bool open) {
  ((QTextBrowser*)this_)->setOpenLinks(open);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:91
// [-2] void setSource(const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser9setSourceERK4QUrl(void *this_, QUrl* name) {
  ((QTextBrowser*)this_)->setSource(*name);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:92
// [-2] void backward()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser8backwardEv(void *this_) {
  ((QTextBrowser*)this_)->backward();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:93
// [-2] void forward()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser7forwardEv(void *this_) {
  ((QTextBrowser*)this_)->forward();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:94
// [-2] void home()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser4homeEv(void *this_) {
  ((QTextBrowser*)this_)->home();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:95
// [-2] void reload()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser6reloadEv(void *this_) {
  ((QTextBrowser*)this_)->reload();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:98
// [-2] void backwardAvailable(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser17backwardAvailableEb(void *this_, bool arg0) {
  ((QTextBrowser*)this_)->backwardAvailable(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:99
// [-2] void forwardAvailable(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser16forwardAvailableEb(void *this_, bool arg0) {
  ((QTextBrowser*)this_)->forwardAvailable(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextbrowser.h:100
// [-2] void historyChanged()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser14historyChangedEv(void *this_) {
  ((QTextBrowser*)this_)->historyChanged();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:101
// [-2] void sourceChanged(const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser13sourceChangedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->sourceChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:102
// [-2] void highlighted(const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser11highlightedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->highlighted(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:103
// [-2] void highlighted(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser11highlightedERK7QString(void *this_, QString* arg0) {
  ((QTextBrowser*)this_)->highlighted(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextbrowser.h:104
// [-2] void anchorClicked(const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextBrowser13anchorClickedERK4QUrl(void *this_, QUrl* arg0) {
  ((QTextBrowser*)this_)->anchorClicked(*arg0);
}

//  main block end
