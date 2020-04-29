#include <stdio.h>

int main(void)
{
	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1은 ONE \n");
		break;
	case 2:
		printf("2은 TWO n");
		break;
	case3:
		printf("3은 THREE");
		break;
	case 4:
		printf("4은 FOUR");
		break;
	case 5:
		printf("5은 FIVE");
		break;
	default:
		printf("I DON't KNOW");
		break;
	}
	return 0;
}