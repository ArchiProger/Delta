//
// Created by arthur on 09.10.2021.
//

#include "FinderClass.h"

FinderClass::FinderClass()
{
	scanLabels();
}

QStringList FinderClass::scanLabels()
{
//	QVector<QStringList> labelsList;

	for (int i = 0; i < labelsSearchPaths.size(); i++)
	{
		QDir* dir = new QDir(labelsSearchPaths[i]);
		dir->setNameFilters(QStringList("*desktop"));

		QStringList labelsList;
		labelsList = dir->entryList(QDir::Files);
		delete dir;

		readLabels(labelsList, labelsSearchPaths[i]);
	}

}

void FinderClass::readLabels(const QStringList &labelsList, const QString& path)
{
	/*for (int i = 0; i < labelsList.size(); i++)
	{
		QFile label(path + labelsList[i]);
		label.open(QFile::ReadOnly);
	}*/

	QFile label(path + labelsList[0]);

	if (label.open(QFile::ReadOnly))
	{
		QTextStream textStream(&label);

		while (!textStream.atEnd())
		{
			QString line = textStream.readLine();
			int index = line.indexOf("Name");

			if (index != -1)
			{
				QString name = line.mid
					(
						line.indexOf("=") + 1,
						line.size() - 1
					);
			}

		}
	}
}
