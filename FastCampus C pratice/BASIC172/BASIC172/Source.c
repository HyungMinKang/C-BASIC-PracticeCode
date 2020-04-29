#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int k,n,arr[1000];

int main()
{	
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{	
		printf("%d:", arr[i]);
		for (int j = 0; j < n; j++)
		{	
			if (i != j)
			{
				if (arr[i] < arr[j])
					printf("< ");
				else if (arr[i] == arr[j])
					printf("= ");
				else
					printf("> ");
			}
		}
		printf("\n");
	}

	return 0;
}

/*모범코드

#include <stdio.h>

int main()
{
	int i,j,tmp;
	int n;

	scanf("%d", &n);
	int com[n];

	for(i=1 ; i<=n ;i++)
	{
		scanf("%d", &com[i]);
	}
	for (i=1 ; i<= n ;i++)
	{
		printf("%d: ", i);
		for (j=1 ; j<=n ; j++)
		{
			if (i==j)
				continue;
			if (com[i] > com[j])
				printf("> ");
			else if (com[i] < com[j])
				printf("< ");
			else
				printf("= ");
		}
		printf("\n");
	}
	return 0;
}
*/