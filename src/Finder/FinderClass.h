//
// Created by arthur on 09.10.2021.
//

#ifndef FINDERCLASS_H
#define FINDERCLASS_H

#include <QWidget>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QStringList>
#include <QVector>

class FinderClass
{
private:

	QStringList labelsSearchPaths =
	{
		"/usr/share/applications/",
		"/home/arthur/.local/share/applications/"
	};

	QStringList binarySearchPaths;
	QStringList* programsList;

	QStringList scanLabels();

	void readLabels(const QStringList& labelsList, const QString& path);

public:

//	void addLabelsSearchPath();

	FinderClass();
//	~FinderClass();

};

#endif //FINDERCLASS_H
