// fscanf �Լ�
#include <stdio.h>
int main(void)
{
	float vision;
	fputs(" scanf �Լ�- float \n", stdout);
	fprintf(stdout, "����� �÷��� : ");
	fscanf_s(stdin, "%f", &vision);
	fprintf(stdout, " ����� �÷��� %.1f \n", vision);
	
	fputs("\n ------------------------------------\n", stdout);
	fputs(" %f ==> float, %lf ==> double \n",stdout);
	fputs("--------------------------------------\n", stdout);

	return 0;
}