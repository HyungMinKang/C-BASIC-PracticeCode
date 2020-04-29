#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[10000001];
 

int f(long long int k)
{
	if (k > 10000000)
	{
		if (k % 2 == 0)
			return f(k / 2)+1;
		else
			return f((3 * k) + 1)+1;
	}
	
	if (k == 1)
	{
		return 1;
	}
	else {
		if (arr[k])
			return arr[k];
		
		
		if (k % 2 == 0)
		{
			arr[k] = f(k / 2)+1;
			return arr[k];
		}
		else
		{
			arr[k] = f((3 * k) + 1)+1;
			return arr[k];
		}
	}
}

int main()
{	
	int result;
	long long int a,b;
	int Max = -1;
	int len;
	long long int ubasku;
	scanf("%lld %lld", &a,&b);
	for (long long int i = a; i <= b; i++)
	{
		if (!arr[i])
		{
			len = f(i);
		}
		else
			continue;
		if (Max < len)
		{
			Max = len;
			ubasku = i;
		}
	}

	printf("%lld %d", ubasku, Max);
	return 0;
}