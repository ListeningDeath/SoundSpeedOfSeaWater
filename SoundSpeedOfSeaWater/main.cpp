#include "SoundSpeedOfSeaWater.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SoundSpeedOfSeaWater w;
	w.show();
	return a.exec();
}
