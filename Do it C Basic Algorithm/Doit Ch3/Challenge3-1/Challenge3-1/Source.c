#include <stdio.h>

void ShowArr(int(*arr)[4]); // ȸ����� ǥ�� �Լ�
void RotateArr(int(*arr)[4]); // �迭ȸ�� �Լ� 


/* �����Լ� �κ� �迭 �ʱ�ȭ �� �Լ� ȣ��*/
int main(void)
{
	int i = 0;
	int arr[4][4] = {
		{1,		2,		3,		4},
		{5,		6,		7,		8},
		{9,		10,		11,		12},
		{13,	14,		15,		16}
	};

	for (i = 0; i < 4; i++)
	{
		ShowArr(arr);
		RotateArr(arr);

	}	
	return 0;
}

/* �迭ȸ���Լ� �ۼ�*/
void RotateArr(int(*arr)[4])
{
	int temp[4][4]; 
	int i, j;
	

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)

			temp[j][3-i] = arr[i][j];

	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)

			arr[i][j] = temp[i][j];
	}
}
/* ȸ����� ����Լ� �ۼ�*/
void ShowArr(int(*arr)[4])
{
	int i, j;
	printf("-----Show Array------ \n");
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%5d", arr[i][j]);
		
		printf("\n");

	}
	printf("\n");
}