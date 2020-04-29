// 버블소트(Bubble Sort) - 함수로 분리

#include <stdio.h>
void Display(int* x, int num, char* message) //출력
{
	int i;
	puts(message);
	for (i = 0; i < num; i++)
	{
		printf("[%d]번째 용돈==> 한달에 %d만원 \n", i, *(x + i));
	}
}

void BubbleSort(int* x, int num) //처리
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

void Input(int* x, int num) //입력
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

	Display(Pmoney, n, "*원본 출력*");

	BubbleSort(Pmoney, n);

	Display(Pmoney, n, "\n 정렬후 출력*");

	return 0;
}