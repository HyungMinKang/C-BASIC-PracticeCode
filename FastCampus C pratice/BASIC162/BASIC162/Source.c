#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int  rotate(int* arr, int n)
{
	int tmp[1000];
	int save = arr[0];
	int i;
	for (i = 1; i < n; i++)
	{
		tmp[i - 1] = arr[i];
	}

	for (i = 0; i <= n-1; i++)
	{
		if (i == n - 1)
		{
			arr[n - 1] = save;
		}

		else
		{
			arr[i] = tmp[i];
		}
	}


	return *arr;
}

void output(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[1000];
	int n, i, tmp;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	output(arr, n);
	
	for (i = 1; i < n; i++)
	{
		rotate(arr, n);
		output(arr, n);
		
	}
}

/*모범코드

#include <stdio.h>

int main()
{
	int a[1001];
	int n, i, j, g;
	scanf("%d",&n);

	for (i=0; i<n; i++)
		scanf("%d ",&a[i]);

	for (i=0; i<n; i++)
	{
		for (j=i , g=1 ; g<=n; j++,g++)
		{

			if(j==n) j=0;

			printf("%d ",a[j]);
		}
		printf("\n");
	}
}
*/