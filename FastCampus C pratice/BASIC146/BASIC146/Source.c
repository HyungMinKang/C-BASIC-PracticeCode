#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char c[1000];
	gets(c);
	int len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		if (c[i] >= 65 && c[i] <= 90)
			printf("%c", c[i] + 32);
		else if (c[i] >= 97 && c[i] <= 122)
			printf("%c", c[i] - 32);
		else
			printf("%c", c[i]);
	}

	return 0;
}


//모범답안
#include <stdio.h>

int main()
{
	char str[1000], i;

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
			printf("%c", str[i] - 32);
		else if ('A' <= str[i] && str[i] <= 'Z')
			printf("%c", str[i] + 32);
		else
			printf("%c", str[i]);
	}
	return 0;
}
