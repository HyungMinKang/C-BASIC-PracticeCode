#include <stdio.h>

int main(void)
{
	int num1 ;
	int i = 0;
	printf("����� ���ڸ� �Է��ϼ���:");
	scanf_s("%d", &num1);
	
	
	while (i< num1)
	{
		printf("Hello world! %d \n", i);
		i++;
	}
	return 0;
}