#ifndef BR_H
#define BR_H

#include <QMainWindow>

namespace Ui 
{
class BR;
}

class BR : public QMainWindow
{
    Q_OBJECT

public slots:
    void executarBR();
    void cancelarBR();

public:
    explicit BR(QWidget *parent = 0);
    ~BR();



private:
    Ui::BR *ui;
    QAction *acaoSair;
    QMenu *menuArquivo;
    void criaAcao();
    void implementaAcaoSair();
    void criaMenu();

};

#endif // BR_H
