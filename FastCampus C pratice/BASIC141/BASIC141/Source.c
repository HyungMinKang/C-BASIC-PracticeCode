#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	int c[10];
	int i = 0;
	double res = 0;
	double profit = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	res = a;
	for (i = 0; i < b; i++)
	{
		scanf("%d", &c[i]);
	}

	for (i = 0; i < b; i++)
	{
		res = res + (res * c[i] / 100);

	}

	profit = (double)(res -a);
	printf("%.0f \n", profit);

	if (profit > 0)
		printf("good");
	else if (profit == 0)
		printf("same");
	else
		printf("bad");

	return 0;
}

// 모범답안
#include <stdio.h>

int main()
{
	float a, sa, b, y;
	int x;
	scanf("%f %f", &a, &b);

	sa = a;
	for (x = 0; x < b; x++)
	{
		scanf("%f", &y);
		a *= (100 + y) / 100;
	}

	if (a - sa >= 0.5 || a - sa <= -0.5)
	{
		printf("%.0f\n", a - sa);
		if (a - sa > 0)
			printf("good");
		else
			printf("bad");
	}
	else
	{
		printf("0\n");
		printf("same");
	}
	return 0;
}