#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(void)
{
	char a[10] = "africa"; // stack - 배열 
	char* k = "korea"; // data- 포인터

	char* p = (char*)malloc(strlen("poland") + 1);
	strcpy(p , "poland"); // hip- 동적메모리 할당

	printf("%s, 주소 a= %d \n", a, a);
	printf("%s, 주소 &k=%d, 값=%d \n", k, &k, k);
	printf("%s, 주소 &p=%d, 값=%d \n", p, &p, p);

	free(p); //동적 메모리해제

	return 0;
}
