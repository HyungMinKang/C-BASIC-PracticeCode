// 문자열의 연결

#include <stdio.h>
#include <string.h>

int main()
{
	char a[10] = "pine";

	puts("-----------------");
	puts(" *문자열의 연결 * ");
	puts(" -----------------");

	printf("a= %s \n", a);
	strcat_s(a,sizeof(a),"apple");
	printf(" 연결후 a =%s \n", a);
	puts("--------------------");

	puts(" 문자열을 연결할 때는 strcat전용함수를 사용한다 ");
	puts(" C언어에는 string이라는 자료형이 없다");
	puts("--------------------------------------");

	return 0;
}