#include <stdio.h>

int main(void)
{
	int num1=0 , num2=0 ;
	int cnt = 0;
	int sum = 0;
	
	
	printf("�� ���� ������ �Է��� ���ΰ�: \n");
	scanf_s("%d", &num1);
	
	
	while (cnt++ <num1)
	{
		printf("������ �Է��ϼ��� \n");
	scanf_s("%d", &num2);
	sum += num2; 
	}
	
	printf("��հ���: %f \n", (double)sum/num1);
	return 0;
}