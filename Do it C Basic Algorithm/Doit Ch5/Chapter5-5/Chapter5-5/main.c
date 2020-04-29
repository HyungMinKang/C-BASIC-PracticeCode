#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

void recur(int n)
{
	IntStack stk;
	Initialize(&stk, 100);

Top:
	if (n > 0)
	{
		Push(&stk, n); //n�� �ӽ�����
		n = n - 1; // recur(n-1)
		goto Top;
	}

	if (!Isempty(&stk)) {
		Pop(&stk, &n); //�ӽ������� n�� �ٽ� �ҷ�����
		printf("%d\n", n);
		n = n - 2;  //recur(n-2) ������� �Լ�
		goto Top;  
	}

	Terminate(&stk);


}

int main(void)
{
	int x;
	printf("������ �Է��ϼ���:");
	scanf("%d", &x);
	recur(x);

	return 0;
}
