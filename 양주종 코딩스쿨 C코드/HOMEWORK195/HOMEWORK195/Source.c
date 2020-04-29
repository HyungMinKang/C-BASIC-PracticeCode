// 기억류(storage class) register

#include <stdio.h>

int main(void) {
	auto int i;
	register int j;

	puts("--auto--");
	for (i = 0; i < 50000; i++)
	{
		printf(" C언어는 재밌다! ==> %d \n", i);
	}

	puts("--register--");
	for (j = 0; j < 50000; j++)
	{
		printf("C언어는 재밌다! ==> %d \n", j);
	}

	//printf("&i=%d, &j=%d \n", &i,&j);

	return 0;
}
