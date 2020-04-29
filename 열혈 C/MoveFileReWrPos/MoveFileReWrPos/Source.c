#include<stdio.h>

int main(void)
{
	/* 파일 생성 및 내용입력*/
	FILE* fp; 
	fopen_s(&fp, "text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/*파일 개방*/
	fopen_s(&fp, "text.txt", "rt");

	/*SEEK_END TEST*/
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	/*SEEK_SET test*/
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/*SEEK_CUR test*/
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}