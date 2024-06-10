#include "QLib1.h"
#include "QLib1Widget.h"
QLib1::QLib1()
{
}

QWidget* QLib1::CreatLib1Widget()
{
	QLib1Widget* Widget = new QLib1Widget();
	return Widget;
}
