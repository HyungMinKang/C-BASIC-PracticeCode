#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void tentotwo(int n)
{	
	int d[100];
	int sav=0;
	int i=0;
	do {
		d[i] = n % 2;
		n = n / 2;
		i++;


	} while (n>0);

	--i;
	for (;i >= 0; i--)
	{
		printf("%d", d[i]);
	}
	
}


int main(void)
{
	int num;
	scanf("%d", &num);
	printf("2 ");
	tentotwo(num);
	putchar('\n');
	printf("8 %o", num);
	putchar('\n');
	printf("16 %X", num);
	return 0;
	
}