//���Ͽ� ����ϱ� fopen�Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;
	fp = fopen("test.txt", "w");

	if (fp == NULL)
	{
		puts("FILE OPEN ERROR");
		return 1; // �������� ����
	}

	fputs("��ſ� �ݿ����̴� \n", stdout);
	fputs("2016�� ������ �߰ſ��� \n", stdout);

	fputs("��ſ� �ݿ����̴� \n", fp);
	fputs("2016�� ������ �߰ſ��� \n", fp);

	fclose(fp);

	return 0;
}