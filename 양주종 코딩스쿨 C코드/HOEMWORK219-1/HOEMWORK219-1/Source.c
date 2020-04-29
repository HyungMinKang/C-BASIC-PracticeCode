//fgetc 함수
#include <stdio.h>

int main(void)
{
	char b_type;
	fprintf(stdout, "당신의 혈액형은 : ");
	b_type = fgetc(stdin);
	fprintf(stdout, "\n %c형이군요. 반갑습니다 \n", b_type);

	fputs(" 새로운 입력함수 fgetc \n", stdout);
	return 0;
}