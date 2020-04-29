#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[20] = "cpp";
	printf(" cpp= %s \n\n", c);
	strcat_s(c, sizeof(c),"programming");
	printf("cpp=%s \n\n", c);

	return 0;
}