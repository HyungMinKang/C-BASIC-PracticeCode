#include <stdio.h>

int main(void)
{	
	int i , num;
	int k = 1;
	printf("상수 n 입력: ");
	scanf_s("%d", &num);
	
	if (num == 0)
		printf("만족하는 k값 없습니다");
	
	
	for (i = 0; k*2 <= num; i++)
	{
		k = k * 2;

	}
	printf(" 공식을 만족하는 k의 최대 값: %d", i);
	return 0;

}