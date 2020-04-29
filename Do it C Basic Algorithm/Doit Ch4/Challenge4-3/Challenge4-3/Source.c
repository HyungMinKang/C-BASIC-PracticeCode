#include<stdio.h>

typedef struct ComplexNumber
{
	double n;
	double i;
}Complex;

void ComplexADD(Complex num1, Complex num2)
{
	double result1, result2;
	result1 = num1.n + num2.n;
	result2 = num1.i + num2.i;
	printf(" 합의결과] 실수: %f , 허수: %f ", result1, result2);
}

void ComplexMul(Complex num1, Complex num2)
{
	double result1, result2;
	result1 = ((num1.n * num2.n) - (num1.i * num2.i));
	result2 = ((num1.i * num2.n) + (num1.n * num2.i));
	printf(" 곱의결과] 실수: %f , 허수: %f ", result1, result2);
}

int main()
{
	Complex num1;
	Complex num2;
	printf(" 복소수 입력1 [실수 허수]: ");
	scanf_s("%lf %lf", &num1.n, &num1.i);
	printf(" 복소수 입력2 [실수 허수]: ");
	scanf_s("%lf %lf", &num2.n, &num2.i);

	ComplexADD(num1, num2);
	ComplexMul(num1, num2);

	return 0;
}