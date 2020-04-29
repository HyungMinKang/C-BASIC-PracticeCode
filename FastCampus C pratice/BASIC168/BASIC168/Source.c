#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i=0;
	scanf("%d", &n);
	int type[100] = { 0 };
	
	for (i = 0; n>1; n = n / 2,i++)
	{
		type[i] = n % 2;
		
	}

	type[i] = n;
	
	for(int j = i; j >=0; j--)
	{
		printf("%d", type[j]);
	}

	return 0;
}



/*모범답안

#include <stdio.h>

int main()
{
	int arr[255], i = 0, j, n;

	scanf( "%d", &n );

	if ( n == 0)
	{
		printf("0");
		return 0;
	}

	while ( n > 0)
	{
		arr[ i ] = n % 2;
		n = n / 2;
		i++;
	}

	for( j = i - 1 ; j >= 0 ; j--)
		printf("%d", arr[j] );

	return 0;
}
*/