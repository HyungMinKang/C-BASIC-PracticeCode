//fgets 함수

#include <stdio.h>

int main(void)
{
	char it[20];

	fprintf(stdout, "근무하고 싶은 it회사는: ");
	fgets(it, sizeof(it), stdin);
	it[strlen(it) - 1] = 0;
	fprintf(stdout, " %s 저도요 \n", it);

	return 0;
}