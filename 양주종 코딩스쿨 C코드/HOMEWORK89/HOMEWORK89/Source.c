// 정수 정렬

#include<stdio.h>

int main(void)
{
	int arr[5] = { 7200,4500,8500,3300,2700 };
	int i, j, tmp;
	int len = sizeof(arr) / sizeof(int);
	
	puts("------------------");
	puts(" *정수 정렬* ");
	puts(" ------------------");
	
	// 원본 출력
	puts(" *원 본 출 력 * ");
	puts("---------------");
	for (i = 0; i < len; i++)
		printf("arr[%d]= %d \n", i, arr[i]);

	// 선택정렬(selection sort)
	for (i = 0; i < len- 1; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	//정렬후 출력- 올림차순
	puts("\n * 올림차순 * ");
	puts("------------------");
	for (i = 0; i < len; i++)
		printf("arr[%d]= %d \n", i, arr[i]);

	//거품정렬(bubble sort)
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp=arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	// 정렬후 출력 - 내림차순
	puts(" \n *내림차순 * ");
	puts(" -----------------");
	for (i = 0; i < len; i++)
		printf("arr[%d]= %d \n", i, arr[i]);
	puts("------------------------");

	puts(" 비교의 방향에 따라 내림차순, 오름차순 변경");
	puts(" ---------------------------------------");
	
	return 0;
}