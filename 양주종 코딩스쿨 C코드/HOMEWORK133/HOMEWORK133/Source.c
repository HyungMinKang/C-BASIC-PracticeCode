// 증감연산자

#include <stdio.h>
int main(void)
{
	int a = 10; 
	puts(" *증감 연산자 * ");

	a = 10;
	printf(" a= %d \n", ++a);

	a = 10;
	printf(" a= %d \n", --a);

	a = 10;
	printf(" a= %d \n", a++);

	a = 10;
	printf(" a= %d \n", a--);

	puts("---------------------------------");
	puts(" 앞에서 나오면 먼저, 뒤에 나오면 나중에 ");
	puts(" 순서대로 해석하면 됩니다. ");
	puts(" ---------------------------------------");

	return 0;
}