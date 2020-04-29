#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int nation_stduent[1000];
typedef struct olympiad
{
	int nation;
	int stdi;
	int score;

}Ol;

int main(void)
{
	int i,j,n;
	int tmp;
	scanf("%d", &n); //학생수 입력
	Ol* inf = (Ol*)malloc(sizeof(Ol)*n);
	for (i = 0; i < n; i++)  //n개의 학생정보 입력
	{
		scanf("%d", &inf[i].nation);
		scanf("%d", &inf[i].stdi);
		scanf("%d", &inf[i].score);

	}

	for (i = 0; i < n; i++)  //점수순 구조체 정렬 
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (inf[j].score > inf[j+1].score)
			{
				tmp = inf[j].score;
				inf[j].score = inf[j + 1].score;
				inf[j + 1].score = tmp;

				tmp = inf[j].nation;
				inf[j].nation = inf[j + 1].nation;
				inf[j + 1].nation = tmp;

				tmp = inf[j].stdi;
				inf[j].stdi = inf[j + 1].stdi;
				inf[j + 1].stdi = tmp;
			}
		}
	}
	printf("%d %d\n", inf[n-1].nation, inf[n-1].stdi);
	printf("%d %d\n", inf[n-2].nation, inf[n-2].stdi);
	if (inf[n-1].nation == inf[n - 2].nation && inf[n - 2].nation == inf[n - 3].nation)
	{
		for (i = n - 4; i >= 0; i--)
		{
			if (inf[i].nation != inf[n-1].nation)
			{
				printf("%d %d", inf[i].nation, inf[i].stdi);
				return 0;
			}
		}
	}
	else
	{
		printf("%d %d", inf[n - 3].nation, inf[n - 3].stdi);
	}
	return 0;
}