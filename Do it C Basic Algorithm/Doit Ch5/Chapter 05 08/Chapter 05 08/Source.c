#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int flag[8]; // 각 행에 퀸을 배치했는지 체크하는 배열
int pos[8]; // 각열에서 퀸의 위치

void Print(void)
{
	int i;
	for (i = 0; i < 8; i++)
		printf("%2d", pos[i]);
	putchar('\n');

}

void set(int i)
{
	int j;
	for (j = 0; j < 8; j++)
	{
		if (!flag[j])   //j행에 퀸을 배치하지 않았다면
		{
			pos[i] = j;
			if (i == 7)
				Print();
			else {
				flag[j] = 1;
				set(i + 1);
				flag[j] = 0;
			}

		}
	}
}

int main(void)
{
	int i;
	for (i = 0; i < 8; i++)
		flag[i] = 0;
	set(0);

	return 0;
}