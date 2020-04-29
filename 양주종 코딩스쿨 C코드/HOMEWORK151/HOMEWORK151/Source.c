#include <stdio.h>

int g1, g2, g3;
int main(void)
{
	int a, b, c;

	puts(" 지역변수와 전역변수 \n ");

	printf(" 전역변수 g1 = %d, &g1=%d \n", g1, &g1);
	printf(" 전역변수 g2 = %d ,&g2=%d \n", g2, &g2);
	printf(" 전역변수 g3 = %d ,&g3=%d \n", g3, &g3);

	printf("\n 지역변수 a= %10d, &a= %d \n", a, &a);
	printf(" 지역변수 b= %10d, &b=%d \n", b, &b);
	printf(" 지역변수 c= %10d, &c=%d \n", c, &c);

	puts(" 주소의 대역이 다르다");
	puts(" 전역변수는 데이터 영역에 쓰여진다");
	puts(" 지역변수는 스택영역에 쓰여진다");
	puts(" 초기화 하지 않으면 전역변수는 0, 지역변수는 쓰레기 값");

	return 0;
}