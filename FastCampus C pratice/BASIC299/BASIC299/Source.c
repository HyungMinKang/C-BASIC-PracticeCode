#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct word
{
	char content[101];
	int size;
}word;

word* word1[10000];
char question[100];
int sum[10000] ;
int main(void)
{	
	
	int i, j, n, m;
	
	
	scanf("%d %d", &n, &m);

	for (i = 1; i <= n; i++)
	{	
		
		gets(word1[i]->content);
		scanf("%d",  &word1[i]->size);
	}

	for (i = 1; i <= m; i++)
	{
		fgets(question, 100,stdin);
		for (j = 1; j <= n; j++)
		{
			if (question == word1[j]->content && word1[j]->size!=0)
			{
				sum[i] += word1[j]->size;
				break;

			}
		}
	}

	for (i = 1; i <= m; i++)
	{
		printf("%d \n", sum[i]);
	}
}