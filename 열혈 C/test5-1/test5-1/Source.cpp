#include <stdio.h>

int main(void)
{
	int x1, y1 ;
	int x2, y2;
	int area;
	
	printf("�»�� ��ǥ�� �Է��ϼ��� \n");
	scanf_s("%d %d", &x1, &y1);
	printf("���ϴ� ��ǥ�� �Է��ϼ��� \n");
	scanf_s("%d %d", &x2, &y2);
	area = (x2 - x1) * (y2 - y1);
	printf("������ �̷�� ���簢���� ���̴�: %d\n", area);
	return 0;
}