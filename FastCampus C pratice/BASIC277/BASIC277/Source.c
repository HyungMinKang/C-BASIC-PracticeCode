#include <stdio.h>

int gcd(int p, int q) { if (p == 0) return q; return gcd(q % p, p); }

long long int lcm(int a, int b)
{
	return (long long int)a * b / gcd(a, b);
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%lld\n", lcm(a, b));
}
