#include <stdio.h>

int main(void)
{
	int num;
	printf(" ������ �Է��ϼ���:");
	scanf_s("%d", &num);

	switch (num / 10)
	{
	case 0:
		printf("0�̻� 10�̸�");
		break;
	case 1:
		printf("10�̻� 20�̸�");
		break;
	case 2:
		printf("20�̻� 30�̸�");
		break;
	default:
		printf("30�̻�");
		
	}
	return 0;
}
