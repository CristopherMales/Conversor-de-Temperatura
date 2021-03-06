#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

public slots:
    void cent2fahr_kelv(int i);
    void fahr2cent_kelv(int i);
    void kelv2cent_fahr(int i);

private:
    Ui::Principal *ui;
};
#endif // PRINCIPAL_H
