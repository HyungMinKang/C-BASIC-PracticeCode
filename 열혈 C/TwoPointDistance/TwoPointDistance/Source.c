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

	/*�� ������ �Ÿ���� ����*/
	distance = sqrt((double)(power(pos1.xpos,pos2.xpos) + power(pos1.ypos,pos2.ypos)));

	printf("�� ���� �Ÿ��� %g�Դϴ� \n", distance);
	return 0;

}