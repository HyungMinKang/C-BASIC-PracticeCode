#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n,i,a;
	scanf("%d", &n);
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if(a%5==0)
			sum += a;
	}
	printf("%d", sum);

}