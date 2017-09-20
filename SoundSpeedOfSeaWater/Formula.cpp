#include "Formula.h"

Formula::Formula()
{

}

Formula::Formula(QString name)
{
	_name = name;
}


Formula::~Formula()
{
	//if (pFormula != nullptr)
	//	free(pFormula);
}

QString Formula::GetName()
{
	return _name;
}

void Formula::SetTempL(double tempL)
{
	_tempL = tempL;
}

double Formula::GetTempL()
{
	return _tempL;
}

void Formula::SetTempU(double tempU)
{
	_tempU = tempU;
}

double Formula::GetTempU()
{
	return _tempU;
}

void Formula::SetSaltL(double saltL)
{
	_saltL = saltL;
}

double Formula::GetSaltL()
{
	return _saltL;
}

void Formula::SetSaltU(double saltU)
{
	_saltU = saltU;
}

double Formula::GetSaltU()
{
	return _saltU;
}

void Formula::SetDepthL(double depthL)
{
	_depthL = depthL;
}

double Formula::GetDepthL()
{
	return _depthL;
}

void Formula::SetDepthU(double depthU)
{
	_depthU = depthU;
}

double Formula::GetDepthU()
{
	return _depthU;
}

void Formula::SetTemp(double temp)
{
	_temp = temp;
}

void Formula::SetSalt(double salt)
{
	_salt = salt;
}

void Formula::SetDepth(double depth)
{
	_depth = depth;
}

void Formula::SetFormula(double formula(double, double, double))
{
	pFormula = formula;
}

double Formula::GetSpeed()
{
	return pFormula(_temp, _salt, _depth);
}