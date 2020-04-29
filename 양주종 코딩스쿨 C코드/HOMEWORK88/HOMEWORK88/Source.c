// 배열의 입출력

#include <stdio.h>

int main(void)
{
	int i;
	int a[5];
	int n = sizeof(a) / sizeof(int);
	
	puts("-----------------------");
	puts(" 배열의 입출력");
	puts("------------------------");

	printf(" [%d]개의 정수 입력 \n", n);
	puts("------------------------------");
	for (i = 0; i < n; i++)
	{
		printf("[%d]번째 정수: ", i);
		scanf_s("%d", &a[i]);
	}
	puts("----------------------------");

	for (i = 0; i < n; i++)
		printf(" a[%d]= %2d, &a[%d]= %d \n", i, a[i], i, &a[i]);
	puts("------------------------------");

	puts(" 배열 index는 0부터 시작");
	puts("-------------------------");

	return 0;
}