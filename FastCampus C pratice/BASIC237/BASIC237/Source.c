#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int life[26][26];
int arr[26][26];
int main(void)
{
	int i, j;
	int cnt;


	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 25; j++)
		{
			scanf("%d", &arr[i][j]);
			life[i][j] = arr[i][j];
		}
	}

	
	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 25; j++)
		{	
			cnt = 0;
			if (life[i][j] == 0)
			{
				if (arr[i - 1][j - 1] == 1 && i - 1 >= 0 && j - 1 >= 0 && i - 1 < 25 && j - 1 < 25)
					cnt++;
				if (arr[i - 1][j] == 1 && i - 1 >= 0 && j>= 0 && i - 1 < 25 && j< 25)
					cnt++;
				if (arr[i - 1][j+1] == 1 && i - 1 >= 0 && j+1 >= 0 && i - 1 < 25 && j +1 < 25)
					cnt++;
				if (arr[i][j - 1] == 1 && i >= 0 && j - 1 >= 0 && i< 25 && j - 1 < 25)
					cnt++;
				if (arr[i][j +1] == 1 && i>= 0 && j + 1 >= 0 && i < 25 && j +1 < 25)
					cnt++;
				if (arr[i +1][j - 1] == 1 && i +1 >= 0 && j - 1 >= 0 && i+1 < 25 && j - 1 < 25)
					cnt++;
				if (arr[i +1][j] == 1 && i+1 >= 0 && j>= 0 && i < 25 && j  < 25)
					cnt++;
				if (arr[i+1][j+1] == 1 && i +1 >= 0 && j +1 >= 0 && i +1 < 25 && j +1 < 25)
					cnt++;
				if (cnt == 3)
					life[i][j] = 1;
				else
					life[i][j] = 0;
			}
			if (arr[i][j] == 1)
			{
				if (arr[i - 1][j - 1] == 1 && i - 1 >= 0 && j - 1 >= 0 && i - 1 < 25 && j - 1 < 25)
					cnt++;
				if (arr[i - 1][j] == 1 && i - 1 >= 0 && j >= 0 && i - 1 < 25 && j < 25)
					cnt++;
				if (arr[i - 1][j + 1] == 1 && i - 1 >= 0 && j + 1 >= 0 && i - 1 < 25 && j + 1 < 25)
					cnt++;
				if (arr[i][j - 1] == 1 && i >= 0 && j - 1 >= 0 && i < 25 && j - 1 < 25)
					cnt++;
				if (arr[i][j + 1] == 1 && i >= 0 && j + 1 >= 0 && i < 25 && j + 1 < 25)
					cnt++;
				if (arr[i + 1][j - 1] == 1 && i + 1 >= 0 && j - 1 >= 0 && i + 1 < 25 && j - 1 < 25)
					cnt++;
				if (arr[i + 1][j] == 1 && i + 1 >= 0 && j >= 0 && i + 1 < 25 && j < 25)
					cnt++;
				if (arr[i + 1][j + 1] == 1 && i + 1 >= 0 && j + 1 >= 0 && i + 1 < 25 && j + 1 < 25)
					cnt++;
				if (cnt >= 4 || cnt <= 1)
					life[i][j] = 0;
				if (cnt == 2 || cnt == 3)
					life[i][j] = 1;
			}
		}
	}


	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 25; j++)
		{
			printf("%d ", life[i][j]);
		}
		printf("\n");
	}
}


/* 모범코드
#include <stdio.h>

int a[27][27], b[27][27], i, j;

int main()
{
	for(i = 1; i <= 25; i++)
		for(j = 1 ;j <= 25; j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = 0;
		}

	for(i = 1; i <= 25; i++, puts(""))
		for(j = 1; j <= 25; j++)
		{
			b[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j-1] + a[i][j+1] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
			if(a[i][j] == 0)
				b[i][j] = b[i][j] == 3 ? 1 : 0;
			else
				b[i][j] = (b[i][j] >= 4 || b[i][j] <= 1) ? 0 : 1;
			printf("%d ", b[i][j]);
		}
	return 0;
}
*/