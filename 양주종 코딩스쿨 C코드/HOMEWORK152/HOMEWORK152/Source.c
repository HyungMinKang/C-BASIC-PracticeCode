#include <stdio.h>
void sub1(void)
{
	puts(" sub1 �Լ� => �μ��� ����, ���ϰ��� ����. \n");
}

void sub2(int x)
{
	printf(" sub2�Լ� x = %d \n", x);
	puts(" ���� �� �� �μ��� ����, ���ϰ� ���� \n");
}

void sub3(int x, int y)
{
	int sum = x + y;
	printf(" sub3�Լ� %d + %d = %d \n", x, y, sum);
	puts(" ���� �� �� �μ��� ����, �� ���� ���ߴ� \n");
}

int main(void)
{
	sub1();
	sub2(100);
	sub3(200, 300);

	puts(" �����μ��� �������� �ִ�");
	puts(" �� ���� ���� �ִ�");
	puts(" ������ �ϼ��� �ִ�");
	puts(" void�� �����μ��� ���ٴ� �ǹ�");

	return 0;
}