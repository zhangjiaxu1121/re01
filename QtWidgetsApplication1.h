#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtWidgetsApplication1.h"
#include "QLib1.h"
#include <QSqlDatabase>
class QtWidgetsApplication1 : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = Q_NULLPTR);

private slots:
    void slot_Handle();
//private:
//    QLib1* mLib1;
private:
    Ui::QtWidgetsApplication1Class ui;
};
