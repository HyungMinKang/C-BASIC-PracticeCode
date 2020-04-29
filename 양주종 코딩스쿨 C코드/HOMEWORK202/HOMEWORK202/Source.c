// 정수배열과 포인터의 크기 

#include <stdio.h>

int main(void)
{
	int a[5] = { 10,20,30,40,50 };
	int* p = a;

	printf("int a[5], sizeof(a) ==> %d byte \n", sizeof(a));
	printf("int *p, sizeof(p) ==> %d byte \n", sizeof(p));

	return 0;
}