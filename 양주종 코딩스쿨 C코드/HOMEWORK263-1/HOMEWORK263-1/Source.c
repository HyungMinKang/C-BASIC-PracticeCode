// ������ �����ֱ�

static int gg = 1000;
#include <stdio.h>

void fun(int a)
{
	auto int x = a;
	static int y;
	y = a;

	printf(" auto x= %d, &x=%d \n", x, &x);
	printf(" static y=%d, &y=%d \n\n", x, &y);
}

int main(void)
{
	puts("\n ������ �����ֱ� \n");
	
	fun(10);
	fun(20);
	fun(30);

	printf("�������� gg= %d, &gg=%d \n\n", gg, &gg);

	return 0;
}