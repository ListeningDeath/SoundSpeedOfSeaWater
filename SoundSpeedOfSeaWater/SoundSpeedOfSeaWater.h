#pragma once
#ifndef ADDSOLTTOVS_H
#define ADDSOLTTOVS_H

#include <QtWidgets/QMainWindow>
#include "ui_SoundSpeedOfSeaWater.h"


class SoundSpeedOfSeaWater : public QMainWindow
{
	Q_OBJECT

public:
	SoundSpeedOfSeaWater(QWidget *parent = Q_NULLPTR);
	void LoadFormulas();
	void LoadComboBox();
	void InitTextColor();

private:
	Ui::SoundSpeedOfSeaWaterClass ui;

public slots:
	void ComboBox_Actived(int);
	void btnCalculate_Clicked();
	void btnReset_Clicked();
};

#endif