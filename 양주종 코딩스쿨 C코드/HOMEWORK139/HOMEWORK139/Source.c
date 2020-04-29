// fgets 함수

#include <stdio.h>
int main(void)
{
	char country[10];
	puts(" * fgets 함수 *");

	printf(" 여행하고 픈 나라는 : ");
	fgets(country, sizeof(country) - 1, stdin);

	printf(" %s 함께 가요. \n", country);

	puts("\n--------------------------------------");
	puts(" fgets 함수는 문자열 입력 전용함수 ");
	puts(" 배열길이보다 길게 입력을 해도 size만큼 읽어간다");
	puts(" 다른 메모리 침범안함");
	puts(" 안정적 입력");

	puts(" 실패시 NULL값 리턴");
	puts("--------------------------------------------");
	return 0;
}