#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct stdinf {
	int line;
	int id;
	int mathscore;
	int infscore;

}stdinf;


int main()
{
	int n, i,j,tmp1,tmp2,tmp3; 
	scanf("%d", &n);
	stdinf std[1000];

	for (i = 1; i <= n; i++)
	{	
		std[i].id =std[i].line= i;
		scanf("%d %d", &std[i].mathscore, &std[i].infscore);
	}
	for (i = 0; i <=n; i++)
	{
		for (j = 1; j <= n ; j++)
		{
			if (std[j].mathscore < std[j + 1].mathscore)
			{
				tmp1 = std[j].line;
				std[j].line = std[j + 1].line;
				std[j + 1].line = tmp1;

				tmp1 = std[j].mathscore;
				std[j].mathscore = std[j + 1].mathscore;
				std[j + 1].mathscore = tmp1;

				tmp1 = std[j].infscore;
				std[j].infscore = std[j + 1].infscore;
				std[j + 1].infscore = tmp1;

			}
			else if (std[j].mathscore == std[j + 1].mathscore && std[j].infscore < std[j + 1].infscore)
			{
				tmp2 = std[j].line;
				std[j].line = std[j + 1].line;
				std[j + 1].line = tmp2;

				tmp1 = std[j].infscore;
				std[j].infscore = std[j + 1].infscore;
				std[j + 1].infscore = tmp1;
			}
			else if (std[j].mathscore == std[j + 1].mathscore && std[j].infscore == std[j + 1].infscore && std[j].id > std[j + 1].id)
			{
				tmp3 = std[j].line;
				std[j].line = std[j + 1].line;
				std[j + 1].line = tmp3;
			}
		}
	}
	for (i = 1; i <= n; i++)
	{	
		for(j=1; j<=n;j++)
		{
			if (std[j].id == i)
			{
				printf("%d %d %d \n", std[j].line, std[j].mathscore, std[j].infscore);
			}
			
		}
	}

	return 0;
}

