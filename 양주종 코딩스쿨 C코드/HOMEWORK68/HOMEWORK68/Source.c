// 문자열 배열의 입출력

#include<stdio.h>
#include<string.h>
int main(void)
{
	char city[5][10];
	int i, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("---------------------");
	puts(" 문자배열의 입출력 ");
	puts("---------------------");

	//1 입력
	printf(" 살고 싶은 도시 [%d] 곳 입력 \n", n);
	for (i = 0; i < n; i++)
	{
		printf("[%d]번쨰 도시: ", i);
		fflush(stdin);
		gets(city[i]);
	}
	puts("---------------");

	//2.출력
	puts(" 출력 ");
	for (i = 0; i < n; i++)
		printf("city[%d] ==> %s \n ", i, city[i]);
	puts("--------------------");

	puts("char[10]가 5개 모인 2차원 배열입니다");
	puts("--------------------------------");
}