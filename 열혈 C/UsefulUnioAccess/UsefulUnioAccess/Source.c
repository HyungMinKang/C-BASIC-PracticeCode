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
	printf("���� �Է�: ");
	scanf_s("%d", &(buf.ibuf));

	printf("����2����Ʈ ���: %u \n", buf.sBuf.upper);
	printf("����2����Ʈ ���: %u \n", buf.sBuf.lower);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ����: %c \n", buf.bufs[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ����: %c \n", buf.bufs[3]);
	return 0;
}