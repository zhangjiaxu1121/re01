#include "QDIYPushBtn.h"
#include <qdebug.h>
QDIYPushBtn::QDIYPushBtn(QWidget *parent)
	: QPushButton(parent)
{
	setText(QStringLiteral("用户自定义"));
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
