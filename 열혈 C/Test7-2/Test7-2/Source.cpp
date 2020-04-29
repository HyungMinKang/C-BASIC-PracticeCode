#include <stdio.h>

int main(void)
{
	int num=0, cnt=0;
	

	printf("양의 정수를 입력하세요");
	scanf_s("%d", &num);

	while (cnt < num)
	{
		cnt++;
		printf("%d \n", 3 * cnt);
	}
	return 0;
}