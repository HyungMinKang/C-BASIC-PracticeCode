// ���ڹ迭 ����

#include <stdio.h>
#include <string.h>

int main(void)
{
	char g[] = "google";
	// char g[7] ={'g','o','o','g','l','e','\0'};
	int i, n = sizeof(g) / sizeof(char);

	puts("----------------------");
	puts(" *���ڹ迭 ����* ");
	puts("-----------------------");

	printf("%s, g= %d byte \n", g, sizeof(g) );
	puts("---------------------------");
	for (i = 0; i < n; i++)
		printf(" g[%d]= %c, &g[%d]= %d \n", i, g[i], i, &g[i]);
	puts("----------------------------");

	puts("���ڿ��� ���� NULL���ڸ� �ڵ����� �߰�");
	puts(" NULL���ڴ� ���ڿ��� ���� ����Ŵ");
	puts(" 8���� 9�� ������ ���� �ǹ���");
	puts("-----------------------------------");
	return 0; 
}