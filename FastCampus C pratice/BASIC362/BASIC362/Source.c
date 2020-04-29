#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define swap(type,x,y) do{type t=x; x=y;y=t;}while(0)

int main(void)
{
	int line1[2];
	int line2[2];
	scanf("%d %d", &line1[0], &line1[1]);
	if (line1[0] > line1[1])
	{
		swap(int, line1[0], line1[1]);
	}

	scanf("%d %d", &line2[0], &line2[1]);
	if (line2[0] > line2[1])
	{
		swap(int, line2[0], line2[1]);
	}

	if (line1[0] < line2[0] && line1[1] < line2[1] &&(line1[1]>line2[0] && line2[1]>line1[0]))
	{
		printf("cross");
		
	}
	else if (line1[0] > line2[0] && line1[1] > line2[1] && (line1[1] > line2[0] && line2[1] > line1[0]))
	{
		printf("cross");
		
	}
	else
	{
		printf("not cross");
	}

	return 0;
}