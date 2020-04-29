#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define swap(type,x,y) do{type t=x; x=y; y=t;} while(0)

void shuffle(int a[], int n)
{	
	int i;
	srand(time(NULL));
	for (i = n-1; i >0; i--)
	{
		int j = rand() % (i + 1);
		if (i != j)
			swap(int,a[i], a[j]);
		
	}
}


int main()
{
	int i, n;
	int* a;
	printf("배열요소의 수:");
	scanf("%d", &n);
	a = calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
	}
	

	for (i = 0; i < n; i++)
	{
		printf("a[%d]: %d\n", i, a[i]);
	}

	shuffle(a, n);
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]: %d\n", i, a[i]);
	}

	free(a);
	return 0;
}