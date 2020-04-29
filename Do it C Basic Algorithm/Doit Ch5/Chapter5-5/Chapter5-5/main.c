#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

void recur(int n)
{
	IntStack stk;
	Initialize(&stk, 100);

Top:
	if (n > 0)
	{
		Push(&stk, n); //n값 임시저장
		n = n - 1; // recur(n-1)
		goto Top;
	}

	if (!Isempty(&stk)) {
		Pop(&stk, &n); //임시저장한 n값 다시 불러오기
		printf("%d\n", n);
		n = n - 2;  //recur(n-2) 꼬리재귀 함수
		goto Top;  
	}

	Terminate(&stk);


}

int main(void)
{
	int x;
	printf("정수를 입력하세요:");
	scanf("%d", &x);
	recur(x);

	return 0;
}
