// 문자열의 비교

#include <stdio.h>
#include <string.h>

int main()
{
	puts("-----------------");
	puts(" *문자열 크기비교* ");
	puts(" ------------------");

	printf(" AA:AA= %d 같다 \n", strcmp("AA", "AA"));
	printf(" AB:AA= %d 크다 \n", strcmp("AB", "AA"));
	printf(" AA:AB= %d 작다 \n", strcmp("AA", "AB"));

	printf("철수 : 철민 = %d \n", strcmp("철수", "철민"));
	printf("소라 : 희선 = %d \n", strcmp("소라", "희선"));
	puts("---------------------");

	puts(" 문자열은 주소다. 크기를 비교할 없으나, 전용함수가 있다");
	puts(" 같으면 0, 좌측이 크면 1, 작으면 -1");
	puts("------------------------------------------------------");

	return 0; 
}