// ���� if������ ���� 

#include <stdio.h>

int main(void)
{
	int a;

	puts("----------------------");
	puts(" * ���� if�� * ");
	puts(" ----------------------");

	puts(" * TV ä�� ���� * ");
	puts(" \t 6. SBS ");
	puts(" \t 7. KBS2 ");
	puts(" \t 9. KBS ");
	puts(" \t 11. MBC ");
	puts(" \t 13. EBS ");
	puts(" \t ********");
	printf(" ��ܺ��� TVä�� [   ]\b\b\b");
	scanf_s("%d", &a);

	if (a == 6)
		printf(" \t ���� ä���� %d ==> SBS \n", a);
	else if (a == 7)
		printf(" \t ���� ä���� %d ==> KBS2 \n", a);
	else if (a == 9)
		printf(" \t ���� ä���� %d ==> KBS \n", a);
	else if (a == 11)
		printf(" \t ���� ä���� %d ==> MBC \n", a);
	else if (a == 13)
		printf(" \t ���� ä���� %d ==> EBS \n", a);
	else
		printf(" \t %d ==> ���� ä��. \n", a);

	puts("-----------------------------------------");
	puts(" ���� ������ ���� if������ ����");
	puts(" switch-case ���� ���� if������ ȣȯ�Ǹ� ������ ��Ȳ�� �°� ���");
	puts("------------------------------------------");
	return 0;
}