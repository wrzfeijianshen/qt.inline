// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qshortcut.h
// dst-file: /src/widgets/qshortcut.cxx
//

// header block begin =>
#include <qshortcut.h>

extern "C" {

// QShortcut(const class QKeySequence &, class QWidget *, const char *, const char *, Qt::ShortcutContext)
QShortcut* dector_ZN9QShortcutC1ERK12QKeySequenceP7QWidgetPKcS6_N2Qt15ShortcutContextE(const QKeySequence & key, QWidget * parent, const char * member, const char * ambiguousMember, Qt::ShortcutContext context)
{
  // static_assert(sizeof(QShortcut) == 32, "tyszerr");
  QShortcut* rthis = new QShortcut(key, parent, member, ambiguousMember, context);
  return rthis;
}

// QShortcut(class QWidget *)
QShortcut* dector_ZN9QShortcutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QShortcut) == 32, "tyszerr");
  QShortcut* rthis = new QShortcut(parent);
  return rthis;
}

// ~QShortcut()
void dedtor_ZN9QShortcutD0Ev(QShortcut* that)
{
  QShortcut* rthis = (QShortcut*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

