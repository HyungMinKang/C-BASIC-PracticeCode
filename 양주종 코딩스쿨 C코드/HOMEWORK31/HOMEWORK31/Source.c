// �ڵ��� ��ȯ- �Ǽ�

#include <stdio.h>

int main(void)
{

	double a = 35.678;
	double b = 45;

	puts("-----------------------");
	puts(" *�ڵ��� ��ȯ- �Ǽ� *");
	puts("-----------------------");

	printf("a=%lf, b=%lf \n", a, b);
	printf("a=%.1lf, b=%.2lf \n", a, b);
	puts("-----------------------");

	puts("45�� �ڵ����� double ������ �ٲ�ϴ�");
	puts("-----------------------");

	return 0;
}