//파일에 출력하기 fopen함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;
	fp = fopen("test.txt", "w");

	if (fp == NULL)
	{
		puts("FILE OPEN ERROR");
		return 1; // 비정상적 종료
	}

	fputs("즐거운 금요일이다 \n", stdout);
	fputs("2016년 여름은 뜨거웠다 \n", stdout);

	fputs("즐거운 금요일이다 \n", fp);
	fputs("2016년 여름은 뜨거웠다 \n", fp);

	fclose(fp);

	return 0;
}