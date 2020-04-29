#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

#define NAME_LEN	20
#define TEL_LEN		20
#define MAX_PERSON_NUM		100

typedef struct Person {
	char name[NAME_LEN];
	char phone[TEL_LEN];
}Person;

void Showmenu(void); // �޴����  -- �ܼ� ����Ʈ ��
void InputInfo(Person*, int*); // �̸��� ��ȭ��ȣ �Է�  -- ����� ���� ���� + �����Է�  
void DeleteInfo(Person*, int*); // �̸��� �Է��Ͽ� ���� ���� 
void SearchInfo(Person*, int); // �̸��� �Է��Ͽ� ���� Ž�� -> ��ü������ ��ġ�ϴ� Person[i] ����� �� ��ȯ ������ return -1
void PrintAll(Person*, int); // ��ü ���  -- person[0] ~ person[int] ���
void LoadData(Person*, int*); // ����� ������ �ε� -- ���� ����� rt
void SaveData(Person*, int); // ���α׷� ������ ���� ���� -- ���� ����� wt

int main(void)
{
	int choice;
	Person perArr[MAX_PERSON_NUM];	// Data ������ ���� �迭
	int perNum = 0;
	LoadData(perArr, &perNum);


	while (1)
	{
		Showmenu();
		printf("Choose the item: \n");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			InputInfo(perArr, &perNum);
			break;
		case 2:
			DeleteInfo(perArr, &perNum);
			break;
		case 3:
			SearchInfo(perArr, perNum);
			break;
		case 4:
			PrintAll(perArr, perNum);
			break;
		case 5:
			SaveData(perArr, perNum);
			return 0;
		default:
			printf("choose unknown selection \n");
			break;
		}


	}
	return 0;
}

void Showmenu()
{
	puts(" *******  MENU ******");
	puts("			1. Insert");
	puts("			2. Delete");
	puts("			3. Search");
	puts("			4. PrintAll");
	puts("			5. Exit");
}

void InputInfo(Person* parr, int* pnum)
{
	char name[NAME_LEN], phone[TEL_LEN];

	printf(" [INSERT] \n");
	printf(" input name: "); scanf("%s", &name);
	printf(" input phnumber: "); scanf("%s", &phone);

	strcpy_s(parr[*pnum].name, sizeof(name), name);
	strcpy_s(parr[*pnum].phone, sizeof(phone),phone);
	(*pnum)++;

	printf("--------> Data Inserted......\n");
}

void DeleteInfo(Person* parr, int* pnum)
{	
	char name[NAME_LEN], phone[TEL_LEN];
	int i = 0, j;
	printf("[DELTET]");
	printf(" ������ �����: "); scanf_s("%s", sizeof(name), name);
	for (i = 0; i < (*pnum); i++)
	{
		if (strcmp(parr[i].name, name) == 0)
		{
			for (j = i + 1; j < (*pnum); j++)
			{
				strcpy_s(parr[j - 1].name, sizeof(name), parr[j].name);
				strcpy_s(parr[j - 1].name, sizeof(phone), parr[j].phone);
			}
			(*pnum)--;
			return;
		}
	}
	
}

void SearchInfo(Person* parr, int pnum)
{
	char name[NAME_LEN];
	int i = 0, j;
	printf("[SEARCH] \n");
	printf(" ã�� �����: "); scanf("%s",name);
	for (i = 0; i < pnum; i++)
	{
		if (strcmp(parr[i].name, name) == 0)
		{
			printf(" NAME: %s \n", parr[i].name);
			printf(" TEL: %s \n", parr[i].phone);
			return;
		}

		
	}
	printf(" �ش� ����ڴ� �������� �ʽ��ϴ�");

}

void PrintAll(Person* parr, int pnum)
{
	char name[NAME_LEN], phone[TEL_LEN];
	int i = 0;
	for (i = 0; i < pnum; i++)
	{
		printf("NAME: %s \t", parr[i].name);
		printf("PHONE: %s \n", parr[i].phone);
	}

}

void LoadData(Person* parr, int* pnum)		//data Load
{
	FILE* file = fopen("data.dat", "rt");
	if (file == NULL)
	{
		return;
	}

	while (1)
	{
		fscanf(file, "%s %s", parr[*pnum].name, parr[*pnum].phone);
		if (feof(file) != 0)
			break;
		(*pnum)++;
	}
}

void SaveData(Person* parr, int num)		//data store
{
	int i;

	FILE* file = fopen("data.dat", "wt");
	if (file == NULL)
	{
		printf("file open error!\n");
		return;
	}

	for (i = 0; i < num; i++)
		fprintf(file, "%s %s ", parr[i].name, parr[i].phone);
}