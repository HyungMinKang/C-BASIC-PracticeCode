#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n;
	scanf("%d", &n);
	char ez = 'F';
	int gan = 9;


	int len;
	if (n >= 2013)
	{
		len = n - 2013;

		for (i = 0; i < len; i++)
		{
			if (gan == 9)
			{
				gan = 0;
			}
			else
			{
				gan++;
			}

			if (ez == 'L')
			{
				ez = 'A';
			}
			else
			{
				ez = ez + 1;
			}
		}
	}
	else
	{
		len = 2013 - n;
		for (i = len; i >0; i--)
		{
			if (gan == 0)
			{
				gan = 9;
			}
			else
			{
				gan--;
			}

			if (ez == 'A')
			{
				ez = 'L';
			}
			else
			{
				ez = ez - 1;
			}

		}
	}
	

	printf("%c%d", ez, gan);
	return 0;
}
