#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int y;  //년 - 윤년판단 필요
	int m;  //월
	int d;  //일
}Date;

Date after(Date x, int n);
Date before(Date x, int n);

static int mdays[2][13] = {
	{31,28,31,30,31,30,31,31,30,31,30,31},
{31,29,31,30,31,30,31,31,30,31,30,31} };

int isleap(int year) //윤년판단 함수
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

	printf("%d년 %d월 %d일", x.y, x.m, x.d);
}


int main(void)
{	
	Date x;
	int i, y, m, d,n;
	printf("몇 년?:");
	scanf("%d", &y);
	printf("몇 월?");
	scanf("%d", &m);
	printf("몇 일?");
	scanf("%d", &d);

	x = Dateof(y, m, d);
	printf("앞 뒤 며칠을 계산할것인가?");
	scanf("%d", &n);

	printf("Date x로부터 %d일후", n); Printresult(after(x, n)); putchar('\n');
	printf("Date x로부터 %d일전", n); Printresult(before(x, n)); putchar('\n');

	return 0;
}