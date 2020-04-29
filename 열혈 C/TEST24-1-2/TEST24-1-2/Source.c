#include <stdio.h>

int main(void)
{
	FILE* fp;
	fopen_s(&fp, "mystory.txt", "at");

	if (fp == NULL) {
		puts("추가 입력실패:");
		return -1;
	}
	fputs("#즐겨먹는 음식: 짬뽕 탕수육 \n", fp);
	fputs("#취미: 축구 \n", fp);

	fclose(fp);
	return 0;

}