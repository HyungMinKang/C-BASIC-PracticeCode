#include <stdio.h>

int main(void)
{
	double dnum1, dnum2;

	printf("두 실수를 입력하세요 \n");
	scanf_s("%lf %lf", &dnum1, &dnum2);
	printf("%f+%f=%f \n", dnum1, dnum2, dnum1 + dnum2);
	printf("%f-%f=%f\n", dnum1, dnum2, dnum1 - dnum2);
	printf("%f*%f=%f \n", dnum1, dnum2, dnum1 * dnum2);
	printf("%f/%f=%f \n", dnum1, dnum2, dnum1 / dnum2);
	return 0;
}