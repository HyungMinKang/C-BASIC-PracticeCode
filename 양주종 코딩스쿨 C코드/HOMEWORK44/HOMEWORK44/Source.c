// byte�� ũ��2 

#include<stdio.h>

int main(void)
{
	int i, base_number, index_number;
	__int64 res = 1;

	puts("---------------------");
	puts(" *����Ʈ�� ũ�� *");
	puts("---------------------");

	printf(" �ؼ��� �Է��ϼ���: ");
	scanf_s("%d", &base_number);

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &index_number);

	for (i = 0; i < index_number; i++)
		res *= base_number;

	puts("---------------------");
	printf(" %d^%d= %I64d \n", base_number, index_number, res);
	puts("---------------------");

	puts("2^10 �� 1K byte");
	puts("2^20 �� 1M byte");
	puts("2^30 �� 1G byte");
	puts("2^40 �� 1T byte");
	puts("---------------------");
	puts("���α׷� �����ؼ� ���� ���� �������");
	puts("---------------------");

	return 0;
}