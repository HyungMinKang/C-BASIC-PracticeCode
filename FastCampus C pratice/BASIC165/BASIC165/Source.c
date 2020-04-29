#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100001];
	int cnt1 = 0, cnt2 = 0;
	
	gets(str);
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '(')
			cnt1++;
		else
			cnt2++;
	}

	printf("%d %d", cnt1, cnt2);

	return 0;
}