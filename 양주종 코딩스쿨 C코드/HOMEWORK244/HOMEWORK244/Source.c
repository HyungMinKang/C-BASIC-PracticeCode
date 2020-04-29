// 문자열 함수처리

#include <stdio.h>

void func1(char x[])
{
	puts("* 문자열의 배열식 표현* ");
	printf("x=%s \n", x);
	printf("x=%d byte\n", sizeof(x));
	printf("x=%d, 자신의주소&x=%d \n", x, &x);
}

void func2(char* x)
{
	puts("*문자열의 포인터식 표현");
	printf("x=%s \n", x);
	printf("x=%d byte \n", sizeof(x));
	printf("x=%d, 자신의 주소 &x=%d \n", x, &x);
}

int main(void)
{
	char a[] = "apple"; // char*a="apple"

	puts(" main func");
	printf("a=%d, %d \n\n\n ", a,a);

	func1(a);
	func1("africa");

	puts("\n\n");

	func2(a);
	func2("africa");

	return 0;

}