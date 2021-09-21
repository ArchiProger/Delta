//
// Created by arthur on 20.09.2021.
//

#include <QApplication>

#include "MainWindow/MainWindow.h"
#include "ui_mainwindow.h"

int main (int argc, char *argv[])
{
	QApplication app(argc, argv);

	QFile file(":/styles/mainwindow.css");
	file.open(QFile::ReadOnly);
	app.setStyleSheet(file.readAll());

	MainWindow *wnd = new MainWindow;
	wnd->show();

/*	for (int i = 0; i < 100000; i++)
	{
		wnd->resize(wnd->width() + 1, wnd->height() + 1);
		wnd->moveToCentre();
	}*/

	return app.exec();
}