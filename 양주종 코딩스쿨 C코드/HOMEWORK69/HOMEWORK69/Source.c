// ���ڿ� ����

#include <stdio.h>
#include <string.h>
int main(void)
{
	char city[5][10] = { "�� ��","�� ��","â ��","�� ��","�� ��" };
	char tmp[10];
	int i, j, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("---------------");
	puts(" ���ڿ� ���� ");
	puts(" ---------------");
	
	//1. ������� 
	puts("\n ���� ��� ");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);

	//2. ����
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(city[i], city[j]) > 0)
			{
				strcpy_s(tmp, sizeof(city[i]), city[i]);    // strcpy_s(�Ű�����1, ������ũ��, �Űܺ���2)
				strcpy_s(city[i], sizeof(city[i]), city[j]);
				strcpy_s(city[j], sizeof(city[i]), tmp);
			}

		}
	}
	puts("---------------------");

	//3 ������ ���
	puts(" \n ������ ���");
	for (i = 0; i < n; i++)
		printf("city[%d] ==> %s \n", i, city[i]);
	puts("-------------------");
	puts(" strcmp�� ���ڿ� ���Լ�, strcpy�� ���ڿ� ���� �Լ�");
	puts("--------------------------");

	return 0;
}
