#include <stdio.h>
#include <string.h>

typedef struct Bookinf
{
	char writer[20];
	char name[20];
	int page;
}Bi;


		
int main(void)
{
	Bi arr[3];
	int i;
	puts("�������� �Է�");
	for (i = 0; i < 3; i++)
	{
	do {
		printf("����: ");
		gets(arr[i].writer);
		printf("����: ");
		gets(arr[i].name);
		printf("��������: ");
		scanf_s("%d", &arr[i].page);
	} while (getchar() != '\n');
	}


	puts(" �������� ���");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("����: %s \n", arr[i].writer);
		printf("�̸�: %s \n", arr[i].name);
		printf("��������:%d \n", arr[i].page);
	}

	return 0;
}