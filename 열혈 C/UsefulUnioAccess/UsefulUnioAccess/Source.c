#include<stdio.h>

typedef struct dbshort {
	unsigned short lower;
	unsigned short upper;
}DBShort;

typedef union rdbuf {
	int ibuf;
	char bufs[4];
	DBShort sBuf;
}RDBuf;

int main(void)
{
	RDBuf buf;
	printf("정수 입력: ");
	scanf_s("%d", &(buf.ibuf));

	printf("상위2바이트 출력: %u \n", buf.sBuf.upper);
	printf("하위2바이트 출력: %u \n", buf.sBuf.lower);
	printf("상위 1바이트 아스키 코드출력: %c \n", buf.bufs[0]);
	printf("하위 1바이트 아스키 코드출력: %c \n", buf.bufs[3]);
	return 0;
}