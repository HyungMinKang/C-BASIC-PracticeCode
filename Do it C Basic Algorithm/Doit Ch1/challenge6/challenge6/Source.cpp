#include <stdio.h>

int H = 60 * 60;
int M = 60;

void SecToHMS(int sec)
{
	int h, m, s;

	h = sec/H;
	sec = sec % H;

	m = sec / M;
	sec = sec % M;

	s = sec;

	printf("h:%d, m:%d, s:%d \n", h, m, s);

}

int main(void)
{	
	int sec;
	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf_s("%d", &sec);
	
	SecToHMS(sec);
	
	return 0;
}