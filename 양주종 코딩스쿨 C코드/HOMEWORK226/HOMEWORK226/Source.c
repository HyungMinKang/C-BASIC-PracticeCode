//tm ����ü time �Լ�
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

	printf(" �����̼���: ");
	scanf("%d", &year);

	printf(" �¾ ������: ");
	scanf("%d", &month);

	printf(" �¾ ������: ");
	scanf("%d", &day);

	year = (today->tm_year + 1900 - year) * 365;
	month = (today->tm_mon + 1 - month) * 30;
	day = (today->tm_mday) - day;

	printf("\n ������ ����� �� ���� �¾�� \n\t [%d]��° �Ǵ� ���̿��� \n", year + month + day);

	return 0;
}