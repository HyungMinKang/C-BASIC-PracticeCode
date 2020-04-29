// 문자배열의 저장상태

#include <stdio.h>
int main(void)
{
	char a[] = "apple";
	char b[6] = { 'a','p','p','l','e','\0' };

	int i;

	puts("a 배열");
	for (i = 0; i < 6; i++)
	{
		printf("a[%d]=%c, 번지=%d \n", i, a[i], &a[i]);
	}

	puts("\n b배열");
	for (i = 0; i < 6; i++)
	{
		printf("b[%d]=%c, 번지=%d \n", i, b[i], &b[i]);
	}

	return 0;
}