// �����迭�� �Լ��� ���ڷ� ����( ���1: �迭�� �뤊�� ���޵Ǵ°��� �ƴϴ�)

#include <stdio.h>

//void Display(int x[])
//void Display(int*x)

void Display(int x[5])
{
	int i;
	puts(" \n ====> Display �Լ�");
	printf(" x= %d byte \n", sizeof(x)); // 20byte X  4byte 0
}

int main(void)
{
	int a[5] = { 10,20,30,40,50 };
	int n = sizeof(a) / sizeof(int);
	int* p = a;

	printf("int a[5] , sizeof(a) ==> %d byte \n", sizeof(a));
	printf("int *p, sizeof(p) ==> %d byte \n", sizeof(p));

	Display(a);

	return 0;

}