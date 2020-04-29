#include <stdio.h>
double circle(int r)
{
	return (double)3.14 * r * r;
}
main()
{
	int r;
	scanf("%d", &r);
	printf("%.2f", circle(r));
}
