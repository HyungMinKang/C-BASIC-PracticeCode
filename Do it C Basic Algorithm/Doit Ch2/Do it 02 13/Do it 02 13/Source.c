#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y; y=t;}while(0)

void showarray(int a[], int num)
{
	int i;
	for (i = 0; i < num; i++)
		printf("%d ", a[i]);
}


void ary_reverse(int a[], int num)
{
	int i;
	for (i = 0; i < num/2; i++)
	{
		showarray(a, num);
		swap(int, a[i], a[num - i - 1]);
		printf("\n a[%d]와 a[%d]를 교환합니다\n", i, num - i - 1);
		showarray(a, num);
	}
	puts("\n 역순정렬을 종료합니다");
}

int main(void)
{
	int i;
	int na;
	int* a;
	printf("배열요소 개수: ");
	scanf("%d", &na);
	a = calloc(na, sizeof(int));
	for (i = 0; i < na; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	ary_reverse(a, na);


	free(a);


	return 0;
}