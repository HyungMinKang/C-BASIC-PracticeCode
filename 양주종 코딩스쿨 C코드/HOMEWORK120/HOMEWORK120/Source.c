//���� if��

#include <stdio.h>

int main(void)
{
	int score;
	puts("--------------------");
	puts(" *���� if�� * ");
	puts(" -------------------");

	do {
		printf(" Enter score : ");
		scanf_s("%d", &score);
	} while (score > 100 || score < 0);

	if (score >= 90)
		printf(" score: %d , �� \n", score);
	else if (80 <= score && score < 90)
		printf("score: %d, �� \n", score);
	else if (70 <= score && score < 80)
		printf("score: %d, �� \n", score);
	else if (60 <= score && score < 70)
		printf("score: %d, �� \n", score);
	else
		printf(" score: %d, �� \n", score);

	puts("----------------------------------");
	puts(" �Ʒ��� ���������� �򵥱� ó�� ���� ��������");
	puts(" �� ������ �����ϰ� �ٽ� ������ ������ �ݺ��Ѵ�");
	puts("---------------------------------------------");

	return 0;
}