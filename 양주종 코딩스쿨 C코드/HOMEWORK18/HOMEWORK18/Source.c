// c언어코딩 :: 문자열 입출력 

#include<stdio.h>

int main(void)
{
	char team[10];
	puts("-------------------");
	puts(" ** 문자열 입출력 **");
	puts("-------------------");

	printf(" 좋아하는 야구팀은 : ");
	scanf_s("%s", team, sizeof(team));

	printf("야구팀은 = %s \n", team);
	puts("--------------------------------");
	puts("scanf는 공백을 만나면 입력종료");
	puts(" 공백을 포함할 때는 사용하면 안된다");
	puts("-------------------------------");

	return 0;

}