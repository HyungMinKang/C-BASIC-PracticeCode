#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int y;  //�� - �����Ǵ� �ʿ�
	int m;  //��
	int d;  //��
}Date;

Date after(Date x, int n);
Date before(Date x, int n);

static int mdays[2][13] = {
	{31,28,31,30,31,30,31,31,30,31,30,31},
{31,29,31,30,31,30,31,31,30,31,30,31} };

int isleap(int year) //�����Ǵ� �Լ�
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

Date Dateof(int y, int m, int d)
{
	Date temp;
	temp.y = y;
	temp.m = m;
	temp.d = d;

	return temp;
}

Date after(Date x, int n)
{
	if (n < 0)
		return before(x, -n);

	x.d += n;
	while (x.d > mdays[isleap(x.y)][x.m-1])
	{
		x.d -= mdays[isleap(x.y)][x.m - 1];
		
		if (++x.m > 12)
		{
			x.m = 1;
			x.y++;
		}
	}
	return x;
}



Date before(Date x, int n)
{
	if (n < 0)
		return after(x, -n);

	x.d -= n;
	while (x .d< 1)
	{
		
		
		if (--x.m < 1)
		{
			x.m = 12;
			x.y--;
		}
		x.d += mdays[isleap(x.y)][x.m-1];
	}
	return x;
}

void Printresult(Date x)
{
	int y = x.y;
	int m = x.m;
	int d = x.d;

	printf("%d�� %d�� %d��", x.y, x.m, x.d);
}


int main(void)
{	
	Date x;
	int i, y, m, d,n;
	printf("�� ��?:");
	scanf("%d", &y);
	printf("�� ��?");
	scanf("%d", &m);
	printf("�� ��?");
	scanf("%d", &d);

	x = Dateof(y, m, d);
	printf("�� �� ��ĥ�� ����Ұ��ΰ�?");
	scanf("%d", &n);

	printf("Date x�κ��� %d����", n); Printresult(after(x, n)); putchar('\n');
	printf("Date x�κ��� %d����", n); Printresult(before(x, n)); putchar('\n');

	return 0;
}