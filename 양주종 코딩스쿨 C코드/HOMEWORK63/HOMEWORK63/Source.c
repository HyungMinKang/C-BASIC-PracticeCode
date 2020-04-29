// 2장-03 정수배열 입출력 고급

#include <stdio.h>
int main()
{
	int score[5];
	int i, n;
	n = sizeof(score) / sizeof(int);

	puts("---------------------");
	puts(" * 정수배열 입출력 * ");
	puts("---------------------");

	printf("%d명의 점수 입력 \n", n);
	puts("---------------------");
	for (i = 0; i < n; i++)
	{
		do {
			printf(" %d번쨰 score 입력: ", i);
			scanf_s("%d", &score[i]);
		} while (score[i] < 0 || score[i]>100); // 입력값이 0보다 작거나 100보다 크면 반복== 다시 입력
	}

	puts(" ** 출력 **");
	for (i = 0; i < n; i++)
		printf("score %d= %d \n", i, score[i]);

	puts("---------------------");
	puts(" 0~100사이 값의 입력만 인정하겠다");
	puts("---------------------");
	
	return 0;
}