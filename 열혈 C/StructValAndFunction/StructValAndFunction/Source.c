#include<stdio.h>

typedef struct point {
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos)
{
	printf("[%d %d]", pos.xpos, pos.ypos);
}

Point GetcurrentPoistion(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf_s("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	Point curPos = GetcurrentPoistion();
	ShowPosition(curPos);
	return 0;
}