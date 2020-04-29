// 간단 계산기- switch-case문
#include <stdio.h>
void BlankBuff(void);

int main(void)
{
	int num1, num2;
	char op;
	
	puts("--------------");
	puts(" ** 간단계산기 ** ");
	puts(" ------------------");

	printf(" 첫번쨰 수 : ");
	scanf_s("%d", &num1);

	printf(" [+, -, *, /] : ");
	BlankBuff();
	op = getchar();

	printf(" 두번쨰 수: ");
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
		printf(" %c 그런 연산자는 없습니다. \a\a", op);
		break;
	}
	puts(" -----------------------------------------");
	puts(" 다중 if문과 비교하여 보고");
	puts(" 어떤 문장이 더 좋겠는지 고민");
	puts("--------------------------------------------");

}

void BlankBuff(void)
{
	while (getchar() != '\n');
}