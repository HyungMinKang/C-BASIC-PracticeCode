// �����迭�� �Լ��� �Ű������� ����

#include <stdio.h>
void Displayp(int x[5])
{
	int i;
	puts("\n ===> Display �Լ�");
	printf("x=%d \n", x);

	for (i = 0; i < 5; i++)
	{
		printf("x[%d]==> %d�ּ� ==> %d\n", i, x[i], &x[i]);
	}
}

int main()
{
	int a[5] = { 10,20,30,40,50 };
	int n = sizeof(a) / sizeof(int);
	int i;
	int* p = a;

	printf("a=%d, p=%d \n\n", a, p);

	puts("==> main�Լ� ���");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]==> %d�ּ� ==> %d \n", i, a[i], &a[i]);
	}

	Displayp(a);

	return 0;
}