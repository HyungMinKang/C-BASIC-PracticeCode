#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char p[200];
	int i = 0;
	gets(p);
	int cnt = strlen(p);
	for(i=0;i<cnt;i++)
	{	
		
		if (p[i] == ' ')
			printf(" ");
		else if (p[i] == 'x')
			printf("a");
		else if (p[i] == 'y')
			printf("b");
		else if (p[i] == 'z')
			printf("c");
		else
			printf("%c", p[i]+3);
		
		
	}


}


//시저의 암호 2
#include <stdio.h>

int main()
{
	char chr;

	while (scanf("%c", &chr) != EOF)
	{
		if (chr == ' ')
			printf(" ");
		else if (chr <= 'w')
			printf("%c", chr + 3);
		else if (chr == 'x')
			printf("a");
		else if (chr == 'y')
			printf("b");
		else if (chr == 'z')
			printf("c");
	}
	return 0;
}


// 시저의 암호1
#include <stdio.h>

int main()
{
	char chr;

	while (scanf("%c", &chr) != EOF)
	{
		if (chr == ' ')
			printf(" ");
		else if (chr >= 'd')
			printf("%c", chr - 3);
		else if (chr == 'a')
			printf("x");
		else if (chr == 'b')
			printf("y");
		else if (chr == 'c')
			printf("z");
	}
	return 0;
}