#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char bowl[52];

int main(void)
{
	
	scanf("%s", &bowl);
	int len = strlen(bowl);
	int cnt = 1;
	int height = 10;
	while (cnt < len)
	{
		if (bowl[cnt] == '(')
		{	
			if (bowl[cnt - 1] == '(')
			{
				height += 5;
				cnt++;
			}
			else
			{
				height += 10;
				cnt++;
			}
			while (bowl[cnt] == '(')
			{
				
				height += 5;
				cnt++;
			}
			
		}
		else
		{	
			if (bowl[cnt - 1] == ')')
			{
				height += 5;
				cnt++;
			}
			else
			{
				height += 10;
				cnt++;
			}
			while (bowl[cnt] == ')')
			{
				height += 5;
				cnt++;
			}
		}
	}
	
	printf("%d", height);
}