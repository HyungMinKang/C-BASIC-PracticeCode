#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n,i,a;
	int sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a);
		sum += a;
	}

	printf("%d", sum);

}