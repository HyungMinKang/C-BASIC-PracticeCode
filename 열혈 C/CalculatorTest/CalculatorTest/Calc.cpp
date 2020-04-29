
#include"Calc.h"


double Calculator::Add(double dnum1, double dnum2)
{

	addCount++;
	return dnum1 + dnum2;
}

double Calculator::Sub(double dnum1, double dnum2)
{
	subCount++;
	return dnum1 - dnum2;
}

double Calculator::Div(double dnum1, double dnum2)
{
	
	divCount++;
	return dnum1 / dnum2;
}

double Calculator::Mul(double dnum1, double dnum2)
{
	
	mulCount++;
	return dnum1 * dnum2;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << addCount << " »¬¼À: " << subCount << " °ö¼À: " << mulCount << " ³ª´°¼À: " << divCount << endl;
}

void Calculator::Init()
{
	addCount = 0;
	subCount = 0;
	divCount = 0;
	mulCount = 0;
}