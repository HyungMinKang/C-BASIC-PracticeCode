// switch- case �޴� �����

#include <stdio.h>
int main(void)
{
	int choice;

	puts(" \t *** MENU *** ");
	puts(" \t 1. �� �� �� ");
	puts(" \t 2. ȸ �� �� ");
	puts(" \t 3. �� �� �� ");
	puts(" \t 4. �� �� �� ");
	puts(" \t 5. �� �� �� ");
	puts(" \t 6. �� �� ");
	puts(" \t *********** ");
	printf(" \t ������� [   ]\b\b\b");

	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf(" \t ==> ������ \n");
		break;
	case 2:
		printf(" \t ==> ȸ��� \n");
		break;
	case 3:
		printf(" \t ==> �ڿ��� \n");
		break;
	case 4:
		printf(" \t ==> ���డ \n");
		break;
	case 5:
		printf(" \t ==> ������ \n");
		break;
	case 6:
		printf(" \t ==> �� �� \n ");
		break;
	default:
		puts(" �� ���� ��������!");
	}

	return 0;
	
}