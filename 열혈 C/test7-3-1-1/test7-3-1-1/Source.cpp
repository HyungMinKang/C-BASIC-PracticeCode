#include <stdio.h>

int main(void)
{
	int num=1 ;
	int total = 0;
	
	while(num!=0)
	{
		printf("������ �Է��ϼ���(0 to quit):");
		scanf_s("%d", &num);
		total += num;
		
	}
	printf("�հ�: %d \n", total);
	return 0;
}
