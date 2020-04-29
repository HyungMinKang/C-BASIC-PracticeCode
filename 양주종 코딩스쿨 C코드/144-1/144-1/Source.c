// fets 함수

#include<stdio.h>
int main(void)
{
	char it[20];
	fputs(" * fgets 함수 * \n", stdout);

	fprintf(stdout, "근무하고 싶은 it회사는 : ");

	fgets(it, sizeof(it), stdin);
	fprintf(stdout, "\n %s 저도 그회사 가고싶어요", it);

	fputs("\n-----------------\n", stdout);
	fputs(" fgets함수 사용 \n", stdout);
	fputs(" -----------------\n", stdout);
	return 0;
}