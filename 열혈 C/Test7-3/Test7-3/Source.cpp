#include <stdio.h>

int main(void)
{	
	int num=1 ;
	int result=0;
	while(num!=0)
	{	
		printf("���ڸ� �Է��ϼ���");
		scanf_s("%d", &num);
		result += num;
	}
	printf("%d", result);
	return 0;
}