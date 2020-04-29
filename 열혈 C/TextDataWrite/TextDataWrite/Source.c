#include<stdio.h>

int main(void) 
{
	FILE* fp;
	fopen_s(&fp, "simple.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("MY NAME IS HONG \n", fp);
	fputs("YOUR NAME IS YOON \n", fp);
	fclose(fp);
	return 0;
}