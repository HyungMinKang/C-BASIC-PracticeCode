#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "qwertyuiopasdfghijklzxcvbnm";

	printf(" ¿øº»= %s \n\n", str);
	printf(" %s \n", strstr(str, "kl"));

	return 0;
}