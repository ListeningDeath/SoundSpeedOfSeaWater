#pragma once
#include <qstring.h>
class Formula
{
private:
	QString _name;
	double _temp, _salt, _depth;
	double _tempL, _tempU, _saltL, _saltU, _depthL, _depthU;
	double (*pFormula)(double, double, double);
public:
	Formula();
	Formula(QString);
	~Formula();
	QString GetName();

	void SetTempL(double);
	double GetTempL();
	void SetTempU(double);
	double GetTempU();
	void SetSaltL(double);
	double GetSaltL();
	void SetSaltU(double);
	double GetSaltU();
	void SetDepthL(double);
	double GetDepthL();
	void SetDepthU(double);
	double GetDepthU();

	void SetTemp(double);
	void SetSalt(double);
	void SetDepth(double);

	void SetFormula(double(double, double, double));
	double GetSpeed();
};

