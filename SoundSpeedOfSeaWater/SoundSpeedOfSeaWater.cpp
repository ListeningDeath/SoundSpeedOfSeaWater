#include <qvariant.h>
#include "SoundSpeedOfSeaWater.h"
#include "Formula.h"

Q_DECLARE_METATYPE(Formula*);

QList<Formula*> g_formulaList;
QPalette WARNING_COLOR, NORMAL_COLOR;

double formulaCoppens(double temp, double salt, double depth)
{
	temp /= 10;
	depth /= 1000;
	double C = 1449.05 + 45.7 * temp - 5.21 * pow(temp, 2) + 0.23 * pow(temp, 3) + (1.333 - 0.126 * temp + 0.009 * pow(temp, 2)) * (salt - 35);
	C += (16.23 + 0.253 * temp) * depth + (0.213 - 0.1 * temp) * pow(depth, 2) + (0.016 + 0.0002 * (salt - 35)) * (salt - 35) * temp * depth;
	return C;
}

void SoundSpeedOfSeaWater::LoadFormulas()
{
	auto fCoppens = new Formula("Coppens 1981");
	fCoppens->SetTempL(-2);
	fCoppens->SetTempU(35);
	fCoppens->SetSaltL(0);
	fCoppens->SetSaltU(42);
	fCoppens->SetDepthL(0);
	fCoppens->SetDepthU(4000);
	fCoppens->SetFormula(formulaCoppens);
	g_formulaList.append(fCoppens);
}

void SoundSpeedOfSeaWater::LoadComboBox()
{
	for each (auto formula in g_formulaList)
	{
		QVariant var;
		var.setValue(formula);
		ui.cbxFunType->addItem(formula->GetName(), var);
	}
}

void SoundSpeedOfSeaWater::InitTextColor()
{
	ui.txtTemp->setPalette(NORMAL_COLOR);
	ui.txtSalt->setPalette(NORMAL_COLOR);
	ui.txtDepth->setPalette(NORMAL_COLOR);
	ui.txtSpeed->setPalette(NORMAL_COLOR);
}

SoundSpeedOfSeaWater::SoundSpeedOfSeaWater(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setFixedSize(this->width(), this->height());
	LoadFormulas();
	LoadComboBox();
	InitTextColor();
	ui.cbxFunType->setCurrentIndex(-1);
	WARNING_COLOR.setColor(QPalette::Text, Qt::red);
	NORMAL_COLOR.setColor(QPalette::Text, Qt::black);
}

void SoundSpeedOfSeaWater::ComboBox_Actived(int index)
{
	auto current = ui.cbxFunType->currentData().value<Formula*>();
	auto tempStr = QString::fromLocal8Bit("温度/℃(%1~%2)：")
		.arg(current->GetTempL(), 0, 'g', 3)
		.arg(current->GetTempU(), 0, 'g', 3);
	ui.lblTemp->setText(tempStr);
	auto saltStr = QString::fromLocal8Bit("盐度/ppt(%1~%2)：")
		.arg(current->GetSaltL(), 0, 'g', 3)
		.arg(current->GetSaltU(), 0, 'g', 3);
	ui.lblSalt->setText(saltStr);
	auto depthStr = QString::fromLocal8Bit("深度/m(%1~%2)：")
		.arg(current->GetDepthL(), 0, 'g', 5)
		.arg(current->GetDepthU(), 0, 'g', 5);
	ui.lblDepth->setText(depthStr);
}

void SoundSpeedOfSeaWater::btnCalculate_Clicked()
{
	bool isOutOfRange = false;
	auto formula = ui.cbxFunType->currentData().value<Formula*>();
	double value;

	InitTextColor();
	value = ui.txtTemp->text().toDouble();
	formula->SetTemp(value);
	if (value < formula->GetTempL() || value > formula->GetTempU())
	{
		ui.txtTemp->setPalette(WARNING_COLOR);
		isOutOfRange = true;
	}
	value = ui.txtSalt->text().toDouble();
	formula->SetSalt(value);
	if (value < formula->GetSaltL() || value > formula->GetSaltU())
	{
		ui.txtSalt->setPalette(WARNING_COLOR);
		isOutOfRange = true;
	}
	value = ui.txtDepth->text().toDouble();
	formula->SetDepth(value);
	if (value < formula->GetDepthL() || value > formula->GetDepthU())
	{
		ui.txtDepth->setPalette(WARNING_COLOR);
		isOutOfRange = true;
	}
	auto speed = formula->GetSpeed();
	ui.txtSpeed->setText(QString::number(speed, 'g'));
	if (isOutOfRange)
	{
		ui.txtSpeed->setPalette(WARNING_COLOR);
	}
}

void SoundSpeedOfSeaWater::btnReset_Clicked()
{
	InitTextColor();
	ui.txtTemp->clear();
	ui.txtSalt->clear();
	ui.txtDepth->clear();
	ui.txtSpeed->clear();
}