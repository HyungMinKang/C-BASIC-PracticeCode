// ���ڿ� ����
#include <stdio.h>
#include <string.h>
int main()
{
	char town[5][10];
	char tmp[10];
	int i, j, n;
	n = sizeof(town) / sizeof(char[10]);

	puts("---------------------");
	puts(" **���ڿ� ����** ");
	puts("-----------------------");

	//1.�Է�
	printf(" ��� ���� ���� [%d]���� �Է� \n", n);
	puts("---------------------------------");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]��° ���̸� : ", i);
		fflush(stdin);
		gets(town[i]);
	}
	puts("-------------------------------------");

	//2.���� ���
	puts(" \n **�� �� �� �� ** ");
	for (i = 0; i < n; i++)
		printf("town[%d] ==> %s \n", i, town[i]);
	puts("----------------------------------");

	//3. ��ǰ����(Bubble sort)
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(town[j], town[j + 1]) > 0)
			{
				strcpy_s(tmp, sizeof(tmp), town[j]);
				strcpy_s(town[j], sizeof(town[j]), town[j + 1]);
				strcpy_s(town[j + 1], sizeof(town[j + 1]), tmp);
			}
		}
	}

	//4. ������ ���
	puts(" \n **������ �� �� ** ");
	for (i = 0; i < n; i++)
		printf("town[%d] ==> %s \n", i, town[i]);
	puts("----------------------------------");

	return 0;

}