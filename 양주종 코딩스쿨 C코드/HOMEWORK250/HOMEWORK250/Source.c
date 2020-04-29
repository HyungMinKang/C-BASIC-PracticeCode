// C언어 이중 포인터

#include <stdio.h>

int main(void)
{
	int a = 50;
	int* p = &a;
	int** pp = &p;

	puts(" C언어 이중 포인터 \n");

	printf("a=%d &a=%d \n", a, &a);
	printf("p=%d &p=%d \n", p, &p);
	printf("pp=%d &pp=%d \n", pp, &pp);
	printf("a=%d, *p=%d, **pp=%d \n", a, *p, **pp);

	return 0;
}