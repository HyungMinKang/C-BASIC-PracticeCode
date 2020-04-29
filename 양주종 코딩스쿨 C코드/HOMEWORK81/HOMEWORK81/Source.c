// 자료형의 크기(복습) 

#include<stdio.h>

int main(void)
{
	puts("------------------");
	puts(" 자료형의 크기");
	puts("------------------");

	printf(" char = %d byte \n", sizeof(char));
	printf(" int = %d byte \n", sizeof(int));
	printf(" double = %d byte \n", sizeof(double));
	puts("-----------------");

	printf("\'A\'= %d byte \n", sizeof('A'));
	printf(" 50= %d byte \n", sizeof(50));
	printf(" 35.78= %d byte \n", sizeof(35.78));

	puts(" A는 내부적으로 정수 65로 인식하여 4바이트");
	puts(" 실수는 기본적으로 double 8바이트로 인식");
	puts("-----------------------------------------");
	return 0; 
}