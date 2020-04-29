#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point* ptr1, Point* ptr2)
{
	Point temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
}

void Showpoint(Point pos)
{
	printf("[%d %d]", pos.xpos, pos.ypos);
}


int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	SwapPoint(&pos1, &pos2);
	Showpoint(pos1);
	Showpoint(pos2);
	return 0;
}