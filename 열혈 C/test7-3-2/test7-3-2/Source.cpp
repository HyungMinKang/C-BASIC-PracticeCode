#include <stdio.h>

int main(void)
{
	int num = 0, total = 0;
	
	do
	{
		total += num;
		num = num + 2;
		
		
	
	}while (num <=100);
		
		printf("гу: %d", total);
		return 0;
}