// fscanf �Լ�- ���ڿ� �Է�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char flower[20];
	fprintf(stdout, "�����ϴ� ����: ");
	fscanf(stdin, "%s", flower);

	//fgets(flower, sizeof(flower),stdin);

	fprintf(stdout, " %s ���� �����ؿ� \n", flower);

	fputs(" fscanf- %s�� ���鸸���� �Է����� \n", stdout);
	fputs(" fgets�Լ��� ���� ������ �Է����� \n", stdout);
	fputs(" ���ڿ� �Է��� fgets�Լ��� ���� \n", stdout);

	return 0;
}