#include <stdio.h>

int main(void)
{	
	int i , num;
	int k = 1;
	printf("��� n �Է�: ");
	scanf_s("%d", &num);
	
	if (num == 0)
		printf("�����ϴ� k�� �����ϴ�");
	
	
	for (i = 0; k*2 <= num; i++)
	{
		k = k * 2;

	}
	printf(" ������ �����ϴ� k�� �ִ� ��: %d", i);
	return 0;

}