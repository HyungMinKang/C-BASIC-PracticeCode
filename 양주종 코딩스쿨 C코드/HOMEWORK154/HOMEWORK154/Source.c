#include <stdio.h>

int swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
	printf(" swap 함수 x = %d, y =%d \n", x, y);

	return x, y;
}

int main(void)
{
	int a = 100, b = 300;

	swap(a, b);
	
	printf(" main 함수 a= %d, b= %d,\n", a, b);
	puts(" swap 함수에서는 바뀌었지만 리턴되지 않았다");
	puts(" x와 y가 바뀐거지 a, b가 바뀌지 않았다");
	return 0;
}