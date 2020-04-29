//time 함수

#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t t;
	// time(&t);

	t = time(NULL);

	printf("1970년 1월 1일 자정부터 흘러온시간: %u초 \n", t);

	return 0;
}