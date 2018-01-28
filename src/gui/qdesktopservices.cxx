//  header block begin
// /usr/include/qt/QtGui/qdesktopservices.h
#include <qdesktopservices.h>
#include <QtGui>

// QDesktopServices is pure virtual: false
//  header block end

//  main block begin

class MyQDesktopServices : public QDesktopServices {
public:
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdesktopservices.h:59
// [1] bool openUrl(const class QUrl &)
extern "C"
bool C_ZN16QDesktopServices7openUrlERK4QUrl(const QUrl & url) {
  return (bool)QDesktopServices::openUrl(url);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdesktopservices.h:60
// [-2] void setUrlHandler(const class QString &, class QObject *, const char *)
extern "C"
void C_ZN16QDesktopServices13setUrlHandlerERK7QStringP7QObjectPKc(const QString & scheme, QObject * receiver, const char * method) {
  QDesktopServices::setUrlHandler(scheme, receiver, method);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdesktopservices.h:61
// [-2] void unsetUrlHandler(const class QString &)
extern "C"
void C_ZN16QDesktopServices15unsetUrlHandlerERK7QString(const QString & scheme) {
  QDesktopServices::unsetUrlHandler(scheme);
}
//  main block end
