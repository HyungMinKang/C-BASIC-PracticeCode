// ���� ������

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
	puts(" ���� ������ \n");
	res = getMax1(20, 50);
	puts("\n if~else��");
	printf("%d %d �� ū ����: %d \n", 20, 50, res);

	res = getMax2(20, 50);
	puts("\n ���׿����� �̿�");
	printf("%d %d �� ū ����: %d \n", 20, 50, res);

	return 0; 
}