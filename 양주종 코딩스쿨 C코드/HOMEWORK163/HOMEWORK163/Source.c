#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "My Name is Yang Ju Jong";

	printf(" �� �� = %s \n\n", s);
	printf(" Y�� ã�� = %s \n", strchr(s, 'Y'));

	return 0;
}