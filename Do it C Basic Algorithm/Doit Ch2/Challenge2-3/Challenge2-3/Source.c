#include <stdio.h>

int main (void )
{
	int arr[10];
	int i, num;
	int start = 0, end = 9;
	printf("��10���� �����Է� \n:");
	for (i = 0; i < 10; i++)
	{
		printf("�Է� :");
		scanf_s("%d", &num);
		
		if (num % 2 == 0)
		{
			arr[end] = num;
			end--;
		}
		else if (num % 2 == 1)
		{
			arr[start] = num;
			start++;
		}
	}
	printf("�迭 ����� ��� : ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
	return 0;
}