#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[201];
	int rank[201];
	int i, j;
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		rank[i] = 1;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (score[i] < score[j])
				++rank[i];
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", score[i], rank[i]);
	}
	return 0;
}