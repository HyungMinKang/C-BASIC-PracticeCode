#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int numA = 0, numP = 0;
	char word[50];   //���󿡼� ���� �� �ܾ 45����.
	FILE* fp;

	fp = fopen("file.txt", "rt");
	if (fp == NULL)
	{
		printf("file open error! \n");
		return 1;
	}

	while (1)
	{
		fscanf(fp, "%s", word);
		if (feof(fp) != 0)
			break;

		if (word[0] == 'A' || word[0] == 'a')
			numA++;

		if (word[0] == 'P' || word[0] == 'p')
			numP++;
	}

	printf("A(a) ���� �ܾ� �� : %d \n", numA);
	printf("P(p) ���� �ܾ� �� : %d \n", numP);

	/* ������ ���� */
	fclose(fp);
	return 0;

}