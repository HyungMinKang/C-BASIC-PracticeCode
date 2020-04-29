// 정수배열의 개념

#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = { 100,200,300,400,500 };
	int n = sizeof(a) / sizeof(int);

	puts("-----------------");
	puts(" 정수배열의 개념");
	puts("-----------------");

	printf("sizeof(a)= %d byte, a= %d \n", sizeof(a), a);
	puts("----------------------");

	for (i = 0; i < n; i++)
		printf("a[%d]= %2d, &a[%d]= %d \n", i, a[i], i, &a[i]);
	puts("-----------------------------");

	puts(" 배열은 동일한 자료형들의 모임이다");
	puts("배열명은 시작주소를 갖는 상수이다");
	puts("----------------------------------");

	return 0; 
}