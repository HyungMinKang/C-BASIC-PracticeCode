#include <stdio.h>

int main(void)
{
	int num;
	printf(" 정수를 입력하세요:");
	scanf_s("%d", &num);

	switch (num / 10)
	{
	case 0:
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	default:
		printf("30이상");
		
	}
	return 0;
}
