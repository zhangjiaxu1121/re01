#include "QDIYPushBtn.h"
#include <qdebug.h>
QDIYPushBtn::QDIYPushBtn(QWidget *parent)
	: QPushButton(parent)
{
	setText(QStringLiteral("�û��Զ���"));
	connect(this, &QPushButton::clicked, [=] {
		qDebug() << "DIY Success!";
	});
}

QDIYPushBtn::~QDIYPushBtn()
{
}

void QDIYPushBtn::hhhh()
{
}
