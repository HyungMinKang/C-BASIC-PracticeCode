#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char voca[100];
	char max = 0;
	int len = 0;
	int i;

	printf("���ܾ �Է��ϼ���:");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;

	for (i = 0; i < len; i++)
	{
		if (max < voca[i])
			max = voca[i];

	}
	printf("���� ū �ƽ�Ű �ڵ� ���� ����: %c \n", max);
	return 0;
}


