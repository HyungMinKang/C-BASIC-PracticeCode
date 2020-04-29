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

void Showmenu(void); // 메뉴출력  -- 단순 프린트 문
void InputInfo(Person*, int*); // 이름과 전화번호 입력  -- 저장된 숫자 증가 + 정보입력  
void DeleteInfo(Person*, int*); // 이름을 입력하여 정보 삭제 
void SearchInfo(Person*, int); // 이름을 입력하여 정보 탐색 -> 전체정보중 일치하는 Person[i] 존재시 참 반환 없을시 return -1
void PrintAll(Person*, int); // 전체 출력  -- person[0] ~ person[int] 출력
void LoadData(Person*, int*); // 저장된 데이터 로드 -- 파일 입출력 rt
void SaveData(Person*, int); // 프로그램 종료후 정보 저장 -- 파일 입출력 wt

int main(void)
{
	int choice;
	Person perArr[MAX_PERSON_NUM];	// Data 저장을 위한 배열
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
	printf(" 삭제한 사용자: "); scanf_s("%s", sizeof(name), name);
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
	printf(" 찾을 사용자: "); scanf("%s",name);
	for (i = 0; i < pnum; i++)
	{
		if (strcmp(parr[i].name, name) == 0)
		{
			printf(" NAME: %s \n", parr[i].name);
			printf(" TEL: %s \n", parr[i].phone);
			return;
		}

		
	}
	printf(" 해당 사용자는 존재하지 않습니다");

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