#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, c, tmp;
	int arr[100] = { 0 };
	int board[10][10] = { 0 };
	scanf("%d %d", &n, &c);

	for (int i = 1; i <= n; i++)  // 데이터 입력
	{
		scanf("%d", &arr[i]);

	}

	for (int i = 0; i < n ; i++)  //데이터 정렬
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] >= arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	for (int i = 1; i <= n; i++)  
	{
		printf("%d ", arr[i]);
		
		if (i % c == 0)
		{
			printf("\n");
		}
	}

	return 0;
}


/*모범코드
#include <stdio.h>

int main()
{
	int a[100];
	int i, j, t, n, k;

	scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++)
		scanf("%d",&a[i]);

	for(i = 0; i < n-1; i++)
		for(j = i+1; j < n; j++)
			if(a[i]>a[j])
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}

	for(i = 1; i <= n; i++) {
		printf("%d ", a[i-1]);
		if(i%k==0) printf("\n");
	}
}

*/