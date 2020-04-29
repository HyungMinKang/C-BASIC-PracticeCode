#include <stdio.h>

int main(void)
{
	int num = 0;
	int total = 0;
	
	printf("정수를 입력하세요(0 to quit):");
	scanf_s("%d", &num);
	total += num;
	
	while (num != 0)
	{
		printf("정수를 입력하세요(0 to quit):");
		scanf_s("%d", &num);
		total += num;

	}
	printf("총합: %d \n", total);

}