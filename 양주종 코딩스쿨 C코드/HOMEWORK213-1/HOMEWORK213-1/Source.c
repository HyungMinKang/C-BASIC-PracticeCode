// 비트필드 구조체-2

#include <stdio.h>

typedef struct BIT
{
	unsigned char a : 1; // 0,1
	signed char b : 1; // -1,0
	unsigned char c : 2; // 0,1,2,3
	signed char d : 2; // -2,-1,0,1

}BIT;

typedef struct BIT2
{
	unsigned char a;
	signed char b;
	unsigned char c;
	signed char d;
}BIT2;

int main(void)
{
	printf("BIT= %d byte \n", sizeof(BIT));
	printf("BIT2= %d byte \n", sizeof(BIT2));

	return 0;
}