//fscanf �Լ�- ���� �Է�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;

	fprintf(stdout, "�� ���̼���: ");
	fscanf_s(stdin, "%d", &age);

	fprintf(stdout, "%d��. �����̳׿� \n", age);
	fputs(" scanf�Լ��� �������� �Է��Լ� \n", stdout);
	fputs(" ����, �Ǽ�, ����, ���ڿ� ��� �Է� ���� \n", stdout);

	return 0;
}