#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void move(int no, int x, int y)
{
	char name[] = { 'A','B','C' };
	if (no > 1)
		move(no - 1, x, 6 - x - y);
	printf("원반[%d]를 %c기둥에서 %c기둥으로 옮김\n", no, name[x-1], name[y-1]);

	if (no > 1)
		move(no - 1, x, 6 - x - y);
}

int main(void)
{
	int n;
	printf("하노이탑\n 원반개수:");
	scanf("%d", &n);
	move(n, 1, 3);
	return 0;
}