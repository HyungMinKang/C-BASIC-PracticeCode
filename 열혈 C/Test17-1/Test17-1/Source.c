#include <stdio.h>


void MaxandMin(int* arr, int size, int** mxPtr, int** mnPtr)
{
	int *max, *min;
	int i;
	max=min=&arr[0];
	for (i = 0; i < size; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}	
	
	*mxPtr = max;
	*mnPtr = min;
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("정수입력 %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	MaxandMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("최대값: %d 최소값: %d \n", *maxPtr, *minPtr);
	return 0;
}