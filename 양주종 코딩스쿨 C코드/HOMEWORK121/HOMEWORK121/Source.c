// continue 문

#include<stdio.h>

int main(void)
{
	int i;
	puts("----------------------");
	puts(" continue 문 ");
	puts(" -----------------------");

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;
		printf(" C언어는 재밌다. : %d \n", i);
	}

	puts("---------------------------------");
	puts(" 조건이 참이 되면 건너뛴다. skip");
	puts(" break문과 비교하며 이해");
	puts("--------------------------------");

	return 0;
}