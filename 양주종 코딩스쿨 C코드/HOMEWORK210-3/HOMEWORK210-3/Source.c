#include <stdio.h>
#include <string.h>

int main(void)
{
	char title[20];
	char name[5][20];

	char* titleP = title; // 1�����迭 ������
	char(*nameP)[20] = name; //2���� �迭������

	printf("title = %d byte \n", sizeof(title));
	printf("name= %d byte \n\n", sizeof(name));

	printf("titleP = %d byte \n", sizeof(titleP));
	printf("nameP= %d byte \n", sizeof(nameP));

	return 0;
}