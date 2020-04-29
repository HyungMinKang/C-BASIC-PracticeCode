#include<stdio.h>

typedef struct point {
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point* ptr)  // 원점대칭 함수
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPoistion(Point pos)
{
	printf("[%d %d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
	Point pos = { 7,-5 };
	ShowPoistion(pos);
	OrgSymTrans(&pos);
	ShowPoistion(pos);
	OrgSymTrans(&pos);
	ShowPoistion(pos);
	return 0; 
}