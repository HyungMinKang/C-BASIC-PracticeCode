#include<stdio.h>

int main(void)
{
	FILE* fp;
	fopen_s(&fp, "mystory.txt", "rt");
	char str[100];

	while (fgets(str, sizeof(str), fp) != NULL)
		printf(str);
	fclose(fp);
	return 0;
}