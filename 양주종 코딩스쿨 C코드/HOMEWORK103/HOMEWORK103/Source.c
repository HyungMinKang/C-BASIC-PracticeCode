// 구조체 정렬

#include<stdio.h>
#include<string.h>
typedef struct Tv
{
	char bcast[20]; //broadcast
	int chan; //channel
}Tv;

int main(void)
{
	Tv t[5] = { {"YTN", 25},{"SBS",6},{"EBS",13},{"MBC",11},{"KBS",9} };
	int i, j, n;
	Tv tmp;
	n = sizeof(t) / sizeof(Tv);

	puts("--------------------");
	puts(" *구조체 정렬* ");
	puts("---------------------");

	//1.원본 출력
	puts(" ---원 본 출 력---");
	puts(" **T V ** ");
	puts(" -------------------");
	for (i = 0; i < n; i++)
		printf(" [%d]번 %s ==> %2d번 \n", i + 1, t[i].bcast, t[i].chan);
	puts("-------------------\n");

	//2. 방송국순 정렬(문자열 기준 정렬)
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(t[j].bcast, t[j + 1].bcast) > 0)
			{
				tmp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = tmp;
			}
		}
	}

	//3. 방송국순 출력
	puts(" --- 방송국순 ---");
	puts(" **T V ** ");
	puts(" -------------------");
	for (i = 0; i < n; i++)
		printf(" [%d]번 %s ==> %2d번 \n", i + 1, t[i].bcast, t[i].chan);
	puts("-------------------\n");

	//4. 채널순 정렬(정수기준 정렬)
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (t[j].chan > t[j + 1].chan)
			{
				tmp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = tmp;
			}
		}
	}

	//5 채널순 출력
	puts(" --- 채널순 ---");
	puts(" **T V ** ");
	puts(" -------------------");
	for (i = 0; i < n; i++)
		printf(" [%d]번 %s ==> %2d번 \n", i + 1, t[i].bcast, t[i].chan);
	puts("-------------------\n");

	return 0;
}