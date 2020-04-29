#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("4055555555= %u \n", strtoul("4055555555", NULL, 10));
	printf("1234567890= %u \n", strtoul("1234567890", NULL, 10));
	printf("1199999999= %u \n", strtoul("1199999999", NULL, 10));
	printf("1111111111= %u \n", strtoul("1111111111", NULL, 10));
	return 0;

}
