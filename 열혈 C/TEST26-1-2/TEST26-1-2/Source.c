#include <stdio.h>
#define PI 3.1415
#define AREA(r) ((r)*(r)*PI)

int main(void)
{
	double rad;
	printf("���� ������ �Է�: ");
	scanf_s("%lf", &rad);
	printf("���� ����: %g", AREA(rad));
	return 0;
}