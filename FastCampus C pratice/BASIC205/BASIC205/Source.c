#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, rowlim, collim;
	int s, v = 0, i, j;
	int arr[110][110] = { 0 };
	scanf("%d %d", &n, &m);
	rowlim = m;
	collim = n-1;
	s = m+1;
	v = n;
	int val = 0, ipx = -1;

	while (val <n*m)
	{
		//row �Է�
		for (i = 1; i <= rowlim; i++)
		{
			val++;
			s = s + ipx;
			arr[v][s] = val;

		}
		rowlim--;
		
		//columt �Է�
		for (i = 1; i <= collim; i++)
		{
			val++;
			v = v + ipx;
			arr[v][s] = val;
		}
		collim--;
		ipx = ipx * -1;

		
	}


	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;

}