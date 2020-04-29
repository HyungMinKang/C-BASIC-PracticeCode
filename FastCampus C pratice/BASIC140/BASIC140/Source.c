#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	long int n;
	long int a;
	scanf("%ld", &n);
	a = sqrt(n);
	
	printf("%ld %ld", n-(a*a) ,a);

	return 0;
}

//¸ð¹ü source
#include <stdio.h>

int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 1; ; i++)
	{
		if (n >= i * i && n < (i + 1) * (i + 1))
		{
			printf("%d %d", n - i * i, i);
			return 0;
		}
	}
}
