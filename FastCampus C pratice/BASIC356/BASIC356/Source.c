#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{	
	int cnt = 0;
	int a, b;
	scanf("%d %d", &a, &b);
	int ob ;
	if (a > b)
		ob = a - b;
	else if (a < b)
		ob = b - a;
	
	while (ob!=0)
	{	
		while (1)
		{
			if(ob - 10<0)
				break;
			else
			{	
				ob = ob - 10;
				cnt++;
			}
		}
		if (ob == 9)
		{
			cnt += 2;
			break;
		}

		if (ob == 8)
		{
			cnt += 3;
			break;
		}

		while (1)
		{
			if (ob - 5 <0)
				break;
			else
			{
				ob = ob- 5;
				cnt++;
			}
		}

		if (ob == 4)
		{
			cnt = cnt + 2;
			break;
		}
		cnt = cnt + ob;
		break;
	}
	printf("%d", cnt);
	return 0;
}