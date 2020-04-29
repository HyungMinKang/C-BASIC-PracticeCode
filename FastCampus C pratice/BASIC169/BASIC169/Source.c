#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	int grade;
	char name[50][50];
	int a[3] = { 0 };
	int n,i;
	int p;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %d", name[i][50], &grade);
		
		if (a[0] < grade)
		{
			a[2] = a[1];
			a[1] = a[0];
			a[0] = grade;
		}
		else if (a[1] < grade)
		{
			a[2] = a[1];
			a[1] = grade;
		}
		else if (a[2] < grade)
		{
			a[2] = a[1];
			p=i;
		}
	}

	printf("%s", name[p][50]);
	return 0;
	
}