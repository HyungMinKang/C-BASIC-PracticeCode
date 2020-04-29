#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h, m;
	int addh=0;
	int time;
	scanf("%d %d", &h, &m);
	scanf("%d", &time);
	if (time > 60)
	{
		while (time > 60)
		{
			time = time - 60;
			addh++;
		}
		h = h + addh;
		m = m + time;
	
		if (m > 60)
		{
			m = m - 60;
			h = h + 1;

			if (h == 24 && m == 0)
			{
				printf("%d %d", 24, m);
				return 0;
			}
			else if (h == 24 && m != 0)
			{
				h = h - 24;
				printf("%d %d", h, m);
				return 0;
			}

			else if (h > 24)
			{

				h = h - 24;
				printf("%d %d", h, m);
			}
			else {
				printf("%d %d", h, m);
			}

		}
		else
		{
			if (h == 24 && m == 0)
			{
				printf("%d %d", 24, m);
				return 0;
			}
			else if (h == 24 && m != 0)
			{
				h = h - 24;
				printf("%d %d", h, m);
				return 0;
			}

			else if (h > 24)
			{

				h = h - 24;
				printf("%d %d", h, m);
			}
			else {
				printf("%d %d", h, m);
			}
		}
		
		return 0;
	}
	else
	{
		h = h + addh;
		m = m + time;

		if (m > 60)
		{
			m = m - 60;
			h = h + 1;

			if (h == 24 && m == 0)
			{
				printf("%d %d", 24, m);
				return 0;
			}
			else if (h == 24 && m != 0)
			{
				h = h - 24;
				printf("%d %d", h, m);
				return 0;
			}

			else if (h > 24)
			{
				h = h - 24;
			}
			else {
				printf("%d %d", h, m);
			}
			return 0;

		}
		else
		{
			if (h == 24 && m == 0)
			{
				printf("%d %d", 24, m);
				return 0;
			}
			else if (h == 24 && m != 0)
			{
				h = h - 24;
				printf("%d %d", h, m);
				return 0;
			}

			else if (h > 24)
			{
				h = h - 24;
			}
			else {
				printf("%d %d", h, m);
			}
		}
	}

	
}