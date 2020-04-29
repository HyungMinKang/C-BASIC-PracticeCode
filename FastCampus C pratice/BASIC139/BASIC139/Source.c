#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	int i, cnt = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 10 == 1)
			cnt++;
	}
	printf("%d", cnt);

}