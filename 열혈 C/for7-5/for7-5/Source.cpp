#include <stdio.h>

int main(void)
{
	int input=0 ,innum=0;
	int sum=0;
	int num=0;

	printf("�� ���� ������ �Է��� ���ΰ�:");
	scanf_s("%d", &input);
	
	for (num = 0; num < input; num++)
	{
		printf("������ �Է��ϼ���:");
		scanf_s("%d", &innum);
		sum += innum;
	}
	
	printf("���: %f", (double)sum/input);
	return 0;
}