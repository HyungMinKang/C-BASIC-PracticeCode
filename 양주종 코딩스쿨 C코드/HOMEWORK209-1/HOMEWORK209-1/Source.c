//문자열 정렬(포인터)- 함수로 처리

#include <stdio.h>
#include <string.h>

void DisplayName(char** x, int num, char* message)
{
	int i;
	puts(message);
	for (i = 0; i < num; i++)
	{
		printf(" %d번쨰 이름 ==> %s \n", i, *(x+i));
	}
}

void BubbleSort(char** x, int num)
{
	int i, j;
	char* tmp;

	for (i = 0; i < num - 1;i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (strcmp(*(x + j), *(x + j + 1)) > 0)
			{
				tmp = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = tmp;
			}
		}
	}
	DisplayName(x, num, "\n 정렬후");
}

int main(void)
{
	char* name[5] = { "양주종","송중기","남궁민","김래원","강동원" };
	int n = sizeof(name) / sizeof(char*);

	DisplayName(name, n, "원본출력");
	BubbleSort(name, n);

	return 0;
}