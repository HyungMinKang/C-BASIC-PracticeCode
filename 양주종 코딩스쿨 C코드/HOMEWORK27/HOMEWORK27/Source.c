// C�� �⺻���� �ν��ϴ� �ڷ���

#include <stdio.h>

int main(void)
{
	puts("------------------------");
	puts(" **C�� �⺻���� �ν��ϴ� �ڷ��� **");
	puts("------------------------");

	printf("'A'= %d byte \n", sizeof('A'));
	puts("------------------------");

	printf(" 50= %d byte \n", sizeof(50));
	puts("------------------------");

	printf(" 3.15= %d byte \n", sizeof(3.15));
	puts("------------------------");

	printf(" \"programming\"= %d byte \n", sizeof("programming"));
	puts("------------------------");

	puts(" A�� ���� 65�� ��ȯ�Ǿ� 4byte");
	puts(" ������ int, �Ǽ��� double�� �ν���");
	puts("------------------------");

	return 0;
}