#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char voca[100];
	int idx;
	int len = 0;
	char temp;

	printf("���ܾ� �Է�:");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;

	for (idx = 0; idx < len/2 ; idx++)
	{
		temp = voca[idx];
		voca[idx] = voca[(len - idx) - 1];
		voca[(len - idx) - 1] = temp;
	}
	printf("������ ���ܾ�: %s \n", voca);
	return 0;

}