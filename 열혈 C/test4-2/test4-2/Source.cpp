#include <stdio.h>

int main(void)
{
	int num = 3; // 00000000 00000000 00000000 00000011
	num = num << 3;
	num = num >> 2;
	printf("������: %d \n", num);
	
	return 0;


}