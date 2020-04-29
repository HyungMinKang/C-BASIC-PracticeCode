#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int numA = 0, numP = 0;
	char word[50];   //세상에서 가장 긴 단어가 45글자.
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

	printf("A(a) 시작 단어 수 : %d \n", numA);
	printf("P(p) 시작 단어 수 : %d \n", numP);

	/* 파일의 종결 */
	fclose(fp);
	return 0;

}