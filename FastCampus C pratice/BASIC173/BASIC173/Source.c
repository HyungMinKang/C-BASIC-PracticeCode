#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	gets(a);
	int n = strlen(a);
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 'l' && a[i + 1] == 'o' && a[i + 2] == 'v' && a[i + 3] == 'e')
			cnt++;
	}

	printf("%d", cnt);
}