#include <stdio.h>
#define PI 3.1415
#define AREA(r) ((r)*(r)*PI)

int main(void)
{
	double rad;
	printf("원의 반지름 입력: ");
	scanf_s("%lf", &rad);
	printf("원의 넓이: %g", AREA(rad));
	return 0;
}