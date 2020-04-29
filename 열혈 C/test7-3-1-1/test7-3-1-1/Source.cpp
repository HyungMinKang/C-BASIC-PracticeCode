#include <stdio.h>

int main(void)
{
	int num=1 ;
	int total = 0;
	
	while(num!=0)
	{
		printf("정수를 입력하세요(0 to quit):");
		scanf_s("%d", &num);
		total += num;
		
	}
	printf("합계: %d \n", total);
	return 0;
}
