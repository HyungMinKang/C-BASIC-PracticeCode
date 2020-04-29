#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "My.Name is - Yang Ju,Jong";
	char* tok;
	char* context;
	printf(" S= %s \n", s);
	tok = strtok_s(s, ",.-",&context);

	while (tok != NULL)
	{
		printf("%s \n", tok);
		tok = strtok_s(NULL, " , . -",&context);
	}

	return 0;
}