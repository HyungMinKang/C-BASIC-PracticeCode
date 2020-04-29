#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct schedule
{
	char name[110];
	int year;
	int month;
	int day;
	
}schedule;

int main()
{	
	int i, j,n,tmp;
	schedule sch[110] = { 0 };
	char tmp1[110];
	
	scanf("%d", &n);
	for (i = 1; i <= n; i++) //스케쥴 입력
	{	
		
		scanf("%s", sch[i].name);
		scanf("%d %d %d", &sch[i].year, &sch[i].month, &sch[i].day);
	}

	// 정렬방법 1순위 year, 2순위 month, 3순위 day, 4순위 스케쥴명
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n-1; j++)
		{
			if (sch[j].year > sch[j + 1].year)
			{
				tmp = sch[j].year;
				sch[j].year = sch[j + 1].year;
				sch[j + 1].year = tmp;

				tmp = sch[j].month;
				sch[j].month = sch[j + 1].month;
				sch[j + 1].month = tmp;

				tmp = sch[j].day;
				sch[j].day = sch[j + 1].day;
				sch[j + 1].day = tmp;

				strcpy(tmp1, sch[j].name);
				strcpy(sch[j].name, sch[j + 1].name);
				strcpy(sch[j + 1].name, tmp1);
			}
			else if(sch[j].year== sch[j+1].year)
			{
				if (sch[j].month > sch[j + 1].month)
				{

					tmp = sch[j].month;
					sch[j].month = sch[j + 1].month;
					sch[j + 1].month = tmp;

					tmp = sch[j].day;
					sch[j].day = sch[j + 1].day;
					sch[j + 1].day = tmp;

					strcpy(tmp1, sch[j].name);
					strcpy(sch[j].name, sch[j + 1].name);
					strcpy(sch[j + 1].name, tmp1);
				}

				else if (sch[j].month == sch[j + 1].month)
				{
					if (sch[j].day > sch[j + 1].day)
					{

						tmp = sch[j].day;
						sch[j].day = sch[j + 1].day;
						sch[j + 1].day = tmp;

						strcpy(tmp1, sch[j].name);
						strcpy(sch[j].name, sch[j + 1].name);
						strcpy(sch[j + 1].name, tmp1);
					}
					else if (sch[j].day == sch[j + 1].day)
					{
						if (strcmp(sch[j].name, sch[j + 1].name) > 0)
						{
							strcpy(tmp1,sch[j].name);
							strcpy(sch[j].name, sch[j+1].name);
							strcpy(sch[j + 1].name, tmp1);
						}
					}
				}
			}
		}
	}
	for (i = 1; i <=n; i++)
	{
		printf("%s \n", sch[i].name);
		
	}
	

	return 0;
}