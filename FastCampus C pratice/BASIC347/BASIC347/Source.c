#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int discount[7];
int dk[3];
int main(void)
{
	int* dis;
	int* money;
	int n, i,j,k, max = -1;
	int doublecount = 0;
	scanf("%d", &n);
	dis = (int*)calloc(n, sizeof(int));
	money = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{	
		int discount[7] = {0,};
		int dk[3] = { 0, };
		doublecount = 0;
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &dis[j]);
			discount[dis[j]]++;
			if (dis[j] > max)
			{
				max = dis[j];
			}
		}
		for (k = 1; k <= 6; k++)
		{
			if (discount[k] == 4)
			{
				money[i] = 50000 + (k) * 5000;
				break;
			}
			else if (discount[k] == 3)
			{
				money[i] = 10000 + (k) * 1000;
				break;
			}
			else if (discount[k] == 2)
			{
				doublecount++;
				dk[doublecount] = k;
			}
			
		}
		if (doublecount == 0 && money[i] == 0)
		{
			money[i] = max * 100;
		}
		else if (doublecount == 1)
		{
			money[i] = 1000 + dk[1] * 100;
		}
		else if (doublecount == 2)
		{
			money[i] = 2000 + dk[1] * 500 + dk[2] * 500;
		}
	
	}
	
	max = -1;
	for (i = 0; i < n; i++)
	{
		if (money[i] > max)
			max = money[i];
	}
	printf("%d", max);
	free(dis);
	free(money);
	
	return 0;
}