//time �Լ�

#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t t;
	// time(&t);

	t = time(NULL);

	printf("1970�� 1�� 1�� �������� �귯�½ð�: %u�� \n", t);

	return 0;
}