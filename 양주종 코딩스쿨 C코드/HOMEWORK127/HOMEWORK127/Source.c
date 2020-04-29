// 간단 계산기
#pragma warning(disable: 4996)
#include <stdio.h>

void BlankBuff(void);

int main(void)
{
	int num1, num2;
	char op;

	puts("-----------------");
	puts(" ** 간단계산기 ** ");
	puts(" -----------------");

	printf(" 첫번째 수 : ");
	scanf_s("%d", &num1);

	printf(" [+, -, *, /] :");
	BlankBuff();
	op = getchar();
	

	printf(" 두번째 수; ");
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
		printf(" %c 그런 연산자는 없습니다. \a\a", op);

	puts("-------------------------------------------------");
	puts(" 천천히 반복하여 실습해 보세요 ");
	puts(" 여러가지 방식으로 변형하여 보세요 ");
	puts(" -------------------------------------------------");
	return 0;

}

void BlankBuff(void)
{
	while (getchar() != '\n');
}