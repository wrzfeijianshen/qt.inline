// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qabstractitemdelegate.h
// dst-file: /src/widgets/qabstractitemdelegate.cxx
//

// header block begin =>
#include <qabstractitemdelegate.h>

extern "C" {

int QAbstractItemDelegate_Class_Size()
{
  return sizeof(QAbstractItemDelegate);
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
// QAbstractItemDelegate_SlotProxy here
class QAbstractItemDelegate_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractItemDelegate_SlotProxy():QObject(){}

public slots:
  // closeEditor(class QWidget *, class QAbstractItemDelegate::EndEditHint)
  void slot_proxy_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QWidget * arg0, QAbstractItemDelegate::EndEditHint arg1);
public:
  void (*slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE)(void* rsfptr, QWidget * arg0, QAbstractItemDelegate::EndEditHint arg1) = NULL;
public slots:
  // sizeHintChanged(const class QModelIndex &)
  void slot_proxy_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // commitData(class QWidget *)
  void slot_proxy_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QWidget * arg0);
public:
  void (*slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget)(void* rsfptr, QWidget * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractitemdelegate.moc"

extern "C" {
  QAbstractItemDelegate_SlotProxy* QAbstractItemDelegate_SlotProxy_new()
  {
    return new QAbstractItemDelegate_SlotProxy();
  }
};

void QAbstractItemDelegate_SlotProxy::slot_proxy_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QWidget * arg0, QAbstractItemDelegate::EndEditHint arg1) {
  if (this->slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE != NULL) {
    // do smth...
    this->slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QAbstractItemDelegate_SlotProxy_connect__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemDelegate_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE = (decltype(that->slot_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE))ffifptr;
  QObject::connect((QAbstractItemDelegate*)sender, SIGNAL(closeEditor(class QWidget *, class QAbstractItemDelegate::EndEditHint)), that, SLOT(slot_proxy_func__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QWidget * arg0, QAbstractItemDelegate::EndEditHint arg1)));
  return that;
}
extern "C"
void QAbstractItemDelegate_SlotProxy_disconnect__ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE(QAbstractItemDelegate_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemDelegate_SlotProxy::slot_proxy_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemDelegate_SlotProxy_connect__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemDelegate_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex = (decltype(that->slot_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemDelegate*)sender, SIGNAL(sizeHintChanged(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemDelegate_SlotProxy_disconnect__ZN21QAbstractItemDelegate15sizeHintChangedERK11QModelIndex(QAbstractItemDelegate_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemDelegate_SlotProxy::slot_proxy_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QWidget * arg0) {
  if (this->slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget != NULL) {
    // do smth...
    this->slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemDelegate_SlotProxy_connect__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemDelegate_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget = (decltype(that->slot_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget))ffifptr;
  QObject::connect((QAbstractItemDelegate*)sender, SIGNAL(commitData(class QWidget *)), that, SLOT(slot_proxy_func__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QWidget * arg0)));
  return that;
}
extern "C"
void QAbstractItemDelegate_SlotProxy_disconnect__ZN21QAbstractItemDelegate10commitDataEP7QWidget(QAbstractItemDelegate_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

