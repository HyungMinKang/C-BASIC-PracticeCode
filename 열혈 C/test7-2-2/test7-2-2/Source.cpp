#include <stdio.h>

int main(void) // ���α׷� ����
{
	int i=0, j=0; // ���� ���� i= ��, j= 0���� ���� ���� 
	while (i < 5) // 5�� ����
	{
		while (j < i) // 0�� �ϳ��� ������
		{
			printf("  0");
			j++;
		}

		j = 0; // j�� �ʱ�ȭ
		printf(" * \n");
		i++; // ������
	}
	return 0; //���α׷� ����
}