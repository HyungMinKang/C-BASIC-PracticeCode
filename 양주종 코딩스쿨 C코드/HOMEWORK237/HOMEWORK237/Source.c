//문자배열의 초기화

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[8] = { 0 };
	char b[8] = "bannana";
	char c[8];

	int i;

	printf("a= %s, b=%s, c=%s \n", a, b, c);

	puts(" ARRAY a");
	for (i = 0; i < 8; i++)
	{
		printf("a[%d]= %c, %d \n", i, a[i], a[i]);
	}

	puts(" \n ARRAY b");
	for (i = 0; i < 8; i++)
	{
		printf("b[%d]=%c, %d \n", i, b[i], b[i]);
	}

	puts(" \n ARRAY c");
	for (i = 0; i < 8; i++)
	{
		printf("c[%d]= %c, %d \n", i, c[i], c[i]);
	}

	return 0;
}