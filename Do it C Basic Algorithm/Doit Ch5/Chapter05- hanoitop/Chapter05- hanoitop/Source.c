#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void move(int no, int x, int y)
{
	if (no > 1)
		move(no - 1, x, 6 - x - y);
	printf("원반[%d]를 %d기둥에서 %d기둥으로 옮김\n", no, x, y);

	if (no > 1)
		move(no - 1, 6 - x - y, y);
}

int main(void)
{
	int n; // 원반개수
	printf("하노이의 탑\n 원반개수: ");
	scanf("%d", &n);

	move(n, 1, 3);

	return 0;
}