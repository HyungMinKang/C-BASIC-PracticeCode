#include<stdio.h>
#include<math.h>

struct point
{
	int xpos;
	int ypos;
};

int power(num1, num2)
{
	return (num1 - num2) * (num1 - num2);
}

int main(void)
{
	struct point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf_s("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf_s("%d %d", &pos2.xpos, &pos2.ypos);

	/*두 점간의 거리계산 공식*/
	distance = sqrt((double)(power(pos1.xpos,pos2.xpos) + power(pos1.ypos,pos2.ypos)));

	printf("두 점의 거리는 %g입니다 \n", distance);
	return 0;

}