//다중 if문

#include <stdio.h>

int main(void)
{
	int score;
	puts("--------------------");
	puts(" *다중 if문 * ");
	puts(" -------------------");

	do {
		printf(" Enter score : ");
		scanf_s("%d", &score);
	} while (score > 100 || score < 0);

	if (score >= 90)
		printf(" score: %d , 수 \n", score);
	else if (80 <= score && score < 90)
		printf("score: %d, 우 \n", score);
	else if (70 <= score && score < 80)
		printf("score: %d, 미 \n", score);
	else if (60 <= score && score < 70)
		printf("score: %d, 양 \n", score);
	else
		printf(" score: %d, 가 \n", score);

	puts("----------------------------------");
	puts(" 아래로 내려갈수록 깔데기 처럼 범위 좁아진다");
	puts(" 참 거짓을 구분하고 다시 거짓을 가지고 반복한다");
	puts("---------------------------------------------");

	return 0;
}