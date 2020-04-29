// 기억류(storage class) static

#include <stdio.h>
int gg;

int main(void)
{
	int a;
	static int b;

	printf(" a= %d, &a=%d \n", a, &a);
	printf(" b= %d, &b=%d \n", b, &b);
	printf(" gg= %d, &gg=%d \n", gg, &gg);

	puts("a는 statck 영역 b,gg는 data 영역에 할당");
	puts(" 초기화 하지 않으면 a는 쓰레기 값. b,gg=0");

	return 0; 
}