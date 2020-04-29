// 문자열 정렬
#include <stdio.h>
#include <string.h>
int main()
{
	char town[5][10];
	char tmp[10];
	int i, j, n;
	n = sizeof(town) / sizeof(char[10]);

	puts("---------------------");
	puts(" **문자열 정렬** ");
	puts("-----------------------");

	//1.입력
	printf(" 살고 싶은 동네 [%d]개동 입력 \n", n);
	puts("---------------------------------");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]번째 동이름 : ", i);
		fflush(stdin);
		gets(town[i]);
	}
	puts("-------------------------------------");

	//2.원본 출력
	puts(" \n **원 본 출 력 ** ");
	for (i = 0; i < n; i++)
		printf("town[%d] ==> %s \n", i, town[i]);
	puts("----------------------------------");

	//3. 거품정렬(Bubble sort)
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(town[j], town[j + 1]) > 0)
			{
				strcpy_s(tmp, sizeof(tmp), town[j]);
				strcpy_s(town[j], sizeof(town[j]), town[j + 1]);
				strcpy_s(town[j + 1], sizeof(town[j + 1]), tmp);
			}
		}
	}

	//4. 정렬후 출력
	puts(" \n **정렬후 출 력 ** ");
	for (i = 0; i < n; i++)
		printf("town[%d] ==> %s \n", i, town[i]);
	puts("----------------------------------");

	return 0;

}