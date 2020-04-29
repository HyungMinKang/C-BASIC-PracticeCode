// ���� ����

#include<stdio.h>

int main(void)
{
	int arr[5] = { 7200,4500,8500,3300,2700 };
	int i, j, tmp;
	int len = sizeof(arr) / sizeof(int);
	
	puts("------------------");
	puts(" *���� ����* ");
	puts(" ------------------");
	
	// ���� ���
	puts(" *�� �� �� �� * ");
	puts("---------------");
	for (i = 0; i < len; i++)
		printf("arr[%d]= %d \n", i, arr[i]);

	// ��������(selection sort)
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
	
	//������ ���- �ø�����
	puts("\n * �ø����� * ");
	puts("------------------");
	for (i = 0; i < len; i++)
		printf("arr[%d]= %d \n", i, arr[i]);

	//��ǰ����(bubble sort)
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

	// ������ ��� - ��������
	puts(" \n *�������� * ");
	puts(" -----------------");
	for (i = 0; i < len; i++)
		printf("arr[%d]= %d \n", i, arr[i]);
	puts("------------------------");

	puts(" ���� ���⿡ ���� ��������, �������� ����");
	puts(" ---------------------------------------");
	
	return 0;
}