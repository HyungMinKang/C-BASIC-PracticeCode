// 문자배열 개념

#include<stdio.h>
#include<string.h>

int main(void)
{
	char g[] = "google";
	int i, n = sizeof(g) / sizeof(char);

	puts("--------------------");
	puts(" *문자배열 개념* ");
	puts("--------------------");

	printf("g= %s, %%d=%d \n", g, g);
	puts("-----------------------");
	for (i = 0; i < n; i++)
		printf("g[%d]=%c, &g[%d]=%d \n", i, g[i], i, &g[i]);
	puts("--------------------------");

	puts(" %s는 string(문자열), %d는 주소출력");
	puts("---------------------------------");
	return 0;
}