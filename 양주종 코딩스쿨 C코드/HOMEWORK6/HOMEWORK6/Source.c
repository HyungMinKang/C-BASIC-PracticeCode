//c����ڵ� :: printf �Ǽ� ���

#include<stdio.h>

int main(void)
{

	puts(" *�Ǽ� ��� *");
	printf(" %f, %lf, %.2lf \n", 4.23456, 6.56789, 7.77777);

	printf("%%f�� float(4byte) ���·� ����϶�. \n");
	printf("�Ǽ��� �⺻ ����� �Ҽ������� 6�ڸ� ����\n");
	printf("%%lf��long float(8byte) ���·� ���\n");
	printf("%%.2lf�� �Ҽ������� 2�ڸ��� ���\n");

	return 0;
}