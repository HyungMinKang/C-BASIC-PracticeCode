#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count[1001];

int main(void)
{
	int i;
	int a[10];
	int sum = 0;
	int max = -1;
	int maxcount = 0;
	int most = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > max)
			max = a[i];
		sum += a[i];
		count[a[i]]++;
	}
	printf("%d\n", sum / 10);

	for (i = 0; i <=max; i++)
	{
		if (count[i] > maxcount)
		{
			maxcount = count[i];
			most = i;
		}
	}
	printf("%d", most);
}