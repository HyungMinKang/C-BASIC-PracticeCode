#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i,res=0;
	int std, app;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &std, &app);
		while (app/std!=0)
		{
			app = app - std;
		}
		res= res + app;
	}

	printf("%d", res);

}