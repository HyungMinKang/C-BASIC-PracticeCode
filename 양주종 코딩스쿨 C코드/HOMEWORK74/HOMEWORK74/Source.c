// ����ü���� ���

#include<stdio.h>
#include<string.h>
typedef struct Lunch
{
	char menu[20]; // �޴�
	int price; // ����
}Lunch;

int main(void)
{
	Lunch lun[5];
	int i, j, n;
	Lunch tmp;
	n = sizeof(lun) / sizeof(Lunch);

	puts("------------------------");
	puts(" *����ü ���� ��� *");
	puts(" -----------------------");

	//1. �Է� 
	printf("[%d]���� ��ܸԴ� ���� �޴� �Է� \n", n);
	puts("--------------------------------------");
	for (i = 0; i < n; i++)
	{
	do 
	{
		printf("[%d]��° �޴�: ", i + 1);
		gets(lun[i].menu);
		printf(" �󸶿���: ");
		scanf_s("%d", &lun[i].price);
	} while (getchar() != '\n');
	}
	
	//2. ���� ���- �����ϰ� �ȵǸ� �Ѿ�� ������
	puts("--- �� �� �� �� ---");
	puts("  *** �� �� �� ***  ");
	puts(" -----------------------");
	for (i = 0; i < n; i++)
		printf("[%d]��  %s ==> %d�� \n", i + 1, lun[i].menu, lun[i].price);
	puts("--------------------------");

	//3. �޴��� ����
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(lun[j].menu, lun[j + 1].menu)>0)
			{
				tmp= lun[j];
				lun[j]=lun[j+1];
				lun[j+1]=tmp;
			}
		}
	}

	//4. �޴��� ���
	puts("--- �޴��� �� �� ---");
	puts("  *** �� �� �� ***  ");
	puts(" -----------------------");
	for (i = 0; i < n; i++)
		printf("[%d]��  %s ==> %d�� \n", i + 1, lun[i].menu, lun[i].price);
	puts("--------------------------");

	//5.���ݼ� ����
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

	//6. ���ݼ� ���
	puts("--- ���ݼ� �� �� ---");
	puts("  *** �� �� �� ***  ");
	puts(" -----------------------");
	for (i = 0; i < n; i++)
		printf("[%d]��  %s ==> %d�� \n", i + 1, lun[i].menu, lun[i].price);
	puts("--------------------------");

	return 0;
}