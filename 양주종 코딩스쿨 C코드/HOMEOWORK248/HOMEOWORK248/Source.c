// C언어 함수 포인터

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
	int(*p1)(int) = sum1;  // 리턴형(*포인터 변수명)(매개변수형)= 함수이름
	void(*p2)(int, int) = sum2;

	puts("\n C언어 함수 포인터");

	printf("sum1 함수의 주소=%d \n", sum1);
	printf("sum2 함수의 주소=%d \n", sum2);
	
	puts(" \n 변수의 주소와 함수의 주소 \n");

	printf("p1=%d, &p1=%d \n", p1, &p1);
	printf("p2=%d, &p2=%d \n", p2, &p2);

	puts(" \n 인수 1개 함수 \n");

	printf(" sum1(20) = %d \n", sum1(20));
	printf(" p1(20)= %d \n", p1(20));

	puts(" \n 인수 2개 함수 \n");

	sum2(10, 20);
	p2(10, 20);

	return 0;
}