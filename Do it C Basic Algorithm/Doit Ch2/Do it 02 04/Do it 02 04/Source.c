#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int* a; //배열의 첫번쨰 요소의 포인터
	int na; //배열의 요소 개수
	printf("요소개수: ");
	scanf("%d", &na);
	a = calloc(na, sizeof(int));

	if (a == NULL)
	{
		puts("메모리 할당 실패");
	}
	else {
		printf("%d개의 정수를 입력하세요 \n", na);
		for (i = 0; i < na; i++)
		{
			printf("a[%d]: ", i);
			scanf("%d", &a[i]);
		}
	}
	printf("결과 출력 \n");
	for (i = 0; i < na; i++)
		printf("a[%d]=%d\n", i, a[i]);
	free(a); //할당했던 메모리 해제

	return 0;
}

