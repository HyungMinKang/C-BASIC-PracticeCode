// switch~case��-2 

#include <stdio.h>

int main(void)
{
	int a;
	puts(" -------------------------");
	puts(" * switch- case�� * ");
	puts(" --------------------------");

	puts(" \t * TV ä�� ���� * ");
	puts(" \t\t 6. SBS ");
	puts(" \t\t 7. KBS2 ");
	puts(" \t\t 9. KBS ");
	puts(" \t\t 11. MBC ");
	puts(" \t\t 13. EBS ");
	puts(" \t\t ********");
	printf(" \t ��ܺ��� TVä�� [  ] \b\b\b");
	scanf_s("%d", &a);

	switch (a)
	{
	case 6:
		printf("\t ä���� %d ==> SBS \n", a);
		break;
	case 7:
		printf("\t ä���� %d ==> KBS2 \n", a);
		break;
	case 9:
		printf("\t ä���� %d ==> KBS \n", a);
		break;
	case 11:
		printf("\t ä���� %d ==> MBC \n", a);
		break;
	case 13:
		printf("\t ä���� %d ==> EBS \n", a);
		break;
	default:
		printf("\t ä���� %d ==> ���� ä�� \n", a);
		break;
	}

	puts("-----------------------------------------");
	puts(" a�� case���� �ش�");
	puts(" case�� �ش�Ǹ� �� �������� �ٷ� ����. ");
	puts(" �ش�Ǵ� case�� ������ default ���� ����");
	puts("--------------------------------------------");
	return 0; 
}