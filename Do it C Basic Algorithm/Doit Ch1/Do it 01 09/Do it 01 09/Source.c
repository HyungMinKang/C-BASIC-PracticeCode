#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts("1���� n������ ��");
	printf("n�� ��: ");
	scanf("%d", &n);
	sum = 0;
	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("%d \n", i);

	printf("1���� %d������ ���� %d�Դϴ� \n", n,sum);
	return 0;
}