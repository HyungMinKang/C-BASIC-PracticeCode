#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("555.5555555 그냥 출력= %lf \n", strtod("555.5555555", NULL, 10));
	printf("555.5555555 그냥 출력= %f \n", strtod("555.5555555", NULL, 10));
	printf("555.5555555 .3출력 = %.3lf \n", strtod("555.5555555", NULL, 10));
	printf("555.5555555 .1 출력= %.1lf \n", strtod("555.5555555", NULL, 10));

	return 0;
}