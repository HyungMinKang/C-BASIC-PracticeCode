// fscanf 함수
#include <stdio.h>
int main(void)
{
	char flower[20];
	fputs(" fscanf 함수 - 문자열 입력 \n", stdout);
	fprintf(stdout, "좋아하는 꽃은: ");
	fscanf_s(stdin, "%s",  flower, sizeof(flower));
	fprintf(stdout, "좋아하는 꽃은: %s \n", flower);

	fputs("\n ------------------------------- \n",stdout);
	fputs(" fscanf %s는 공백 만나면 입력 종료 \n", stdout);
	fputs(" fgets 함수는 엔터 만나면 입력 종료 \n", stdout);
	fputs(" ---------------------------------------------", stdout);
}