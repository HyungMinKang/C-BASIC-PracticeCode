#include <stdio.h>

int main(void)
{
	int arr[5];
	int max, min, sum = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]: ", i);
		scanf_s("%d", &arr[i]);
	}

	sum = max = min = arr[0];
	for (i = 1; i < 5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf(" �Էµ� ���� �߿��� �ִ밪: %d", max);
	printf("�Էµ� �����߿��� �ּڰ�: %d", min);
	printf("�Էµ� ������ ����: %d", sum);
	return 0;
}