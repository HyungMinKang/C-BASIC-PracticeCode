// �������� ���� 2000~10000���̸� ���� ó��

#include<stdio.h>
int main()
{
	int salary[5];
	int i, j, tmp, n;
	n = sizeof(salary) / sizeof(int);

	puts("---------------");
	puts(" * ���� ���� * ");
	puts("----------------");

	//1. �Է�
	printf(" [%d]���� �����Է� \n", n);
	puts("-------------------------");
	for (i = 0; i < n; i++ )
	{
		do {
			printf("[%d]���� �����Է�: ", i);
			scanf_s("%d", &salary[i]);
		} while (salary[i] < 2000 || salary[i]>10000);
	}
	puts("-----------------------------------");

	//2. �������
	puts(" ** �� �� �� �� ** ");
	for (i = 0; i < n; i++)
		printf("salray[%d]= %d���� \n", i, salary[i]);
	puts("----------------------------------");

	//3 ��������(selection sort)
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (salary[i] > salary[j])
			{
				tmp = salary[i];
				salary[i] = salary[j];
				salary[j] = tmp;
			}
		}
	}

	//4 ������ ��� 
	puts(" ** �� �� �� �� �� ** ");
	for (i = 0; i < n; i++)
		printf("salray[%d]= %d���� \n", i, salary[i]);
	puts("----------------------------------");
}