#include <stdio.h>
void Add(int val);
int num; // 전역변수는 기본 0으로 초기화됨

int main(void)
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++; // 전역변수 num의 값 1증가
	printf("num: %d \n", num);
	return 0;
}

void Add(int val)
{
	num += val; // 전역변수 num의 값 val 만큼증가

}