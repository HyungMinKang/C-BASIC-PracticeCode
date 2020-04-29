#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int div;
	scanf("%d %d %d", &a, &b, &c);
	div = a;
	while (1)
	{
		if (a % div == 0 && b % div == 0 && c % div == 0)
		{
			break;
		}
		else
		{
			div--;
		}
	}
	printf("%d", div);
}


/*
#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main ()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	printf("%d", gcd(gcd(a,b),c));

	return 0;
}*/