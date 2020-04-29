// 제어문과 연산자-while문

#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;
	puts("------------");
	puts(" *while문 *");
	puts("------------");

	while (i <= 10)
	{
		sum += i;
		printf("i= %2d, sum=%2d \n", i, sum);
		i = i + 1;
	}

	puts("-----------------------------");
	puts(" 변수 선언시 i로초기화 해줘야 한다");
	puts(" while문 내부에 i의 값을 증가시킨다");
	puts("--------------------------------");

	return 0;

}