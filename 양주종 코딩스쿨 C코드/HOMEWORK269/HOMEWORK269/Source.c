//switch~case문 메뉴 만들기

#include <stdio.h>

void one(int x)
{
	puts("\n 1.one \n");
}

void two(int x)
{
	puts("\n 2.two \n");
}

void three(int x)
{
	puts("\n 3.three \n");
}

void four(int x)
{
	puts("\n 4.four \n");
}

int main(void)
{
	int number;

	puts("\n *메뉴 만들기* \n");

	while (1)
	{
		printf(" 번호를 선택하세요[0 to quit]:");
		scanf_s("%d", &number);
		if (number == 0)
			return;

		switch (number)
		{
			case 1:
				one(number);
				break;

			case 2:
				two(number);
				break;
			
			case 3:
				three(number);
				break;
			
			case 4:
				four(number);
				break;

			default:
				printf("%d 없는 번호 입니다 \n", number);
		}
	}

	return 0;
}