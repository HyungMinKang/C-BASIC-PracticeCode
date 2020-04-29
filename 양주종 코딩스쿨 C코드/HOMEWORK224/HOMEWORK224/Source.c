//fseek ÇÔ¼ö
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp;
	fp = fopen("alpha.txt", "w");
	char c = 0;
	int i;

	if (fp == NULL)
	{
		puts("FILE OPEN ERROR");
		return 1;
	}

	for (i = 65; i <= 90; i++)
	{
		fputc(i, fp);
	}

	fclose(fp);

	fp = fopen("alpha.txt", "r");

	//fseek(fp,3,SEEK_SET);
	fseek(fp,-3,SEEK_END);

	while (c != EOF)
	{
		c = fgetc(fp);
		fputc(c, stdout);
	}

	fclose(fp);

	return 0;
}