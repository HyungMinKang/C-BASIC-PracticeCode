#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int y, m, d;
	scanf("%d %d %d", &y, &m, &d);
	if ((((y + m + d)/100) % 10) % 2 == 0)
		printf("대박");
	else
		printf("그럭저럭");

	return 0;
}