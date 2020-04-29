// void pointer

#include <stdio.h>

int main(void)
{
	int a = 100;
	char b = 'M';
	double d = 1.34;

	int* ap = &a;

	//ap=&b; 

	puts("\n void pointer \n");
	printf("a= %3d, &a= %d \n", a, &a);
	printf("b= %3c, &b= %d \n", b, &b);
	printf("c=%.1f, &d=%d \n", d, &d);

	printf("*ap= %3d, ap=%d, &ap=%d \n\n", *ap, ap, &ap);

	return 0;
}