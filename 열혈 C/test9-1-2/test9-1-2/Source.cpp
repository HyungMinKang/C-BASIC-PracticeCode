#include <stdio.h>

double CelToFah(double c)// ������ ȭ����
{
	return 1.8 * c + 32;
}

double FahCel(double f)// ȭ���� ������
{
	return (f - 32) / 1.8;
}

int main(void)
{	
	int sel;
	double num;

	printf("1.������ ȭ���� 2.ȭ���� ������");
	printf("����>>");
	scanf_s("%d", &sel);

	if (sel == 1)
	{
		printf("�����Է�:");
		scanf_s("%lf", &num);
		printf("����%f= ȭ��%f \n", num, CelToFah(num));
	}

	if(sel==2)
	{ 
		printf("ȭ���Է�:");
		scanf_s("%lf", &num);
		printf("ȭ��%f= ����%f \n", num, FahCel(num));

	}
	return 0;


}