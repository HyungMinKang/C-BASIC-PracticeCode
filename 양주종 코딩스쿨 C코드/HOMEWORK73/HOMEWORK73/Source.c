// ����ü����

#include<stdio.h>
#include<string.h>
typedef struct Lunch 
{
	char menu[20]; // �޴�
	int price; // ����
}Lunch;

int main(void)
{
	Lunch lun[5] = { {"�ܹ���", 4000}, {"������", 7000}, {"�����", 6000},{"���", 8000},{"���α�", 5000} };
	int i, j, n;
	Lunch tmp;
	n = sizeof(lun) / sizeof(Lunch);

	puts("---------------------");
	puts(" ����ü ����");
	puts("---------------------");

	//1. ���� ��� 
	puts(" ---�� �� �� �� ---");
	puts("   ***�� �� ��***");
	puts("-----------------------");
	for (i = 0; i < n; i++)
		printf("[%d]�� %s ==> %d�� \n", i + 1, lun[i].menu, lun[i].price);
	puts("--------------------------- \n ");

	//2. �޴��� ����
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(lun[j].menu, lun[j + 1].menu) > 0)
			{
				tmp = lun[j];
				lun[j] = lun[j + 1];
				lun[j + 1] = tmp;
			}
		}
	}

	//3. �޴��� ���
	puts(" --- �޴��� ��� ---");
	puts("    *** �� �� �� ***  ");
	puts("-------------------------");
	for (i = 0; i < n; i++)
		printf("[%d]�� %s ==> %d�� \n", i + 1, lun[i].menu, lun[i].price);
	puts("------------------------- \n");

	//4. ���ݼ� ����
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (lun[j].price > lun[j + 1].price)
			{
				tmp = lun[j];
				lun[j] = lun[j + 1];
				lun[j + 1] = tmp;
			}
		}
	}

	//5. ���ݼ� ���
	puts("---- ���ݼ� ��� ----");
	puts("  *** �� �� �� ***");
	puts("-----------------------");
	for (i = 0; i < n; i++)
		printf("[%d]�� %s ==> %d�� \n", i + 1, lun[i].menu, lun[i].price);
	puts("------------------------ \n");

	puts(" ���� �ڵ带 �ܿ���� ���� ������");
	puts(" ---------------------------------");

	return 0;
}