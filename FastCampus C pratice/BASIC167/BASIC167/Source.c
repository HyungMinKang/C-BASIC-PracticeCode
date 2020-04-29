#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char str[90];
	gets(str);
	int len = strlen(str);
	int cnt[123] = { 0 };
	for (int i = 0; i < len; i++)
	{
		if (97 <= str[i] && str[i] <= 122)
		{	
			int index =str[i];
			cnt[str[i]]++;
		}
	}
	for (int i = 97; i <= 122; i++)
	{
		printf("%c:%d\n", i, cnt[i]);
	}

	return 0;
}