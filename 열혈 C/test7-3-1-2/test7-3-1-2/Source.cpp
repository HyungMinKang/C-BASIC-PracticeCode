#include <stdio.h>

int main(void)
{
	int num = 0;
	int total = 0;
	
	printf("������ �Է��ϼ���(0 to quit):");
	scanf_s("%d", &num);
	total += num;
	
	while (num != 0)
	{
		printf("������ �Է��ϼ���(0 to quit):");
		scanf_s("%d", &num);
		total += num;

	}
	printf("����: %d \n", total);

}