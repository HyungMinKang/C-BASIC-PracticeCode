// ���ڿ��� ��

#include <stdio.h>
#include <string.h>

int main()
{
	puts("-----------------");
	puts(" *���ڿ� ũ���* ");
	puts(" ------------------");

	printf(" AA:AA= %d ���� \n", strcmp("AA", "AA"));
	printf(" AB:AA= %d ũ�� \n", strcmp("AB", "AA"));
	printf(" AA:AB= %d �۴� \n", strcmp("AA", "AB"));

	printf("ö�� : ö�� = %d \n", strcmp("ö��", "ö��"));
	printf("�Ҷ� : �� = %d \n", strcmp("�Ҷ�", "��"));
	puts("---------------------");

	puts(" ���ڿ��� �ּҴ�. ũ�⸦ ���� ������, �����Լ��� �ִ�");
	puts(" ������ 0, ������ ũ�� 1, ������ -1");
	puts("------------------------------------------------------");

	return 0; 
}