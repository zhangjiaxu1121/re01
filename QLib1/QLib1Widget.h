#pragma once

#include <QWidget>
#include "ui_QLib1Widget.h"

class QLib1Widget : public QWidget
{
	Q_OBJECT

public:
	QLib1Widget(QWidget *parent = Q_NULLPTR);
	~QLib1Widget();

private:
	Ui::QLib1Widget ui;
};
