#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x,i;
	int res=1;
	printf("���� �Է�:");
	scanf("%d", &x);
	for (i = x; i > 0; i--)
	{
		res = res * i;
	}
	printf("%d factorial= %d\n", x, res);
	return 0;
}