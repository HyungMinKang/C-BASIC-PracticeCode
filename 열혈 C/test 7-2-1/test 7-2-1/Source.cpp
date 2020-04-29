#include <stdio.h>

int main(void)
{
	int num=0;
	int sum = 0;
	int cnt = 0;

	while (cnt< 5)// 5개의 정수 입력
	{
		while (num <= 0) //1미만 수 입력시 재입력 요구
		{
			printf("정수를 입력하세요 \n");
			scanf_s("%d", &num);
		}
		sum += num; // 수의 합 
		num = 0;
		cnt++;
	}
	printf("%d", sum); 
	return 0;

}