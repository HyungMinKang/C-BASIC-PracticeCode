// 정수 정렬 고급

#include <stdio.h>
int main()
{
	int score[5];
	int i, j, tmp, n;
	n = sizeof(score) / sizeof(int);

	puts("--------------------");
	puts("* 정수 정렬 *");
	puts("--------------------");

	//입력
	printf(" [%d]명의 점수 입력 \n", n);
	puts("-------------------------");
	for (i = 0; i < n; i++)
	{
		do {
			printf("[%d]번째 score 입력: ", i);
			scanf_s("%d", &score[i]);
		} while (score[i] < 0 || score[i]>100);
	}

	//원본출력
	puts(" **출력 ** ");
	for (i = 0; i < n; i++)
		printf("score[%d]=%d \n ", i, score[i]);

	//선택정렬(selection sort)
	for (i = 0; i < n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (score[i] > score[j])
			{
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}

	//정렬후출력
	puts("\n **정렬후 출력 **");
	for (i = 0; i < n; i++)
		printf("score[%d]= %d \n", i, score[i]);

	puts("원본 출력에서 에러나면 넘어가지말고 해결");
	puts("-----------------------------------------");
	
	return 0;
}
