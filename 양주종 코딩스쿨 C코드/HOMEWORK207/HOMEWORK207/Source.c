// ���ڿ� �Է�

#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[5][10];
	int i, n;
	n = sizeof(name) / sizeof(char[10]);

	printf("[%d]���� �̸� �Է� \n", n);

	for (i = 0; i < n; i++)
	{
		printf("[%d]���� �̸�: ", n);
		fgets(name[i], sizeof(char[10]), stdin);
		name[i][strlen(name[i]) - 1] = 0;
	}

	puts("\n * ��� * ");
	for (i = 0; i < n; i++)
	{
		printf("[%d]�� �� �̸� ==> %s \n", i, name[i]);
	}

	return 0;
}