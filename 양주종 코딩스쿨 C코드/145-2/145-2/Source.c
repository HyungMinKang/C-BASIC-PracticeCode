// fscanf 함수
#include <stdio.h>
int main(void)
{
	float vision;
	fputs(" scanf 함수- float \n", stdout);
	fprintf(stdout, "당신의 시력은 : ");
	fscanf_s(stdin, "%f", &vision);
	fprintf(stdout, " 당신의 시력은 %.1f \n", vision);
	
	fputs("\n ------------------------------------\n", stdout);
	fputs(" %f ==> float, %lf ==> double \n",stdout);
	fputs("--------------------------------------\n", stdout);

	return 0;
}