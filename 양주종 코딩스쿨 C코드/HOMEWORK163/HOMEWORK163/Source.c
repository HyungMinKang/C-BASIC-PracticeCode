#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "My Name is Yang Ju Jong";

	printf(" 원 본 = %s \n\n", s);
	printf(" Y를 찾고 = %s \n", strchr(s, 'Y'));

	return 0;
}