#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
int main(void)
{
	int no;
	printf("2자리 정수를 입력하세요 \n");
	do {
		printf("수는 :");
		scanf("%d", &no);
	} while (no < 10 || no>99);

	printf("no= %d", no);
	return 0;
}