//
// Created by arthur on 20.09.2021.
//

#include <QApplication>

#include "MainWindow/MainWindow.h"
#include "ui_mainwindow.h"

int main (int argc, char *argv[])
{
	QApplication app(argc, argv);

	MainWindow *wnd = new MainWindow;
	wnd->show();

	return app.exec();
}