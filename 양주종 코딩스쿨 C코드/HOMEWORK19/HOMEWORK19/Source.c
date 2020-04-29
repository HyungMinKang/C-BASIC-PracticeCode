//c언어 코딩 :: 문자열 입출력 gets 

#include <stdio.h>

int main(void)
{
	char team[10];
	puts("-------------------");
	puts(" **문자열 입출력 **");
	puts("-------------------");

	printf("좋아하는 야구팀은: ");
	gets(team);

	printf("야구팀은= %s \n", team);
	puts("--------------------------");

	return 0;
}