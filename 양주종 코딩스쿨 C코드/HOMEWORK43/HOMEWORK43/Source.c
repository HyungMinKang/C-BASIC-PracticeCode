// byte�� ũ�� 1

#include<stdio.h>

int main(void)
{
	int i, base_number, index_number, res = 1;

	puts("---------------------");
	puts(" *����Ʈ�� ũ��*");
	puts("---------------------");

	printf("�ؼ��� �Է��ϼ���: ");
	scanf_s("%d", &base_number);

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &index_number);

	for (i = 0; i < index_number; i++)
		res *= base_number;
	
	puts("---------------------");
	printf(" %d^ %d = %u \n", base_number, index_number, res);
	puts("---------------------");

	puts("2^8 �� 1byte");
	puts("2^16�� 2byte");
	puts("2^24�� 3byte");
	puts("2^32�� 4byte");
	puts("---------------------");
	puts("���α׷� �����ؼ� ���� ���� �������");
	puts("---------------------");

	return 0;
}