#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char a[200];
char b[200];
int c[200];
int len1, len2;

int main(void)
{
	scanf("%s %s", a, b);
	
	len1= strlen(a);
	len2 =strlen(b);
	
	if (len1 > len2)
	{
		for (int i = 1; i <= len2; i++)
			b[len1 - i] = b[len2 - i];
		for (int i = 0; i < len1 - len2; i++)
			b[i] ='0';

		
	}

	if (len2 > len1)
	{
		for (int i = 1; i <= len1; i++)
			a[len2 - i] = a[len1 - i];
		for (int i = 0; i < len2 - len1; i++)
			a[i] ='0';

		len1 = len2;
	}
	
	for (int i = len1 - 1; i >= 0; i--) {

		c[i] = (a[i] - '0' + b[i] - '0');

		if (c[i + 1] >= 10)
		{
			c[i + 1] -= 10; 
			c[i]++;
		}
	}

	for (int i = 0; i < len1; i++)
	{
		printf("%d", c[i]);
	}
	return 0;





}