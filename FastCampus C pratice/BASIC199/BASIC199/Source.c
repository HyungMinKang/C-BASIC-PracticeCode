#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, rowlim, collim;
	int s=0, v=1,i,j;
	int arr[101][101];
	scanf("%d %d", &n, &m);
	rowlim = m;
	collim = n-1;
	int val = 0, ipx=1;

	while (val<n*m)
	{
		//row 입력
		for (i = 1; i <= rowlim; i++)
		{
			val++;
			s = s + ipx;
			arr[v][s] = val;

		}
		rowlim=rowlim-1;


		//columt 입력
		for (i = 1; i <= collim; i++)
		{
			val++;
			v = v + ipx;
			arr[v][s] = val;
		}
		collim=collim-1;

		ipx = ipx * -1;
	}


	for (i = 1; i <=n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;

}