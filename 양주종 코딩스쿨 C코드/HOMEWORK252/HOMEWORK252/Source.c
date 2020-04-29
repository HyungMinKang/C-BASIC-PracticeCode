// 삼항 연산자

#include <stdio.h>

int getMax1(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int getMax2(int x, int y)
{
	return x>y ? x : y;
}

int main(void)
{
	int res;
	puts(" 삼항 연산자 \n");
	res = getMax1(20, 50);
	puts("\n if~else문");
	printf("%d %d 중 큰 값은: %d \n", 20, 50, res);

	res = getMax2(20, 50);
	puts("\n 삼항연산자 이용");
	printf("%d %d 중 큰 값은: %d \n", 20, 50, res);

	return 0; 
}