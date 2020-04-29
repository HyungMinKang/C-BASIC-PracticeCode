// 문자열 정렬(배열)- 함수로 처리

#include <stdio.h>
#include <string.h>

void DisplayName(char(*x)[10], int _num, char* message)
{
	int i;
	puts(message);
	for (i = 0; i < _num;i++)
	{
		printf("%d번쨰 이름 ==> %s \n", i, *(x + i));
	}
}

void InputName(char(*x)[10], int _num)
{
	int i;

	printf("%d명의 이름 입력 \n", _num);

	for (i = 0; i < _num; i++)
	{
		printf("%d번쟤 이름: ", i);
		fgets(*(x + i), sizeof(char[10]), stdin);
		x[i][strlen(x[i]) - 1] = 0;
	}
	DisplayName(x, _num, "\n 원 본 출 력 ");
}

void BubbleSort(char(*x)[10], int _num)
{
	int i, j;
	char tmp[10];

	for (i = 0; i < _num - 1; i++)
	{
		for (j = 0; j < _num - 1 - i; j++)
		{
			if (strcmp(*(x + j), *(x + j + 1)) > 0)
			{
				strcpy_s(tmp, sizeof(tmp), *(x + j));
				strcpy_s(*(x + j), sizeof(*(x + j)), *(x + j + 1));
				strcpy_s(*(x + j + 1), sizeof(*(x + j + 1)), tmp);

			}
		}
	}
	DisplayName(x, _num, "\n 정렬후");
}

int main(void)
{
	char name [5][10];
	int n = sizeof(name) / sizeof(char[10]);

	InputName(name, n);
	BubbleSort(name, n);

	return 0;
}