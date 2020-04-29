// break문

#include <stdio.h>

int main(void)
{
	int i;
	
	puts("-----------------------");
	puts(" * continue * ");
	puts("-----------------------");

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			break;
		printf(" C언어는 재밌다. %d \n", i);
	}

	puts("---------------------------------------");
	puts(" 조건이 참이 되면 블럭을 탈출 ");
	puts(" continue문과 비교하여 이해하자 ");
	puts("---------------------------------------");
	return 0; 
}