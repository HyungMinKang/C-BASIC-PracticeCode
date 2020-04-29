//fscanf 함수- 정수 입력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;

	fprintf(stdout, "몇 살이세요: ");
	fscanf_s(stdin, "%d", &age);

	fprintf(stdout, "%d살. 동갑이네요 \n", age);
	fputs(" scanf함수는 여러형식 입력함수 \n", stdout);
	fputs(" 정수, 실수, 문자, 문자열 모두 입력 가능 \n", stdout);

	return 0;
}