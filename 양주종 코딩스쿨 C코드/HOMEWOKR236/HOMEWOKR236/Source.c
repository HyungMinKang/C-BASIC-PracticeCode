// ���� 2���� �迭�� �ʱ�ȭ

#include <stdio.h>

void Show(int*arr[][3], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			printf("arr[%d][%d]=%d \n", i, j, arr[i][j]);
}

int main(void)
{
	int a[2][3] = { 0 };
	int aa[2][3];
	int b[][3] = { 1,2,3,4,5,6 };  
	//int c[2][]={1,2,3,4,5,6); ����
	// 2���� �迭�� ��(col)�� �ݵ�� �������� �� 
	

	puts(" Result of Array a");
	Show(a, 2, 3);

	puts("\n Result of Array aa");
	Show(aa, 2, 3);

	puts("\n Result of Array b");
	Show(b, 2, 3);
	
}