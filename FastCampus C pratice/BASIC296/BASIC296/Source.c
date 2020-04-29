#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct stdinf
{
	char name[11];
	int score1;
	int score2;
	int score3;

}stdinf;

int i, j,max=0, index=0;
int main(void)
{
	stdinf stdinf[110] = { 0 };
	char rankname[11];
	int n,tmp,rankscore1,rankscore2;
	int index1, index2;
	scanf("%d", &n); //학생수
	for (i = 1; i <= n; i++) // 학생정보 입력
	{
		scanf("%s", stdinf[i].name);
		scanf("%d %d %d", &stdinf[i].score1, &stdinf[i].score2, &stdinf[i].score3);
	}

	//첫번쨰 과목은 최대값 찾기 두번쨰 세번쨰 과목은 정렬 필요
	max = stdinf[0].score1;
	
	for (i = 1; i <= n; i++)
	{
		if (stdinf[i].score1 > max)
		{
			max = stdinf[i].score1;
			index = i;
		}
	}
	strcpy(rankname, stdinf[index].name);
	rankscore1 = stdinf[index].score2;
	rankscore2 = stdinf[index].score3;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n ; j++)
		{
			if (stdinf[j].score2 < stdinf[j + 1].score2)
			{
				tmp = stdinf[j].score2;
				stdinf[j].score2 = stdinf[j + 1].score2;
				stdinf[j + 1].score2 = tmp;
			}
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n ; j++)
		{
			if (stdinf[j].score3 < stdinf[j + 1].score3)
			{
				tmp = stdinf[j].score3;
				stdinf[j].score3 = stdinf[j + 1].score3;
				stdinf[j + 1].score3 = tmp;
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		if (stdinf[i].score2 == rankscore1)
		{
			index1 = i;
			break;

		}
	}
	for (i = 1; i <= n; i++)
	{
		if (stdinf[i].score3 == rankscore2)
		{
			index2 = i ;
			break;

		}
	}
	printf("%s %d %d", rankname, index1, index2);

	return 0;
}