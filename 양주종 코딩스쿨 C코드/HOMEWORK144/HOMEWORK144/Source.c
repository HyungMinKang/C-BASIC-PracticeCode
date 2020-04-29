// fgets 함수
#include <stdio.h>
int main(void)
{
	char it[20];
	fputs(" *fgets 함수 * \n", stdout);

	fprintf(stdout, "근무하고 싶은 it회사는: ");
	gets(it);
	fprintf(stdout, "\n %s. 저도 그 회사 가고 싶어요", it);

	fputs("\n -----------\n", stdout);
	fputs(" gets 함수 복습 \n", stdout);
	fputs(" ----------------\n", stdout);

	return 0; 
}