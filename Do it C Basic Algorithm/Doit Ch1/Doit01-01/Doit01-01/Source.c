/* �� ���� ���� �Է��ϰ� �ִ��� ���մϴ�*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, c;
	int max; // �ִ밪
	printf("�� ������ �ִ��� ���մϴ� \n");
	printf("a�� �� : "); scanf("%d", &a);
	printf("b�� �� : "); scanf("%d", &b);
	printf("c�� �� : "); scanf("%d", &c);

	//�ִ밪 ���ϱ�
	max = a;
	if (b > max)max = b;
	if (c > max)max = c; 
	// �ִ밪�� ���ؼ� max�� ����

	printf("�ִ밪�� %d �Դϴ� \n", max);
	
	return 0;
}