#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է°��� 0���� �۽��ϴ� \n");

	if (num > 0)
		printf("�Է°��� 0���� Ů�ϴ� \n");

	if (num == 0)
		printf("�Է� ���� 0�̴�");

	return 0;
}