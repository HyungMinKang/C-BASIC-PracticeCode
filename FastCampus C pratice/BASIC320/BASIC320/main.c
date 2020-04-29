#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "IntStack.h"

int main(void)
{
	CharStack s;
	if (Initialize(&s, 300) == -1)
	{
		puts("스택 생성에 실패했습니다");
		return 1;
	}

	int n, i;
	int cnt = 0;
	char num[201];
	char res[300];
	char input;
	char* x;
	scanf("%d", &n);
	scanf("%s", &num);
	int len = strlen(num);
	for (i = 0; i < len - 1; i++)
	{
		Push(&s, num[i]);
	}

	for (i = 0; i < len - 1; i++)
	{
		++cnt;
		if (cnt > 3)
		{
			res[i] = ',';
			cnt = 0;
			continue;
		}
		Pop(&s, &x);
		res[i] = x;
	}
	
	int len2 = strlen(res);
	
	for (i = len2 - 1; i >= 0; i--)
	{
		printf("%c", res[i]);
	}

	return 0;

}
	



















