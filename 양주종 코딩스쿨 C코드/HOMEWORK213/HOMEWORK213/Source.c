//비트필드- 구조체-1

#include <stdio.h>

typedef struct BIT
{
	unsigned char a : 1; // 0, 1
	signed char b : 1;// -1,0
	unsigned char c : 2; //0,1,2,3
	signed char d : 2; // -2,-1,0,1
}BIT;

int main(void)
{
	BIT bb; 

	bb.a = 0;
	bb.b = 3; //범위를 넘어섬
	bb.c = 2;
	bb.d = 8; //범위를 넘어섬

	printf("BIT= %d byte \n", sizeof(BIT));

	printf("bb.a= %d \n", bb.a);
	printf("bb.b = %d \n", bb.b);
	printf("bb.c= %d \n", bb.c);
	printf("bb.d= %d \n", bb.d);

	return 0;
}