#include<stdio.h> 



int main(void)
{
	int arr[50][50];
	int i,j , s = -1, v = 0;
	int val = 0, ipx = 1;
	int len, lim;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &len);
	lim = len;



	while (1)
	{
		for (i = 0; i < lim; i++)  // ������ ���κκ� 
		{
			val++;
			s = s + ipx;
			arr[v][s] = val;
		}
		lim = lim - 1;

		if (val == len * len)
			break;
		
		
		
		for (i = 0; i < lim; i++)  // ������ ���κκ� 
		{
			val++;
			v = v + ipx;
			arr[v][s] = val;
		}

		ipx = ipx * -1;
	}
	
	for (i = 0; i < len; i++)  // ������ �迭 ���.  
	{
		for (j = 0; j < len; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}

	return 0;
}