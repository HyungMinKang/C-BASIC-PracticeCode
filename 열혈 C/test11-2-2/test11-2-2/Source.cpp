#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char voca[100];
	int idx;
	int len = 0;
	char temp;

	printf("영단어 입력:");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;

	for (idx = 0; idx < len/2 ; idx++)
	{
		temp = voca[idx];
		voca[idx] = voca[(len - idx) - 1];
		voca[(len - idx) - 1] = temp;
	}
	printf("뒤집힌 영단어: %s \n", voca);
	return 0;

}