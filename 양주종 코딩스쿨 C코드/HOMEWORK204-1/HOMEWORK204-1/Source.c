// �����Ʈ(Bubble Sort) - �Լ��� �и�

#include <stdio.h>
void Display(int* x, int num, char* message) //���
{
	int i;
	puts(message);
	for (i = 0; i < num; i++)
	{
		printf("[%d]��° �뵷==> �Ѵ޿� %d���� \n", i, *(x + i));
	}
}

void BubbleSort(int* x, int num) //ó��
{
	int i, j, tmp;

	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1; j++)
		{
			if (*(x + j) > * (x + j + 1))
			{
				tmp = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = tmp;
			}
		}
	}
}

void Input(int* x, int num) //�Է�
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("x[%d]: ",i); scanf_s("%d", &x[i]);
		
	}
	return 0;
}



int main(void)
{
	int Pmoney[10];
	int n = sizeof(Pmoney) / sizeof(int);
	
	Input(Pmoney, n);

	Display(Pmoney, n, "*���� ���*");

	BubbleSort(Pmoney, n);

	Display(Pmoney, n, "\n ������ ���*");

	return 0;
}