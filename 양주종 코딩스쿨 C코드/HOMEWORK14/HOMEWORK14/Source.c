// c����ڵ� :: ���� ����� 1

#include<stdio.h>

int main(void)
{
	char btype;
	puts("------------------");
	puts(" ** ���� ����� ** ");
	puts("------------------");

	printf("�������� �Է��ϼ��� : ");
	// scanf_s("%c", &btype, 1);
	
	btype=getchar();

	printf(" ����� �������� %c���Դϴ�. \n", btype);
	puts("-------------------------------");
	puts("���� �Է��� scanf(%c), getchar �ΰ��� ����� �ֽ��ϴ�");
	puts("---------------------------------------");

	return 0;

}