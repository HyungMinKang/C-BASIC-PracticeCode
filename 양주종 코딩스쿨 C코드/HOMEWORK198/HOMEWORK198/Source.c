// 메모리 동적할당(malloc, free 함수)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n;
	printf(" 처리할 데이터 수는 : ");
	scanf_s("%d", &n);

	int* p = (int*)malloc(sizeof(int) * n);
	if (p == NULL)
	{
		puts(" 동적할당 실패 !!! ");
	}

	printf("%d개의 정수 입력 \n\n", n);
	for (i = 0; i < n; i++)
	{
		printf(" [%d]번 쨰 정수: ", i);
		scanf_s("%d", p + i);
	}

	printf("\n %d의 정수 출력 \n", n);
	for (i = 0; i < n; i++)
	{
		printf("[%d] ==> %d \n", i, *(p+i));
	}

	free(p);
	return 0;
}