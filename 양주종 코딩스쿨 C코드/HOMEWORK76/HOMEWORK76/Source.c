// ����ü �� ����

#include <stdio.h>
#include <string.h>
typedef struct Lunch
{
	char menu[20]; // �޴�
	int price; //����

}Lunch;

int main(void)
{
	Lunch lun1 = { "�ܹ���", 4000 }, lun2 = { "���",8000 };
	Lunch tmp;

	puts("----------------");
	puts(" ����ü ������");
	puts("----------------");

	puts(" *** �� �� �� *** ");
	puts("--------------------");
	printf("lun1: %s ==> %d�� \n", lun1.menu, lun1.price);
	printf("lun2: %s ==> %d�� \n", lun2.menu, lun2.price);
	puts("---------------------");

	strcpy_s(lun1.menu, sizeof(lun1.menu), "������");
	lun2.price = 9900;

	puts(" *** �� �� �� *** ");
	puts("--------------------");
	printf("lun1: %s ==> %d�� \n", lun1.menu, lun1.price);
	printf("lun2: %s ==> %d�� \n", lun2.menu, lun2.price);
	puts("--------------------");

	puts(" ����ü�±�ȯ�� ����� ������ �ٸ���");
	puts("--------------------");
	return 0;
}