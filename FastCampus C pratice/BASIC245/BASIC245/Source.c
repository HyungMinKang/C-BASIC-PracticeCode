#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[4500001], b[100010] = { -1 }, count[100010];
int main()
{
	int i, n,c=0;
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		c = a[i];
		if (b[c] != c && count[c]==0)
		{
			b[c] = c;
			count[c]++;
		}
		else if (b[c] == c &&count[c]!=0)
		{
			count[c]++;
		}


	}

	for (i = 0; i <1000010; i++)
	{
		if(b[i]==i &&count[i]==1)
			printf("%d ", b[i]);
		else if (b[i] == i && count[i] > 1)
		{
			while (count[i] != 0)
			{
				printf("%d ", b[i]);
				count[i]--;
			}
		}
	}

	return 0;
}