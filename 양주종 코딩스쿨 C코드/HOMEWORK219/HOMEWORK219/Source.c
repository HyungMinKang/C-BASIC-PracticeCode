//getchar 함수
#include <stdio.h>

int main(void)
{
	char b_type;
	printf(" 당신의 혈액형은 : ");
	b_type = getchar();
	printf(" \n %c형이군요 반갑습니다 \n", b_type);

	puts(" getchar 입력함수");

	return 0; 
}