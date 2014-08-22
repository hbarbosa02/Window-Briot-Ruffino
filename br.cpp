#include "br.h"
#include "ui_br.h"

BR::BR(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BR)
{
    ui->setupUi(this);
    setWindowTitle(QString("App Briot_Ruffino"));

    this->criaAcao();
    this->criaMenu();

    statusBar()->showMessage(tr("Briot_Ruffino app."));
    statusBar()->setSizeGripEnabled(false);

    connect(ui->btn_cancelar, SIGNAL(clicked()), this, SLOT(cancelarBR()));
    connect(ui->btn_executar, SIGNAL(clicked()),this, SLOT(executarBR()));

}

BR::~BR()
{
    delete acaoSair;
    delete menuArquivo;
    delete ui;
}


void BR::criaAcao()
{
    acaoSair = new QAction(QString("&Sair"), this);
    acaoSair->setShortcut(QString("CTRL+S"));
    acaoSair->setStatusTip(QString("Encerra o aplicativo."));
    connect(acaoSair, SIGNAL(triggered()), this, SLOT(implementaAcaoSair()));
}

void BR::criaMenu()
{
    menuArquivo = menuBar()->addMenu(QString("&Arquivo"));
    menuArquivo->addAction(acaoSair);
}

void BR::implementaAcaoSair()
{
    close();
}
