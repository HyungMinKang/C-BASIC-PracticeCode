// ���ȣ��

#include <stdio.h>

void func(int x)
{
	printf(" func �Լ� x= %3d addr==> %d \n", x, &x);
}

int func2(int x)
{
	if (x == 0)
		return;
	func2(x - 1); 
	puts("\n func2 �Լ�");
	printf(" func �Լ� x= %3d addr==> %d \n", x, &x);
}

int main(void)
{
	puts(" �������� �� ������");

	func(100);
	func(200);
	func(300);

	func2(3);

	return 0;
}