#include <stdio.h>

int main(void)
{	
	int num=1 ;
	int result=0;
	while(num!=0)
	{	
		printf("숫자를 입력하세요");
		scanf_s("%d", &num);
		result += num;
	}
	printf("%d", result);
	return 0;
}