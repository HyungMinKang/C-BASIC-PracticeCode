#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Bookinf
{
	char writer[20];
	char name[20];
	int page;
}Bi;

int main(void)
{
	Bi * arr[3];
	int i;
	puts("�������� �Է�");
	for (i = 0; i < 3; i++)
	{
		Bi * pBook = (Bi*)malloc(sizeof(Bi) * 1);
		do {
			printf("����: ");
			gets(pBook -> writer);
			printf("����: ");
			gets(pBook ->name);
			printf("��������: ");
			scanf_s("%d", &(pBook->page));
		} while (getchar() != '\n');
		arr[i] = pBook;
	}


	puts(" �������� ���");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("����: %s \n", arr[i]->writer);
		printf("�̸�: %s \n", arr[i]->name);
		printf("��������:%d \n", arr[i]->page);
	}

	for (i = 0; i < 3; i++)	// �Ҵ�� �޸� ����.
	{
		free(arr[i]);

	}

	return 0;
}