// float vs double 1 

#include<stdio.h>

int main(void)
{

	int i;
	float sum = 0.0;

	puts("---------------------");
	puts(" * float *");
	puts("---------------------");

	for (i = 0; i < 100; i++)
	{
		sum += 1.7f;
	}

	printf(" float sum= %f \n", sum);
	puts("---------------------");

	puts("소수점 2자리까지만 출력 ");
	printf("float sum= %.2f \n", sum);
	puts("---------------------");
	puts("169.999832 이것은 cpu의 한계이다");
	puts(" 소수점 2자리까지만 출력할 떄는 반올림하다");
	puts("---------------------");

	return 0;
}