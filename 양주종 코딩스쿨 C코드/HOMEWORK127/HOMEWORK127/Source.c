// ���� ����
#pragma warning(disable: 4996)
#include <stdio.h>

void BlankBuff(void);

int main(void)
{
	int num1, num2;
	char op;

	puts("-----------------");
	puts(" ** ���ܰ��� ** ");
	puts(" -----------------");

	printf(" ù��° �� : ");
	scanf_s("%d", &num1);

	printf(" [+, -, *, /] :");
	BlankBuff();
	op = getchar();
	

	printf(" �ι�° ��; ");
	scanf_s("%d", &num2);

	if (op == '+')
		printf(" %d + %d = %d \n", num1, num2, num1 + num2);
	else if (op == '-')
		printf(" %d -%d = %d \n", num1, num2, num1 - num2);
	else if (op == '*')
		printf("%d * %d = %d \n", num1, num2, num1 * num2);
	else if (op == '/')
		printf(" %d / %d = %d \n", num1, num2, num1 / num2);
	else
		printf(" %c �׷� �����ڴ� �����ϴ�. \a\a", op);

	puts("-------------------------------------------------");
	puts(" õõ�� �ݺ��Ͽ� �ǽ��� ������ ");
	puts(" �������� ������� �����Ͽ� ������ ");
	puts(" -------------------------------------------------");
	return 0;

}

void BlankBuff(void)
{
	while (getchar() != '\n');
}