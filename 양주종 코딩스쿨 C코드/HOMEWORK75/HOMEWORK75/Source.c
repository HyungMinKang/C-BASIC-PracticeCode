// ����ü �� ����

#include <stdio.h>
#include <string.h>
typedef struct Lunch
{
	char menu[20]; // �޴�
	int price; // ����
}Lunch;

int main()
{
	Lunch lun1 = { "�ܹ���", 4000 }, lun2 = { "���", 8000 };
	Lunch tmp;

	puts("-------------------");
	puts(" *����ü �±�ȯ * ");
	puts(" ------------------");

	puts(" *** �� �� �� *** ");
	puts("------------------------------");
	printf(" lun1: %s ==> %d�� \n", lun1.menu, lun1.price);
	printf(" lun2: %s ==> %d�� \n", lun2.menu, lun2.price);
	puts("-------------------- \n");

	tmp = lun1;
	lun1 = lun2;
	lun2 = tmp;

	puts(" *** �� ȯ �� *** ");
	puts("------------------------------");
	printf(" lun1: %s ==> %d�� \n", lun1.menu, lun1.price);
	printf(" lun2: %s ==> %d�� \n", lun2.menu, lun2.price);
	puts("-------------------- \n");

	puts("����ü �±�ȯ�� ���� �±�ȯ�� ����");
	puts("-----------------------------");

	return 0;

}