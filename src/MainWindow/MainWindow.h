//
// Created by arthur on 20.09.2021.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QDesktopWidget>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

private:

	Ui::MainWindow *ui;

	void loudStyles();

public:

	void moveToCentre();

	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

};


#endif //MAINWINDOW_H
