// 2��- 02 �����迭 �����

#include<stdio.h>
int main(void)
{
	int score[5];
	int i, n;
	n = sizeof(score) / sizeof(int);

	puts("---------------------");
	puts(" ** �����迭�� ����� **");
	puts("---------------------");

	printf("[%d]���� ���� �Է� \n", n);
	for (i = 0; i < n; i++)
	{
		printf("%d��° score �Է�: ", i);
		scanf_s("%d", &score[i]);
	}

	puts(" ** �� �� ** ");
	for (i = 0; i < n; i++)
		printf("score %d = %d \n", i, score[i]);

	puts("---------------------");
	puts("�迭�� �׻� 0���� ī��Ʈ");
	puts("---------------------");

	return 0;
}