#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[1000];
int main(void)
{	
	
	int i,room=0;
	int s, y ,n,k;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &s, &y);
		if (s == 1)
		{
			arr[y * 2]++;
		}
		else 
		{
			
			arr[y * 2 - 1]++;
		}
	}

	for (i = 1; i <= 12; i++)
	{
		while (arr[i] > 0)
		{
			arr[i] = arr[i] - k;
			room++;
		}
	}

	printf("%d", room);

}
