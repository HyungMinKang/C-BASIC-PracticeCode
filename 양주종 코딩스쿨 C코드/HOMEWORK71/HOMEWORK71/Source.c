// ����ü �迭 �ʱ�ȭ
#include <stdio.h>
#include<string.h>
typedef struct Lunch
{
	char menu[20]; // �޴�
	int price; //����
}Lunch;

int main(void)
{
	Lunch lun[5] = { {"�ܹ���", 4000}, {"������", 7000}, {"�����",6000}, {"���" ,8000},
	{"���α�", 5000} };
	int i, n;
	n = sizeof(lun) / sizeof(Lunch);

	puts("---------------------");
	puts(" *����ü �迭�� �ʱ�ȭ ");
	puts(" ---------------------");

	puts("  ** �� �� �� **");
	puts("-----------------------------");
	for (i = 0; i < n; i++)
		printf(" [%d]�� %s ==> %d�� \n", i + 1, lun[i].menu, lun[i].price);
	puts("----------------------------");

	puts("����ü�� ������ ���̸� ����ü �迭");
	puts(" --------------------------------");

	return 0;
}