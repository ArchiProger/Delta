//
// Created by arthur on 20.09.2021.
//

#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
, ui(new Ui::MainWindow)
, textLine(new QLineEdit(this))
{
	ui->setupUi(this);

	this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowStaysOnTopHint);
	this->moveToCentre();

	textLine->setPlaceholderText("Search...");
	textLine->setGeometry(0, 0, 800, 75);

	resizeAnimation();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::moveToCentre()
{
	QRect screenGeometry = QApplication::desktop()->screenGeometry();

	int x = (screenGeometry.width() - width()) / 2;
	int y = (screenGeometry.height() - height()) / 3;

	this->move(x, y);
}

void MainWindow::resizeAnimation()
{
	QPropertyAnimation *mainWindowAnimation = new QPropertyAnimation(this, "size");

	mainWindowAnimation->setDuration(500);
	mainWindowAnimation->setEasingCurve(QEasingCurve::Linear);
	mainWindowAnimation->setEndValue(QSize(800, 500));
	mainWindowAnimation->start();
}

void MainWindow::paintEvent(QPaintEvent *event)
{
	QPainterPath painPath;
    painPath.addRoundedRect(this->rect(), 10, 10);

    this->setMask(painPath.toFillPolygon().toPolygon());
}




