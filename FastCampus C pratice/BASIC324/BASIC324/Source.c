#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char a[200];
char b[200];
int c[200];
int z, m;

int main(void)
{
	int i;
	int al, bl;
	scanf("%s", a);
	scanf("%s", b);
	al = strlen(a);
	bl = strlen(b);

	if (al > bl)
	{	
		for (i = 1; i <= bl; i++)
			b[al - i] = b[bl - i];
		for (i = 0; i < al - bl; i++)
			b[i] = '0';
	}

	if (al < bl)
	{
		for (i = 1; i <= al; i++)
			a[bl - i] = a[al - i];
		for (i = 0; i < bl - al; i++)
			a[i] = '0';

		al = bl;
		m = 1;
	}

	if (!m && al == bl)

		for (int i = 0; i < al; i++)

			if (a[i] < b[i]) {

				m = 1;

				break;

			}
	if (m)
	{
		char t[2];
		for (i = 0; i < al; i++)
		{
			t[0] = a[i];
			a[i] = b[i];
			b[i] = t[0];
		}
	}

	for (i = al - 1; i >= 0; i--)
	{
		c[i] = (a[i] -'0' -( b[i]-'0'));

		if (c[i+1] < 0)
		{
			c[i+1] = c[i+1] + 10;
			c[i]--;
		}
	
	}
	if (m)
		printf("-");

	for (i = 0; i < al; i++)
	{	
		if (!c[i] && !z)
			continue;
		else
			printf("%d", c[i]);
			z = 1;
	}
	if (!z)
		puts("0");
	return 0;
}