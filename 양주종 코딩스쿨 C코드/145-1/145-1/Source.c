// fscanf �Լ�

#include <stdio.h>
int main(void)
{
	int a, b;
	fputs(" * scanf �Լ�- ���� �ΰ� * \n", stdout);

	fprintf(stdout, "ù ���� ���� �Է� : ");
	fscanf_s(stdin, "%d", &a);

	fprintf(stdout, "�� ���� ���� �Է� : ");
	fscanf_s(stdin, "%d", &b);

	fprintf(stdout, "a =%d, b=%d \n", a, b);

	fputs("\n ---------------------------------------\n",stdout);
	fputs(" ���� 2���� �Է¹��� ���� ���� ���� ��������", stdout);
	fputs(" ----------------------------------------\n", stdout);
	return 0;
}