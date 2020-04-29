#ifndef __CALC_H__
#define __CALC_H__
#include <iostream>
using namespace std;
class Calculator {

private:
	int addCount;
	int subCount;
	int divCount;
	int mulCount;

public:
	void Init();
	double Add(double dnum1, double dnum2);
	double Sub(double dnum1, double dnum2);
	double Div(double dnum1, double dnum2);
	double Mul(double dnum1, double dnum2);
	void ShowOpCount();
};
#endif // !__CALC_H__
