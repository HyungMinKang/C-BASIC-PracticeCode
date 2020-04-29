#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) // 배열의 최대값 구하는 함수  const의 의미 배열요소 읽기만 가능== 배열값변경 불가
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max)max = a[i];
	return max;
}

int main(void)
{
	int i; 
	int* height; // 포인터=배열  height=배열명= 배열의 첫인덱스값
	int number; // 배열의 요소 개수
	printf("사람수");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요 \n", number);
	for (i = 0; i < number; i++)
	{
		printf("height[%d]: ", i);
		scanf("%d", height+i);
	}

	printf("최대값은 %d입니다 \n", maxof(height, number));
	free(height);
	return 0;
}