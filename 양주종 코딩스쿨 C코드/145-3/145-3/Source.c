// fscanf �Լ�
#include <stdio.h>
int main(void)
{
	char flower[20];
	fputs(" fscanf �Լ� - ���ڿ� �Է� \n", stdout);
	fprintf(stdout, "�����ϴ� ����: ");
	fscanf_s(stdin, "%s",  flower, sizeof(flower));
	fprintf(stdout, "�����ϴ� ����: %s \n", flower);

	fputs("\n ------------------------------- \n",stdout);
	fputs(" fscanf %s�� ���� ������ �Է� ���� \n", stdout);
	fputs(" fgets �Լ��� ���� ������ �Է� ���� \n", stdout);
	fputs(" ---------------------------------------------", stdout);
}