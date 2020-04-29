#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{	
	int arr[51];
	int n,i,sum1=0,sum2=0;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
		sum1 = sum1 + i;

	for (i = 1; i <=n-1; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <=n-1; i++)
		sum2 = sum2 + arr[i];


	printf("%d", sum1 - sum2);
}

/*모범소스
#include <stdio.h>

int main()
{
	int n, card[55] = {0}, i, k;
	scanf("%d", &n);
	for(i = 0; i < n -1; i++)
	{
		scanf("%d", &k);
		card[k]++;
	}

	for(i = 1; i <= n; i++)
		if (card[i] == 0)
		{
			printf("%d", i);
			break;
		}
	return 0;
}
*/