#include "Lab2theory.h"
#include <QMessageBox>

Lab2theory::Lab2theory(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Lab2theory::~Lab2theory()
{}


//-----------------

qreal _x;

void Lab2theory::on_pbDisplay_clicked()
{
	//QString name = ui.leName->text();
	//QMessageBox::information(this, "Hello", "Hello " + name);
}

void Lab2theory::on_pb1_clicked()
{
	QString display = ui.leDisplay->text();
	ui.leDisplay->setText(display + "1");
}

void Lab2theory::on_pb2_clicked()
{
	QString display = ui.leDisplay->text();
	ui.leDisplay->setText(display + "2");
}

void Lab2theory::on_pb3_clicked()
{
	QString display = ui.leDisplay->text();
	ui.leDisplay->setText(display + "3");
}

void Lab2theory::on_pbPlus_clicked()
{
	_x = ui.leDisplay->text().toDouble();
	ui.leDisplay->setText("0");
}

void Lab2theory::on_pbEqual_clicked()
{
	qreal y = ui.leDisplay->text().toDouble();
	qreal z = _x + y;
	ui.leDisplay->setText(QString::number(z));
}