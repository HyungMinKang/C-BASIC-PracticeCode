//switch~case�� �޴� �����

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

	puts("\n *�޴� �����* \n");

	while (1)
	{
		printf(" ��ȣ�� �����ϼ���[0 to quit]:");
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
				printf("%d ���� ��ȣ �Դϴ� \n", number);
		}
	}

	return 0;
}