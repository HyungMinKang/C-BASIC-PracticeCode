#include <stdio.h>

typedef struct point {

	int xpos;
	int ypos;
}Point;

typedef struct rectangle {

	Point one;
	Point two;
	double square;
}Rectangle;

void ShowsquareInfo(Rectangle* rptr) // 4�� ���� ���
{
	printf("�»��: [%d , %d] \n", (rptr->one).xpos, (rptr->one).ypos);
	printf("���ϴ�: [%d , %d] \n", (rptr->one).xpos, (rptr->two).ypos);
	printf("����: [%d , %d] \n", (rptr->two).xpos, (rptr->one).ypos);
	printf("���ϴ�: [%d , %d] \n", (rptr->two).xpos, (rptr->two).ypos);
}

double HowBigSquare(Rectangle* rptr) // ���� ���
{
	(rptr->square) = ((rptr->one).xpos - (rptr->two).xpos) * ((rptr->one).ypos - (rptr->two).ypos);
	if ((rptr->square) < 0)
		return (rptr->square) * -1;
	else
		return (rptr->square);
}

int main(void)
{
	Rectangle r1= { {0,0},{100,100}, };
	ShowsquareInfo(&r1);
	printf("����: %f",HowBigSquare(&r1));
	return 0;

}