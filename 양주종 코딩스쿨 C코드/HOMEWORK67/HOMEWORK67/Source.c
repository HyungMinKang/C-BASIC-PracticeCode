// 문자열 배열의 초기화

#include<stdio.h>
#include<string.h>
int main()
{
	char city[5][10] = { "부 산","대 구","창 원","목 포","여 수"};
	int i, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("-----------------------");
	puts("문자배열의 초기화");
	puts("-----------------------");

	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("배열의 배열, 2차원 배열입니다");
	puts("--------------------------");

	return 0;
}