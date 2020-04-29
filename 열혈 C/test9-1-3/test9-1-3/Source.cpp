#include <stdio.h>

void Fibnonacci(int num)
{
	int n1=0 , n2=1, n3, i;

	if (num == 1)
		printf("%d ", n1);
	else
		printf("%d %d ", n1, n2);

	for (i=0; i<num-2; i++)
	{
		n3 = n1 + n2;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}
}

int main(void)
{
	int n;
	printf("표시하고자 하는 피보나치 수열 수 입력: ");
	scanf_s("%d", &n);

	if (n < 1)
	{
		printf("1보다 큰 수를 입력하세요 \n");
		return -1;
	}
	
	Fibnonacci(n);
	return 0;
}
