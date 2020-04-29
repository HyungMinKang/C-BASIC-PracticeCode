// 2장 05 정수 정렬

#include <stdio.h>
int main(void)
{
	int a[] = { 65,25,45,35,55 };
	int i, j, tmp, n;
	n = sizeof(a) / sizeof(int);

	puts("---------------------");
	puts(" *정수 정렬 * ");
	puts("---------------------");

	// 원본 출력 
	puts(" **원 본 출 력 **");
	for (i = 0; i < n; i++)
		printf("a[%d] = %d \n", i, a[i]);

	//선택정렬 (Selection sort)
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 2; j < n; j++)  // j= i+2 == 적당한 값 선택후 맨앞으로 보냄 -> 이후 버블정렬과 유사 
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	//원본 출력
	puts(" \n **정렬후 출력 ** ");
	for (i = 0; i < n; i++)
		printf("a[%d] = %d \n", i, a[i]);
	puts("---------------------");
	return 0;
}