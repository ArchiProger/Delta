//
// Created by arthur on 20.09.2021.
//

#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
, ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	QPainterPath painPath;
    painPath.addRoundedRect(rect(), 10, 10, Qt::AbsoluteSize);

    this->setMask(painPath.toFillPolygon().toPolygon());
	this->setWindowFlags(Qt::CustomizeWindowHint);
	this->moveToCentre();
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




