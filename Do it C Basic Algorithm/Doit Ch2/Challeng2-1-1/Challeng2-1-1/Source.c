#include <stdio.h>

void evennumber(int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);

	}
	printf("\n");
}

void oddnumber(int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);

	}
	printf("\n");
}

int main(void)
{
	int arr[10];
	int i;

	printf("�� 10���� ���� �Է� \n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf_s("%d", &arr[i]);
	}

	printf("Ȧ�� ��� : ");
	oddnumber(arr, sizeof(arr) / sizeof(int));

	printf("¦�� ��� : ");
	evennumber(arr, sizeof(arr) / sizeof(int));

	return 0;
}