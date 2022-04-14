#include "janelalogin.h"
#include "ui_janelalogin.h"

static QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    bancoDeDados.setDatabaseName("C:/Users/Fabiano/Desktop/Curso C++/qt_aula35/db_agenda.db");

    if(!bancoDeDados.open()){
        ui->label->setText("Não foi possível ebrir o banco de dados");
    }else{
        ui->label->setText("Banco de dados aberto com sucesso");
    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}


void JanelaLogin::on_btn_login_clicked()
{
    QString username=ui->txt_username->text();
    QString senha=ui->txt_senha->text();

    if(!bancoDeDados.isOpen()){
        qDebug()<<"Banco de dados não está aberto";
        return;
    }

    QSqlQuery query;

    if(query.exec("select * from tb_colaboradores where username='"+username+"' and senha='"+senha+"'")){

        int cont=0;
        while(query.next()){
            cont++;
        }

        if(cont>0){
            this->close();
            fm_principal f_principal;
            f_principal.setModal(true);
            f_principal.exec();            
        }else{
            ui->label->setText("Login não efetuado");
            ui->txt_username->clear();
            ui->txt_senha->clear();
            ui->txt_username->setFocus();           
        }
    }
}
