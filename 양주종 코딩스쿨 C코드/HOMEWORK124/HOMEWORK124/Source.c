// switch-case�� -1

#include <stdio.h>

int main(void)
{
	int k;

	puts("-------------------------");
	puts(" * switch~case�� *");
	puts("-------------------------");

	while(1)
	{
		puts(" \t *** MENU *** ");
		puts(" \t 1. ������ ");
		puts(" \t 2. ȭ���� ");
		puts(" \t 3. ������ ");
		puts(" \t 4. ����� ");
		puts(" \t 5. �ݿ��� ");
		puts(" \t 6. ����� ");
		puts(" \t 7. �Ͽ��� ");
		puts(" \t 0. �Ͽ��� ");
		puts(" \t ���α׷� ���� : Q");
		printf(" \t �����ϴ� ������[  ] \b\b\b");
		fflush(stdin);
		scanf_s("%d", &k);
		if ((k == 'q') || (k == 'Q'))
			return 0;

		switch (k)
		{
		case 1:
			printf(" \t ������ \n");
			break;
		case 2:
			printf(" \t ȭ���� \n");
			break;
		case 3:
			printf(" \t ������ \n");
			break;
		case 4:
			printf(" \t ����� \n");
			break;
		case 5:
			printf(" \t �ݿ��� \n ");
			break;
		case 6:
			printf(" \t ����� \n");
			break;
		case 7:
			printf(" \t �Ͽ��� \n");
			break;
		case 0:
			printf(" \t �Ͽ��� \n");
			break;
		default:
			printf(" \t �׷� ���� �����ϴ�.. \n ");
			break;
		}

	}
	puts(" -----------------------------------------");
	puts(" switch(k)���� k�� case���� �ش�");
	puts(" case�� �ش�Ǹ� �� �������� �ٷ� ����");
	puts(" �ش�Ǵ� case�� ������ default ���� ����");
	puts(" ------------------------------------------");
	 
}