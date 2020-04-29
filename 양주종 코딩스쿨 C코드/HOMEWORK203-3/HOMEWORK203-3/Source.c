// 정수배열이 함수의 인자로 전달 
// 배열의 길이정보도 함꼐 넘긴다 ==> 메모리 주소 침범방지를 위해

#include <stdio.h>
void Display(int x[5], int num)
{
	int i;
	puts(" \n ===> Display 함수");

	for (i = 0; i < num; i++)
	{
		printf(" *(x+%d) ==> %d 주소 ==> %d \n", i, *(x + i), x + i);
	}

	puts("해결- 배열의 길이정보도 함꼐 넘긴다");
}

int main(void)
{
	int a[5] = { 10,20,30,40,50 };
	int n = sizeof(a) / sizeof(int);

	Display(a, n);

	return 0;
}