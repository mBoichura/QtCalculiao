#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Lab2theory.h"

class Lab2theory : public QMainWindow
{
    Q_OBJECT

public:
    Lab2theory(QWidget *parent = nullptr);
    ~Lab2theory();

private:
    Ui::Lab2theoryClass ui;

private slots:
    void on_pbDisplay_clicked();
    void on_pb1_clicked();
    void on_pb2_clicked();
    void on_pb3_clicked();
    void on_pbPlus_clicked();
    void on_pbEqual_clicked();

};
