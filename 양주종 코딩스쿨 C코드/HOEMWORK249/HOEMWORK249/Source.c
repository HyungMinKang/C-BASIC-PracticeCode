//C언어 main함수의 인수

#include <stdio.h>

int main(int x, char* y[])
{
	int i;

	printf(" main 함수 인수의 개수: %d개 \n", x);

	for (i = 0; i < x; i++)
	{
		printf(" %d번쨰 인수 ==> %s \n", i, y[i]);
	}

	return 0;
}