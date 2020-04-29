// 정수 2차원 배열의 초기화

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
	//int c[2][]={1,2,3,4,5,6); 에러
	// 2차원 배열은 열(col)을 반드시 명시해줘야 함 
	

	puts(" Result of Array a");
	Show(a, 2, 3);

	puts("\n Result of Array aa");
	Show(aa, 2, 3);

	puts("\n Result of Array b");
	Show(b, 2, 3);
	
}