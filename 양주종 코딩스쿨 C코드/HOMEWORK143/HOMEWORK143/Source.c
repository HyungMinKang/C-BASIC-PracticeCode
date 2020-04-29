// fgetc 함수

#include<stdio.h>
int main(void)
{
	char b_type;
	fputs(" *fgetc 함수 * \n", stdout);

	fprintf(stdout, "당신의 혈액형은: ");

	b_type = getchar();

	fprintf(stdout, " \n %c형이군요. 반갑습니다. \n ", b_type);

	fputs(" \n ------------------------------ \n",stdout);
	fputs(" 이미 알고 있는 getchar 함수 \n", stdout);
	fputs(" --------------------------------\n", stdout);
	return 0;
}