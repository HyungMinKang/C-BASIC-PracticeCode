#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(a[0]);
	printf("�迭 a�� ��� ������ %d�Դϴ� \n", n);

	for (i = 0; i < n; i++)
		printf("a[%d]=%d\n", i, a[i]);

	return 0;
}