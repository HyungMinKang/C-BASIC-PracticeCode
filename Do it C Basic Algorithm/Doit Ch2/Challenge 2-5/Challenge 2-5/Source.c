#include <stdio.h>

void Desesort(int ary[], int len);

int main(void)
{
	int arr[7];
	int i;
	printf("정렬할 숫자를 입력하세요: \n");
	for (i = 0; i < 7; i++)
	{
		printf("입력: ");
		scanf_s("%d", &arr[i]);
	}

	Bubblesort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);
}

void Desesort(int ary[], int len) // 내림차순
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (ary[j] < ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}