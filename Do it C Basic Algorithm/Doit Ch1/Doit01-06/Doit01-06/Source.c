/* �� ������ ���� �Է��ϰ� �߾Ӱ��� ���մϴ�*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int med(int a, int b, int c)
{
	if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;

	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

int main(void)
{
	int a, b, c;
	printf("�� ������ �߾Ӱ��� ���մϴ�");
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);

	printf("�߾Ӱ�: %d \n", med(a, b, c));

	return 0;
}