#include <stdio.h>

int main(void)
{
	int x1, y1 ;
	int x2, y2;
	int area;
	
	printf("좌상단 좌표를 입력하세요 \n");
	scanf_s("%d %d", &x1, &y1);
	printf("우하단 좌표를 입력하세요 \n");
	scanf_s("%d %d", &x2, &y2);
	area = (x2 - x1) * (y2 - y1);
	printf("두점이 이루는 직사각형의 넓이는: %d\n", area);
	return 0;
}