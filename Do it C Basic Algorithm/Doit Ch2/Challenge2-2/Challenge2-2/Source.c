#include <stdio.h>

int main(void)
{
	int num, cnt = 0;
	int Binarr[30];
	printf("10���� �Է�:");
	scanf_s("%d", &num);

	while (num > 0)   // 2���� ��ȯ  if num=12, Binarr[0]=0 Binarr[1]=0 Binarr[2]=1 Binarr[3]=1
	{
		Binarr[cnt] = num % 2;
		num /= 2;
		cnt++;
	}

	while (cnt > 0)
	{
		printf("%d", Binarr[--cnt]);
	}
	return 0;
}