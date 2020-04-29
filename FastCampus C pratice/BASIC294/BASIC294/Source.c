#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tool
{
	int toolnum;
	int toolid;
	int toolgas;

}tool;

int main(void)
{
	tool tool[100] = { 0 };
	int n,i,j,tmp;
	scanf("%d", &n);
	for (i = 1; i <=n; i++)
	{
		
		scanf("%d %d", &tool[i].toolid, &tool[i].toolgas);
	}
	for (i = 0; i <n-1; i++)
	{
		for (j = 1; j < n; j++)
		{
			if (tool[j].toolid >tool[j + 1].toolid)
			{
				tmp = tool[j].toolid;
				tool[j].toolid = tool[j + 1].toolid;
				tool[j + 1].toolid = tmp;

				tmp = tool[j].toolgas;
				tool[j].toolgas = tool[j + 1].toolgas;
				tool[j + 1].toolgas = tmp;

			}
		}
	}

	for (i = 1; i <= n; i++)
	{
		printf("%d %d\n", tool[i].toolid, tool[i].toolgas);
	}
}