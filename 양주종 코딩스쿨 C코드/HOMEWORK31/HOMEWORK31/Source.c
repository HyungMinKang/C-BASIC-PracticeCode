// 자동형 변환- 실수

#include <stdio.h>

int main(void)
{

	double a = 35.678;
	double b = 45;

	puts("-----------------------");
	puts(" *자동형 변환- 실수 *");
	puts("-----------------------");

	printf("a=%lf, b=%lf \n", a, b);
	printf("a=%.1lf, b=%.2lf \n", a, b);
	puts("-----------------------");

	puts("45는 자동으로 double 형으로 바뀝니다");
	puts("-----------------------");

	return 0;
}