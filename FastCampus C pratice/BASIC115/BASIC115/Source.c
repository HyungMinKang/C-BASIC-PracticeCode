#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a + b <= c)
		printf("�ﰢ���ƴ�");
	
	else if (a == b && b == c)
		printf("���ﰢ��");
	else if (a == b || b == c || a == c)
		printf("�̵�ﰢ��");
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
		printf("�����ﰢ��");

	else
		printf("�ﰢ��");


}