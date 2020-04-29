//tm 구조체 time 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

typedef struct tm tm;

int main(void)
{
	time_t ltime;
	tm* today;
	int year, month, day;
	time(&ltime);

	today = (localtime(&ltime));

	printf(" 몇년생이세요: ");
	scanf("%d", &year);

	printf(" 태어난 월은요: ");
	scanf("%d", &month);

	printf(" 태어난 일은요: ");
	scanf("%d", &day);

	year = (today->tm_year + 1900 - year) * 365;
	month = (today->tm_mon + 1 - month) * 30;
	day = (today->tm_mday) - day;

	printf("\n 오늘은 당신이 이 세상에 태어난지 \n\t [%d]일째 되는 날이에요 \n", year + month + day);

	return 0;
}