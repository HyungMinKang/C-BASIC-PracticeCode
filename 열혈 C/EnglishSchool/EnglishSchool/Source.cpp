#include <stdio.h>

int main(void)
{
	int num;
	printf("1�̻� 5������ ���� �Է�: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1�� ONE \n");
		break;
	case 2:
		printf("2�� TWO n");
		break;
	case3:
		printf("3�� THREE");
		break;
	case 4:
		printf("4�� FOUR");
		break;
	case 5:
		printf("5�� FIVE");
		break;
	default:
		printf("I DON't KNOW");
		break;
	}
	return 0;
}