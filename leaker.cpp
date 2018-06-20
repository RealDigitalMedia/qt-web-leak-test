#include <QtGui>

#include "leaker.h"

#include <QWebEngineView>

Leaker::Leaker(QWidget *parent)
    : QWidget(parent)
{
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(create_web()));
    timer->start(1000);

    setWindowTitle(tr("Leaker"));
    resize(600, 600);

    view = NULL;
    create_web();
}

void Leaker::create_web()
{
  QDateTime now = QDateTime::currentDateTime();

  if (view)
  {
    qDebug() << "Deleting QWebEngineView";
    delete view;
  }

  qDebug() << "Creating QWebEngineView";

  view = new QWebEngineView(this);
  view->load(QUrl::fromUserInput("about: blank"));
  view->show();
}
