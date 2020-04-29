#include <stdio.h>
#include <string.h>

int main(void) {

	char a[20];

	memset(a, 'T', 19);
	a[19] = '\0';

	printf(" a= %s \n", a);

	return 0;
}