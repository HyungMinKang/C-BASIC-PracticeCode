// 강제형변환(cast 연산)

#include <stdio.h>

int main(void)
{

	int a = (int)35.679;
	float b = 55.545;
	float c = 55.545f;

	puts("-----------------------");
	puts(" *강제형변환(cast연산)*");
	puts("-----------------------");

	printf(" a=%d, b=%.2f, c=%.2f \n", a, b, c);
	puts("-----------------------");

	puts("(int)35.678은 35.678을 int형으로 강제형변환");
	puts("55.545f에서 뒤에 f는 float형 데이터임을 나타냄");
	puts("-----------------------");

	return 0; 
}