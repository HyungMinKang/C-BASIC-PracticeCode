// �����迭 �����

#include <stdio.h>

int main(void)
{
	int bus[5];
	int i, n;
	n = sizeof(bus) / sizeof(int);

	puts("------------------------");
	puts(" **�����迭 ����� **");
	puts("------------------------");

	for (i = 0; i < n; i++)
	{
		printf("[%d]���� ������ȣ��: ", i);
		scanf_s("%d", &bus[i]);
	}

	printf("\n *[%d] ���� ������ȣ ���: ", n);
	puts("------------------------");
	for (i = 0; i < n; i++)
		printf("bus[%d]= %d�� \n",i,bus[i]);
	puts("------------------------");
	puts("C���� �׻� 0�� ī��Ʈ �մϴ�");
	puts("------------------------");

	return 0;
}