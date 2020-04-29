#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[5][10];
	int i, j, n;
	char tmp[10];
	n = sizeof(name) / sizeof(char[10]);

	printf("%d명의 이름입력 \n", n);

	for (i = 0; i < n; i++)
	{
		printf("%d번쨰 이름: ", i);
		fgets(name[i], sizeof(char[10]), stdin);
		name[i][strlen(name[i]) - 1] = 0;
	}

	puts("\n 원 본 출 력");
	for (i = 0; i < n; i++)
	{
		printf("%d번째 이름 ==> %s \n", i, name[i]);
	}

}