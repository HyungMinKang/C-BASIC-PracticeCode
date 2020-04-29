#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int num)
{
	int i; 
	int max = a[0];
	for (i = 1; i <num; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int main(void)
{
	int i;
	int na;
	int* height;
	srand(time(NULL));
	na = 5 + rand() % 16;
	printf("사람 수: %d \n", na);
	height = calloc(na, sizeof(int));
	for (i = 0; i < na; i++)
	{
		height[i] = 100 + rand() % 90;
		printf("height[%d]= %d \n", i, height[i]);
	}

	printf("최대값: %d", maxof(height, na));
	free(height);
	return 0;

}