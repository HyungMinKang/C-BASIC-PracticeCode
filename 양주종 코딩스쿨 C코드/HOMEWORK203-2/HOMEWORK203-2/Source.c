// �����迭�� �Լ��� �μ��� ����( �迭�� ũ�⸦ �˼� ���� --> �迭�� �����ּҸ� �����ϴ� ���̱� ������)

#include <stdio.h>
void Display(int x[5])
{
	int i;
	puts(" \n ===> Display �Լ�");
	printf(" x=%d byte \n", sizeof(x)); //20����Ʈ X 4����ƮO ==> �迭�� ��°�� ����X 
	puts(" 0~9���� 10�� �ݺ�");
	for (i = 0; i < 10; i++)
	{
		printf("x[%d] ==> %d �ּ� ==> %d \n", i, x[i], &x[i]);
	}

	puts("\n -2~5���� 8�� �ݺ�");
	for (i = -2; i < 6; i++)
	{
		printf("x[%d] ==> %d �ּ� ==> %d \n", i, x[i], &x[i]);
	}
}
	
int main(void)
{
	int a[5] = { 10,20,30,40,50 };
	int n = sizeof(a) / sizeof(int);

	Display(a);

	return 0;
}