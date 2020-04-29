// C언어 코딩 :: 입출력 서식문자

#include <stdio.h>

int main(void)
{
	puts("----------------");
	puts(" * 입출력 서식 안내 * ");

	puts(" ---------------");
	puts("%d(decimal)는 10진수 출력");

	puts("----------------");
	puts("%c(character)는 한 문자 출력");

	puts("-----------------");
	puts("%s(string)는 문자열 출력");

	puts("-----------------");
	puts("%f(float)는 작은 실수(4byte) 출력");

	puts("--------------------------");
	puts("%lf(long float)는 큰 실수(8byte) 출력");

	puts(" 자주 사용하는 서식들입니다");
	puts("------------------------------");

	return 0;
}