// 배열포인터가 필요한 경우

#include <stdio.h>

int main(void)
{
	char team[5][10] = { "삼성", "두산", "넥센","기아","한화"};
	int i, n = sizeof(team) / sizeof(char[10]);

	printf("\n %d개의 야구팀 \n\n", n);
	for (i = 0; i < n; i++)
	{
		printf("team[%d] ==> %s \n", i, team[i]);
	}

	return 0;
}