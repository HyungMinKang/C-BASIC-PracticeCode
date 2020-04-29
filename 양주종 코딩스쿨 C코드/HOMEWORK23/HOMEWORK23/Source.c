// 정수배열 입출력

#include <stdio.h>

int main(void)
{
	int bus[5];
	int i, n;
	n = sizeof(bus) / sizeof(int);

	puts("------------------------");
	puts(" **정수배열 입출력 **");
	puts("------------------------");

	for (i = 0; i < n; i++)
	{
		printf("[%d]번쨰 버스번호는: ", i);
		scanf_s("%d", &bus[i]);
	}

	printf("\n *[%d] 개의 버스번호 출력: ", n);
	puts("------------------------");
	for (i = 0; i < n; i++)
		printf("bus[%d]= %d번 \n",i,bus[i]);
	puts("------------------------");
	puts("C언어는 항상 0을 카운트 합니다");
	puts("------------------------");

	return 0;
}