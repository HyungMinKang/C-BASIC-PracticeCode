// fets �Լ�

#include<stdio.h>
int main(void)
{
	char it[20];
	fputs(" * fgets �Լ� * \n", stdout);

	fprintf(stdout, "�ٹ��ϰ� ���� itȸ��� : ");

	fgets(it, sizeof(it), stdin);
	fprintf(stdout, "\n %s ���� ��ȸ�� ����;��", it);

	fputs("\n-----------------\n", stdout);
	fputs(" fgets�Լ� ��� \n", stdout);
	fputs(" -----------------\n", stdout);
	return 0;
}