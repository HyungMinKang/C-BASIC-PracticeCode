// ���ڹ迭 ����

#include<stdio.h>
#include<string.h>

int main(void)
{
	char g[] = "google";
	int i, n = sizeof(g) / sizeof(char);

	puts("--------------------");
	puts(" *���ڹ迭 ����* ");
	puts("--------------------");

	printf("g= %s, %%d=%d \n", g, g);
	puts("-----------------------");
	for (i = 0; i < n; i++)
		printf("g[%d]=%c, &g[%d]=%d \n", i, g[i], i, &g[i]);
	puts("--------------------------");

	puts(" %s�� string(���ڿ�), %d�� �ּ����");
	puts("---------------------------------");
	return 0;
}