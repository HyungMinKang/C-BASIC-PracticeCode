#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(void)
{
	char a[10] = "africa"; // stack - �迭 
	char* k = "korea"; // data- ������

	char* p = (char*)malloc(strlen("poland") + 1);
	strcpy(p , "poland"); // hip- �����޸� �Ҵ�

	printf("%s, �ּ� a= %d \n", a, a);
	printf("%s, �ּ� &k=%d, ��=%d \n", k, &k, k);
	printf("%s, �ּ� &p=%d, ��=%d \n", p, &p, p);

	free(p); //���� �޸�����

	return 0;
}
