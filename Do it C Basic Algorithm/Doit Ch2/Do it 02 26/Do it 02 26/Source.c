#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int y;
	int m;
	int d;
}Date;

int isleap(int y)
{
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

static int mday[2][12] = {
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },			
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};
static char* w[7] = { "MONDAY","TUSEDAY","WEDSNDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY" };

Date Dateof(int y, int m, int d)
{
	Date temp;
	temp.y = y;
	temp.m = m;
	temp.d = d;
	return temp;
}
Date After(Date x, int n);
Date Before(Date x, int n);
Date After(Date x, int n)
{
	if (n < 0)
		return Before(x, -n);
	
	x.d += n;
	while (x.d > mday[isleap(x.y)][x.m - 1])
	{
		x.d -= mday[isleap(x.y)][x.m - 1];
		if (++x.m > 12)
		{
			x.y++;
			x.m = 1;
		}
	}
	return x;


}

Date Before(Date x, int n)
{
	if (n < 0)
		return After(x, -n);

	x.d -= n;
	while (x.d < 1)
	{	
		if (--x.m < 1)
		{
			--x.y;
			x.m = 12;
		}
		x.d+= mday[isleap(x.y)][x.m - 1];
	}
	return x;
}

void showdate(Date x)
{
	int y = x.y;
	int m = x.m;
	int d = x.d;
	printf("%04d�� %02d�� %02d��(%s)", x.y, x.m, x.d);
}

int main(void)
{
	int n;
	int y, m, d;
	char* w;
	Date x;
	
	printf("��¥�� �Է��ϼ���.\n");
	printf("�� : "); scanf("%d", &y);
	printf("�� : "); scanf("%d", &m);
	printf("�� : "); scanf("%d", &d);
	printf("����: ", gets(w));
	x=Dateof(y, m, d);
	
	printf("��ĥ �� / ���� ��¥�� ���ұ��? : ");
	scanf("%d", &n);
	
	printf("%d �� ���� ��¥ : ", n); showdate(After(x, n)); putchar('\n');
	printf("%d �� ���� ��¥ : ", n); showdate(Before(x, n)); putchar('\n');
	
	return 0;
	
}