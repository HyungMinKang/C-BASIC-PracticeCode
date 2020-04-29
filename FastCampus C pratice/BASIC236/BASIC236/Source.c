#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
	
}
int main()
{
	long long int x1, y1, x2, y2;
	long long int x3, y3, x4, y4;
	int shape=0;
	scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	
	
	
	if (x1 == x4 || x2 == x3)
	{
		if (y1 == y4 || y2 == y3)
			printf("POINT");
		else if ((y2 - y1) + (y4 - y3) > max(r2.y2 - r1.y1, r1.y2 - r2.y1))
			printf("LINE");
		else
			printf("NULL");
	}
	else if ((x2 - x1) + (x4 - x3) > max(r2.x2 - r1.x1, r1.x2 - r2.x1))
	{
		if (y1 == y4 || y2 == y3)
			printf("LINE");
		else if ((y2 - y1) + (y4 - y3) > max(r2.y2 - r1.y1, r1.y2 - r2.y1))
			printf("FACE");
		else
			printf("NULL");
	}
	else
		printf("NULL");

	


	return 0;

	
}




/*
x1 = abs(x1), x2 = abs(x2), x3 = abs(x3), x4 = abs(x4);
	y1 = abs(y1), y2 = abs(y2), y3 = abs(y3), y4 = abs(y4);*/