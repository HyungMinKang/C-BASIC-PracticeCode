// ���� ����- switch-case��
#include <stdio.h>
void BlankBuff(void);

int main(void)
{
	int num1, num2;
	char op;
	
	puts("--------------");
	puts(" ** ���ܰ��� ** ");
	puts(" ------------------");

	printf(" ù���� �� : ");
	scanf_s("%d", &num1);

	printf(" [+, -, *, /] : ");
	BlankBuff();
	op = getchar();

	printf(" �ι��� ��: ");
	scanf_s("%d", &num2);

	switch (op)
	{
	case '+':
		printf("%d + %d = %d \n", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%d - %d= %d \n", num1, num2, num1 - num2);
		break;
	case '*':
		printf("%d * %d = %d \n", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%d / %d = %d \n", num1, num2, num1 / num2);
		break;
	default:
		printf(" %c �׷� �����ڴ� �����ϴ�. \a\a", op);
		break;
	}
	puts(" -----------------------------------------");
	puts(" ���� if���� ���Ͽ� ����");
	puts(" � ������ �� ���ڴ��� ���");
	puts("--------------------------------------------");

}

void BlankBuff(void)
{
	while (getchar() != '\n');
}