#include "QtWidgetsApplication1.h"
#include <QDebug>
#include <qmessagebox.h>
#include <qsqlerror.h>
QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton,&QPushButton::clicked,this,&QtWidgetsApplication1::slot_Handle);
    connect(ui.pushButton, &QPushButton::clicked, this,&QtWidgetsApplication1::slot_Handle);
    ui.pushButton->hhhh();
   // mLib1 = new QLib1;
    //QWidget* Widget = mLib1->CreatLib1Widget();
    QWidget* Widget = QLib1::CreatLib1Widget();
    Widget->show();

    /*QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("sealinkserv1");
    db.setUserName("root");
    db.setPassword("zhang231");
    db.setPort(3306);
    bool ok = db.open();
    if (ok == true) {
        QMessageBox::information(nullptr, "null", QStringLiteral("连接成功！"));
    }
    else {
        qDebug()<< db.lastError().text();
        QMessageBox::information(nullptr, "null", QStringLiteral("连接失败！"));
    }*/
}

void QtWidgetsApplication1::slot_Handle() {
    qDebug() << QString::fromLocal8Bit("测试") << endl;
    
}