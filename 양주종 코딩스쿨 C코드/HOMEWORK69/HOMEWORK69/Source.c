// 문자열 정렬

#include <stdio.h>
#include <string.h>
int main(void)
{
	char city[5][10] = { "부 산","대 구","창 원","목 포","여 수" };
	char tmp[10];
	int i, j, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("---------------");
	puts(" 문자열 정렬 ");
	puts(" ---------------");
	
	//1. 원본출력 
	puts("\n 원본 출력 ");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);

	//2. 정렬
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(city[i], city[j]) > 0)
			{
				strcpy_s(tmp, sizeof(city[i]), city[i]);    // strcpy_s(매개변수1, 사이즈크기, 매겨변수2)
				strcpy_s(city[i], sizeof(city[i]), city[j]);
				strcpy_s(city[j], sizeof(city[i]), tmp);
			}

		}
	}
	puts("---------------------");

	//3 정렬후 출력
	puts(" \n 정렬후 출력");
	for (i = 0; i < n; i++)
		printf("city[%d] ==> %s \n", i, city[i]);
	puts("-------------------");
	puts(" strcmp은 문자열 비교함수, strcpy는 문자열 복사 함수");
	puts("--------------------------");

	return 0;
}
