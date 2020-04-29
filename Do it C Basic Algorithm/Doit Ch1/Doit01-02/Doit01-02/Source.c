#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c)
{
	int max = a; /*�ִ밪*/
	if (b > max)max = b;
	if (c > max)max = c;
	return max;
}

int main(void)
{
	printf("max3(%d, %d, %d)= %d\n", 3, 2, 1, max(3, 2, 1));
	printf("max3(%d, %d, %d)= %d\n", 3, 2, 2, max(3, 2, 2));
	printf("max3(%d, %d, %d)= %d\n", 3, 1, 2, max(3, 1, 2));
	printf("max3(%d, %d, %d)= %d\n", 3, 2, 3, max(3, 2, 3));
	printf("max3(%d, %d, %d)= %d\n", 2, 1, 3, max(2, 1, 3));
	printf("max3(%d, %d, %d)= %d\n", 3, 3, 2, max(3, 3, 2));
	printf("max3(%d, %d, %d)= %d\n", 3, 3, 3, max(3, 3, 3));
	printf("max3(%d, %d, %d)= %d\n", 2, 2, 3, max(2, 2, 3));
	printf("max3(%d, %d, %d)= %d\n", 2, 3, 1, max(2, 3, 1));
	printf("max3(%d, %d, %d)= %d\n", 1, 3, 2, max(1, 3, 2));
	printf("max3(%d, %d, %d)= %d\n", 2, 3, 3, max(2, 3, 3));
	printf("max3(%d, %d, %d)= %d\n", 1, 2, 3, max(1, 2, 3));

	return 0;




}