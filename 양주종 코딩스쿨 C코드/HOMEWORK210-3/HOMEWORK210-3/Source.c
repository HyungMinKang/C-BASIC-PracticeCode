#include <stdio.h>
#include <string.h>

int main(void)
{
	char title[20];
	char name[5][20];

	char* titleP = title; // 1차원배열 포인터
	char(*nameP)[20] = name; //2차원 배열포인터

	printf("title = %d byte \n", sizeof(title));
	printf("name= %d byte \n\n", sizeof(name));

	printf("titleP = %d byte \n", sizeof(titleP));
	printf("nameP= %d byte \n", sizeof(nameP));

	return 0;
}