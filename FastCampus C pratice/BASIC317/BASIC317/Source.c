#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int N, M;
char question[20];

typedef struct wordcount {

	char word[101];
	int count;
}wordcount;

int main()
{	
	int i;
	int j;
	int* cnt;
	int res=0;
	
	wordcount* WC;
	scanf("%d %d", &N, &M);
	WC = (struct wordcount*)calloc(N +10, sizeof(struct wordcount));
	cnt = (int*)calloc(M+10, sizeof(int));
	for (i = 0; i < N; i++)
	{
		scanf("%s", &WC[i].word);
		getchar();
		scanf("%d", &WC[i].count);
	}
	
	
	for (i = 0; i < M; i++)
	{	
		res = 0;
		scanf("%s", &question);
		
		
		for (j = 0; j < N; j++)
		{
			if (strcmp(question, WC[j].word) ==0)
			{
				res += WC[j].count;
			}
		}
		cnt[i] = res;
	}

	for (i = 0; i < M; i++)
	{
		printf("%d \n", cnt[i]);
	}

	free(WC);
	free(cnt);
	return 0;
}