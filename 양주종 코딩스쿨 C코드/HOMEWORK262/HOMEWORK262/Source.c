// �迭�����Ͱ� �ʿ��� ���

#include <stdio.h>

int main(void)
{
	char team[5][10] = { "�Ｚ", "�λ�", "�ؼ�","���","��ȭ"};
	int i, n = sizeof(team) / sizeof(char[10]);

	printf("\n %d���� �߱��� \n\n", n);
	for (i = 0; i < n; i++)
	{
		printf("team[%d] ==> %s \n", i, team[i]);
	}

	return 0;
}