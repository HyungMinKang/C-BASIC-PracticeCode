#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[100001];

int stair(int n) {                   
	
	if (n < 0)
		return 0;

	if (n == 0)
	{
		return 1;
	}
	else
	{
		if (!arr[n])
		{
			arr[n] = (stair(n - 3) + stair(n - 2) + stair(n - 1)) % 1000;
		}
		return arr[n];
	}
}	

int main() {
	int num;
	
	scanf("%d", &num);
	printf("%d", stair(num));  
}