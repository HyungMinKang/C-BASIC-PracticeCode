//���ڿ� ����(������)- �Լ��� ó��

#include <stdio.h>
#include <string.h>

void DisplayName(char** x, int num, char* message)
{
	int i;
	puts(message);
	for (i = 0; i < num; i++)
	{
		printf(" %d���� �̸� ==> %s \n", i, *(x+i));
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
	DisplayName(x, num, "\n ������");
}

int main(void)
{
	char* name[5] = { "������","���߱�","���ù�","�跡��","������" };
	int n = sizeof(name) / sizeof(char*);

	DisplayName(name, n, "�������");
	BubbleSort(name, n);

	return 0;
}