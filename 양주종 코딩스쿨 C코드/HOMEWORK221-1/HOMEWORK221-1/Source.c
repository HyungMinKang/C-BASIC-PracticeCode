// fscanf 함수- 문자열 입력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char flower[20];
	fprintf(stdout, "좋아하는 꽃은: ");
	fscanf(stdin, "%s", flower);

	//fgets(flower, sizeof(flower),stdin);

	fprintf(stdout, " %s 저도 좋아해요 \n", flower);

	fputs(" fscanf- %s는 공백만나면 입력종료 \n", stdout);
	fputs(" fgets함수는 엔터 만나면 입력종료 \n", stdout);
	fputs(" 문자열 입력은 fgets함수를 권장 \n", stdout);

	return 0;
}