#include <stdio.h>
#pragma warning(disable: 4996)
typedef struct student
{
	char name[20]; //�л��̸�
	char stdnum[20]; //�л���ȣ
	char school[20]; //�б� �̸�
	char major[20]; //���� ����
	int year; // �г�
}Student;

void ShowStudnetInfo(Student* sptr)
{
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ������ȣ: %s \n", sptr->stdnum);
	printf("�б� �̸�: %s \n", sptr->school);
	printf("���� ����: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);
	printf("\n");
}

int main(void)
{
	Student arr[7];
	int i;

	for (i = 0; i <7 ; i++)
	{
		printf("�̸�: "); scanf("%s", arr[i].name);
		printf("��ȣ: "); scanf("%s", arr[i].stdnum);
		printf("�б�: "); scanf("%s", arr[i].school);
		printf("����: "); scanf("%s", arr[i].major);
		printf("�г�: "); scanf_s("%d", &arr[i].year);
		printf("\n");
	}
	
	
	
	for (i = 0; i < 7; i++)
		ShowStudnetInfo(&arr[i]);
	
	return 0;
}