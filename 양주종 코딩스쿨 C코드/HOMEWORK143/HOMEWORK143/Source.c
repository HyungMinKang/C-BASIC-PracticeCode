// fgetc �Լ�

#include<stdio.h>
int main(void)
{
	char b_type;
	fputs(" *fgetc �Լ� * \n", stdout);

	fprintf(stdout, "����� ��������: ");

	b_type = getchar();

	fprintf(stdout, " \n %c���̱���. �ݰ����ϴ�. \n ", b_type);

	fputs(" \n ------------------------------ \n",stdout);
	fputs(" �̹� �˰� �ִ� getchar �Լ� \n", stdout);
	fputs(" --------------------------------\n", stdout);
	return 0;
}