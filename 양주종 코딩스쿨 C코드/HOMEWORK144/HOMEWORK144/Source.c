// fgets �Լ�
#include <stdio.h>
int main(void)
{
	char it[20];
	fputs(" *fgets �Լ� * \n", stdout);

	fprintf(stdout, "�ٹ��ϰ� ���� itȸ���: ");
	gets(it);
	fprintf(stdout, "\n %s. ���� �� ȸ�� ���� �;��", it);

	fputs("\n -----------\n", stdout);
	fputs(" gets �Լ� ���� \n", stdout);
	fputs(" ----------------\n", stdout);

	return 0; 
}