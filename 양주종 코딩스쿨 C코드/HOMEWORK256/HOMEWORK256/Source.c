// CALL BY VALUE

#include <stdio.h>

int swap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;

	printf("\n swap�� �� x= %d, y= %d \n\n", x, y);

	return x, y;
}

int main()
{
	int a = 5, b = 7;

	puts("\n CALL BY VALUE");
	printf("\n ������ a=%d, b=%d \n", a, b);
	swap(a, b);
	printf("\n ȣ���� a=%d, b=%d \n", a, b);
	return 0;
}