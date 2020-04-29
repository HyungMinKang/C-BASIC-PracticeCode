#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct stdinf
{
	char code;
	int stdnum;
	char name[11];
	
}stdinf;

int arr[11000];
char name[11000][11000];

int main(void)
{	
	
	
	int i, j, n, tmp;
	int index1, index2, index3, index4, index5;
	char tmp1[11];
	scanf("%d", &n);
	struct stdinf * std;
	std== (struct stdinf*)malloc(sizeof(struct stdinf) * n);
	for (i = 1; i <= n; i++) //입력사제 코드, 수험번호, 이름 입력
	{	
		scanf("%c %d %s", &std[i].code, &std[i].stdnum, std[i].name);
		
	}

	scanf("%d %d %d %d %d", &index1, &index2, &index3, &index4, &index5);

	
	for (i = 1; i <= n ; i++)
	{
		if (std[i].code == 'I')
		{
			if (arr[std[i].stdnum] == 0)
			{
				arr[std[i].stdnum] = std[i].stdnum;
				strcpy(name[arr[std[i].stdnum]], std[i].name);
			}
			else
			{
				continue;
			}
		}
		else if (std[i].code == 'D')
		{
			if (arr[arr[std[i].stdnum]]!= 0)
			{
				arr[arr[std[i].stdnum]] = 0;

			}
			else
			{
				continue;

			}
		}
	}
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - 1; j++)
		{
			
			if (arr[j] >arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp;

				strcpy(tmp1, name[j]);
				strcpy(name[j], name[j+1]);
				strcpy(name[j + 1], tmp1);
			}
		}
	}

	for (i = 1; i <= n; i++)
	{
		if (arr[arr[std[i].stdnum]] != 0)
		{
			
			printf("%d %s \n", arr[arr[std[i].stdnum]], name[arr[std[i].stdnum]]);
			
		}
	}

	return 0;
}