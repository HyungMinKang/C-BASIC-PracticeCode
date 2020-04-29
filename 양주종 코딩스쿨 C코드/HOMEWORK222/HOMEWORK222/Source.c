//파일 읽어오기 fopen 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c=0;
	FILE* fp;
	fp = fopen("a.txt", "r");

	if (fp == NULL)
	{
		puts("file open error");
		return -1;
	}

	while (c != EOF)
	{
		c = fgetc(fp);
		putchar(c);
	}

	fclose(fp);

	return 0;
}