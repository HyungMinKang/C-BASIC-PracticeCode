//fscanf �Լ�

#include <stdio.h>
int main(void)
{
	int age;
	fputs(" * fscanf �Լ� - ���� * \n", stdout);

	fprintf(stdout, "�� ���̼���: ");
	fscanf_s(stdin, "%d", &age);
	fprintf(stdout, "%d�� �����̳׿� \n", age);

	fputs("\n-----------------------------------\n", stdout);
	fputs("scanf �Լ��� ���� ���� �Է��Լ� \n", stdout);
	fputs(" ����, �Ǽ�, ����,���ڿ� ��� �Է� ���� \n", stdout);
	fputs("-------------------------------------\n", stdout);

	return 0;
}