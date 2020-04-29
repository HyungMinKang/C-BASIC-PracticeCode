#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char voca[100];
	char max = 0;
	int len = 0;
	int i;

	printf("영단어를 입력하세요:");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;

	for (i = 0; i < len; i++)
	{
		if (max < voca[i])
			max = voca[i];

	}
	printf("가장 큰 아스키 코드 값의 문자: %c \n", max);
	return 0;
}


