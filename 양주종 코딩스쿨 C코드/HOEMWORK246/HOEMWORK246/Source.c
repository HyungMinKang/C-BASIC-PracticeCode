// �Լ��� �μ�(argument)- ����ü(struct) ����

#include <stdio.h>
typedef struct Mt
{
	char mount[20];
	int alt;
}Mt;

void Disp(Mt x)
{
	puts("\n Disp �Լ����� ���");
	printf("%s�� �ع� %d M \n", x.mount, x.alt);
	printf("&x= %d\n", &x);

	puts("\n m�� x�� �ּҴ� �ٸ���");
}

int main(void)
{
	Mt m = { "���ǻ�", 1708 };

	puts("\n �Լ��� �μ�(argument)�� ����ü ���� \n\n");

	printf("%s�� �ع� %dM \n", m.mount, m.alt);
	printf("&m= %d \n", &m);

	Disp(m);

	return 0;
}