#include <stdio.h>

int main(void)
{
	int input=1;
	int total=0 ;
	
	for (; input != 0;)
	{
		printf("������ �Է��ϼ���: \n");
		scanf_s("%d", &input);
		total += input;
	}
	printf("��: %d", total);
	return 0;
}