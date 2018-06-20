#include <QWidget>

class QWebEngineView;

class Leaker : public QWidget
{
    Q_OBJECT

public:
    Leaker(QWidget *parent = 0);

public slots:
    void create_web();

private:
    QWebEngineView* view = NULL;
};
