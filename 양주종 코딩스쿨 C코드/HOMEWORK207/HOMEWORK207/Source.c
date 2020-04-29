// 문자열 입력

#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[5][10];
	int i, n;
	n = sizeof(name) / sizeof(char[10]);

	printf("[%d]명의 이름 입력 \n", n);

	for (i = 0; i < n; i++)
	{
		printf("[%d]번쨰 이름: ", n);
		fgets(name[i], sizeof(char[10]), stdin);
		name[i][strlen(name[i]) - 1] = 0;
	}

	puts("\n * 출력 * ");
	for (i = 0; i < n; i++)
	{
		printf("[%d]번 쨰 이름 ==> %s \n", i, name[i]);
	}

	return 0;
}