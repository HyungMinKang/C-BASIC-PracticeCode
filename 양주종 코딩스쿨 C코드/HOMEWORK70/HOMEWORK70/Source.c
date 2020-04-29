// 문자열 정렬
#include<stdio.h>
#include<string.h>
int main()
{
	char city[5][10];
	char tmp[10];
	int i, j, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("----------------");
	puts(" 문자열 정렬");
	puts("----------------");

	//1 입력
	printf(" 살고 싶은 도시 [%d] 곳 입력 \n", n);
	for (i = 0; i < n; i++)
	{
		printf("[%d]번쨰 도시: ", i);
		fflush(stdin);
		gets(city[i]);
	}
	puts("---------------------");

	//2 원본 출력 
	puts(" \n 원본 출력");
	for (i = 0; i < n; i++)
		printf("city[%d] ==> %s \n", i, city[i]);
	puts("-------------------------");

	//3 선택정렬
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(city[i], city[j]) > 0)
			{
				strcpy_s(tmp, sizeof(tmp), city[i]);
				strcpy_s(city[i], sizeof(tmp), city[j]);
				strcpy_s(city[j], sizeof(tmp), tmp);
			}
		}
	}
	puts("------------------------");

	//4 정렬후 출력
	puts("\n 정렬후 출력");
	for (i = 0; i < n; i++)
		printf("city[%d] ==> %s \n", i, city[i]);
	puts("-------------------------");
	puts("원본출력이 안되면 점검하고 넘어가지 마세요");
	puts("--------------------------------");

	return 0;
}