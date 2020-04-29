// 문자 2차원 배열

#include<stdio.h>

int main(void)
{
	int i, n;
	char sports[5][10] = { "축 구","야 구","배 구","탁 구","농 구" };
	n = sizeof(sports) / sizeof(char[10]);
	
	puts("---------------------------");
	puts(" *문자 2차원 배열 * ");
	puts(" ---------------------------");

	printf(" sports = %d, size= %d byte \n", sports, sizeof(sports));
	puts("-------------------------------------");

	for (i = 0; i < n; i++)
		printf(" sports[%d] = %s , addr= %d \n", i, sports[i], sports[i]);

	return 0;
}