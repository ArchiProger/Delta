//
// Created by arthur on 20.09.2021.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QtWidgets/QDesktopWidget>
#include <QFile>
#include <QPainter>
#include <QLineEdit>
#include <QDebug>
#include <QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

private:

	Ui::MainWindow *ui;
	QLineEdit *textLine;

	void paintEvent(QPaintEvent *event) override;
	void resizeAnimation();

public:

	void moveToCentre();

	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

};


#endif //MAINWINDOW_H
