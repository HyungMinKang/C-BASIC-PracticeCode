//형변환(cast)연산자 
#include <stdio.h>

int main(void)
{
	int a = 10;
	double d = 3.15;

	puts("\n 형변환(cast)연산자 \n");

	printf(" a=%d \n", a);
	printf(" d=%.2f \n\n", d);

	a = 55.6; //자동형 변환
	d = 80;

	printf(" a=%d \n", a);
	printf(" d=%.2f \n\n", d);

	a = (int)55.6;
	d = (double)80;

	printf(" a=%d \n", a);
	printf(" d=%.2f \n\n", d);
	
	return 0;


}