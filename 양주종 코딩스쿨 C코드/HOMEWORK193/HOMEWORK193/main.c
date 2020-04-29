// 기억류(storage class) 이해하기- auto,static,extern, register
//extern 외부 변수

#include<stdio.h>
static int g1 = 100;
extern int g2 = 200;

int main(void)
{
	puts(" 기억류(storage class) \n");
	extern g3;
	g3 = 777;

	printf("전역변수 static g1= %d, address=%d \n", g1, &g1);
	printf("전역변수 extern g2= %d, address= %d \n", g2, &g2);
	printf("전역변수 extern g3= %d, address= %d \n", g3, &g3);

	return 0;
}

extern int g3 = 200;
