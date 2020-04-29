#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h";
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

void InsertionSort(int a[], int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int tmp = a[i];
		for (j = i; j >= 0 && a[j - 1] > tmp; j--)
		{
			a[j - 1] = a[j];
		}
		a[j] = tmp;
	}
}

int med(int a, int b, int c)
{
	if (a >= b)
	{
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	}
	else if (a > c)
	{
		return a;
	}
	else if (b > c)
	{
		return c;
	}
	else
	{
		return b;
	}
}


void Quickort(int a[], int left, int right)
{

	IntStack lstack; // 나눌 첫요소 인덱스 스텍
	IntStack rstack; // 나눌 끝요소 인덱스 스텍

	Initialize(&lstack, right - left + 1);
	Initialize(&rstack, right - left + 1);

	Push(&lstack, left);
	Push(&rstack, right);


	while (!Isempty(&lstack))
	{
		int pl = (Pop(&lstack, &left), left);
		int pr = (Pop(&rstack, &right), right);
		int x = med3(a[pl], a[(pl + pr) / 2], a[pr]);


		if (right - left < 9) //요소가 9이하이면 삽입정렬 수행
		{
			InsertionSort(&a[left], right - left + 1);
		}
		else {
			do {
				while (a[pl] < x) pl++;
				while (a[pr] > x)pr--;
				if (pl <= pr)
				{
					swap(int, a[pl], a[pr]);
					pl++;
					pr--;
				}
			} while (pl <= pr);
		}
		if (pr - left < right - pl) {  //원래 순서 왼 푸쉬 오 푸쉬   왼쪽요소가 오른쪽보다 적다면  오 푸쉬 왼 푸쉬 순서 바꿈)
			swap(int, pl, left);
			swap(int, pr, right);
		}

		if (left < pr)
		{
			Push(&lstack, left);
			Push(&rstack, pr);
		}
		if (pl < right)
		{
			Push(&lstack, pl);
			Push(&rstack, pr);
		}

	}
	Terminate(&lstack);
	Terminate(&rstack);
}


int main(void)
{
	int i, nx;
	int* x;
	puts("퀵정렬 재귀적구현");
	printf("요소개수:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	Quickort(x, 0, nx - 1);
	puts("오름차순 정렬결과 출력");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: %d\n", i, x[i]);
	}
	free(x);
	return 0;
}