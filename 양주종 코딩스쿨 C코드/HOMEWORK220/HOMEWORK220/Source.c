// gets 함수 

#include <stdio.h>

int main(void)
{
	char it[20];
	printf(" 근무하고 싶은 it회사는: ");
	gets(it);

	printf("\n %s 저도요 \n", it);

	return 0;
}