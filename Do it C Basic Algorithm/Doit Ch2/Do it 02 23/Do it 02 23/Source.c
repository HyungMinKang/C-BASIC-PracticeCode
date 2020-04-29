#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mday[][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},
{31,29,31,30,31,30,31,31,30,31,30,31} };

/*윤년 판단*/
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int dayofyear(int y, int m, int d)
{	
	int n = m;
	int res = 0;
	while (n > 0)
	{
		if (n == m)
			res += d;
		else
		{
			res+=mday[isleap(y)][n-1];
		}
		n--;

	}
	return res;
}

int main(void)
{
	int year, month, day;
	int retry;
	do {
		printf("년: "); scanf("%d", &year);
		printf("월: "); scanf("%d", &month);
		printf("일: "); scanf("%d", &day);
		printf("%d년의 %d일쨰 입니다 \n", year, dayofyear(year, month, day));
		printf("다시 할까요?(1----예/0----아니요): ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}