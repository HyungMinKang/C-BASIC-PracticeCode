// ����(storage class) static

#include <stdio.h>
int gg;

int main(void)
{
	int a;
	static int b;

	printf(" a= %d, &a=%d \n", a, &a);
	printf(" b= %d, &b=%d \n", b, &b);
	printf(" gg= %d, &gg=%d \n", gg, &gg);

	puts("a�� statck ���� b,gg�� data ������ �Ҵ�");
	puts(" �ʱ�ȭ ���� ������ a�� ������ ��. b,gg=0");

	return 0; 
}