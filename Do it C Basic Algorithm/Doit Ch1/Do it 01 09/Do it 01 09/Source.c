#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts("1부터 n까지의 합");
	printf("n의 값: ");
	scanf("%d", &n);
	sum = 0;
	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("%d \n", i);

	printf("1부터 %d까지의 합은 %d입니다 \n", n,sum);
	return 0;
}