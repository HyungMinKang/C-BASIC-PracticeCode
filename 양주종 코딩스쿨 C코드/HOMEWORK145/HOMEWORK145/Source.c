//fscanf 함수

#include <stdio.h>
int main(void)
{
	int age;
	fputs(" * fscanf 함수 - 정수 * \n", stdout);

	fprintf(stdout, "몇 살이세요: ");
	fscanf_s(stdin, "%d", &age);
	fprintf(stdout, "%d살 동갑이네요 \n", age);

	fputs("\n-----------------------------------\n", stdout);
	fputs("scanf 함수는 여러 형시 입력함수 \n", stdout);
	fputs(" 정수, 실수, 문자,문자열 모두 입력 가능 \n", stdout);
	fputs("-------------------------------------\n", stdout);

	return 0;
}