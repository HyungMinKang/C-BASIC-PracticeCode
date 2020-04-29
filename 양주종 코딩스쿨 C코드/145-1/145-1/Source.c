// fscanf 함수

#include <stdio.h>
int main(void)
{
	int a, b;
	fputs(" * scanf 함수- 정수 두개 * \n", stdout);

	fprintf(stdout, "첫 번쨰 정수 입력 : ");
	fscanf_s(stdin, "%d", &a);

	fprintf(stdout, "두 번쨰 정수 입력 : ");
	fscanf_s(stdin, "%d", &b);

	fprintf(stdout, "a =%d, b=%d \n", a, b);

	fputs("\n ---------------------------------------\n",stdout);
	fputs(" 연속 2개를 입력받을 떄는 따로 따로 받으세요", stdout);
	fputs(" ----------------------------------------\n", stdout);
	return 0;
}