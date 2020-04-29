#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[12][12];

int main(void)
{
	int i, j;
	int res = 3;
	for (i = 1; i <= 11; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 1; i <= 10; i++)
	{	
		res = 3;
		for (j = 1; j <= 10; j++)
		{
			if (arr[11][i] == 1)
			{
				if (arr[j][i] > 0)
				{
					res = 1;
					
				}
				else if (arr[j][i] < 0)
				{
					res = -1;
					
				}
				else if(res==3 && arr[j][i]==0)
				{
					res = 0;
				}
			}
			else
			{
				break;
			}
			
		}
		
		if (res == 0)
			printf("%d safe \n", i);
		else if (res == 1)
			printf("%d crash \n", i);
		else if (res == -1)
			printf("%d fall \n", i);
		else
			continue;
	}

	return 0;
}


/*모범코드
#include <stdio.h>

int main()
{
	int a[12][12], i, j, res ;

	for(i = 1; i <= 11; i++)
		for(j = 1; j <= 10; j++)
			scanf("%d",&a[i][j]);

	for(j = 1; j <= 10; j++)
	{
		if(a[11][j] == 0) continue;
		res = 0;
		for(i = 10; i >= 1; i--)
		{
			if(a[i][j] != 0)
			{
				res = a[i][j];
				break;
			}
		}

		if(res == 0) printf("%d safe\n", j);
		else if(res > 0) printf("%d crash\n", j);
		else printf("%d fall\n", j);
	}
}
*/