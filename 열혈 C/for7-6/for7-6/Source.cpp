#include <stdio.h>

int main(void)
{
	int num = 0;
	int input=1;
	int total = 0;

	for (num = 0; num > 5; num++)
	{
		for (; input >1;)
		
			printf("������ �Է��ϼ���:");
			scanf_s("%d", &input);
		
		
		total += input;
		
	}
	printf("��: %d", total);
	return 0;

}