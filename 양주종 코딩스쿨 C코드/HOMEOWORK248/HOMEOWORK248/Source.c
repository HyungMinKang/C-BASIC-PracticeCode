// C��� �Լ� ������

#include <stdio.h>

int sum1(int x)
{
	return x + x;
}

void sum2(int x, int y)
{
	printf("%d+%d=%d \n", x, y, x + y);
}

int main(void)
{
	int(*p1)(int) = sum1;  // ������(*������ ������)(�Ű�������)= �Լ��̸�
	void(*p2)(int, int) = sum2;

	puts("\n C��� �Լ� ������");

	printf("sum1 �Լ��� �ּ�=%d \n", sum1);
	printf("sum2 �Լ��� �ּ�=%d \n", sum2);
	
	puts(" \n ������ �ּҿ� �Լ��� �ּ� \n");

	printf("p1=%d, &p1=%d \n", p1, &p1);
	printf("p2=%d, &p2=%d \n", p2, &p2);

	puts(" \n �μ� 1�� �Լ� \n");

	printf(" sum1(20) = %d \n", sum1(20));
	printf(" p1(20)= %d \n", p1(20));

	puts(" \n �μ� 2�� �Լ� \n");

	sum2(10, 20);
	p2(10, 20);

	return 0;
}