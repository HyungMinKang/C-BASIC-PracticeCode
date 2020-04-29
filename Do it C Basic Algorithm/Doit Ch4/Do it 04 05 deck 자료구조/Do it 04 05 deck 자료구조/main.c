#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(void)
{
	IntQueue deck;

	if (Intialize(&deck, 64) == -1)
	{
		puts("deck ���� ����");
		return 1;
	}

	while (1)
	{
		int m, x, idx;
		printf("���� ������ ���� %d / %d\n", Size(&deck), Capacity(&deck));
		printf("(1)front��ť (2)front ��ť (3)front ��ũ (4)rear��ť (5)rear ��ť (6)rear ��ũ \n"
			"(7)�ʱ�ȭ (8)��� (9)Ž��1 (10)Ž��2 (11)empty/full? (0)����");
		scanf("%d", &m);
		switch (m)
		{
		case 1:
			printf("������ ��:");
			scanf("%d", &x);
			if (FrontEnque(&deck, x) == -1)
				puts("�����߻� ����Ʈ��ť ����");
			break;

		case 2:
			if (FrontDeque(&deck, &x) == -1)
				puts("�����߻� ����Ʈ��ť ����");
			else
				printf("����Ʈ��ť�� ��: %d \n", x);
			break;

		case 3:
			if (FrontPeek(&deck, &x) == -1)
				puts("�����߻� ����Ʈ ��ũ ����");
			else
				printf("����Ʈ��ũ��: %d \n", x);
			break;

		case 4:
			printf("������ ��:");
			scanf("%d", &x);
			if (RearEnque(&deck, x) == -1)
				puts("�����߻� ������ť ����");
			break;

		case 5:
			if (RearDeque(&deck, &x) == -1)
				puts("�����߻� �����ť ����");
			else
				printf("�����ť�� ��: %d \n", x);
			break;

		case 6:
			if (RearPeek(&deck, &x) == -1)
				puts("�����߻� ���� ��ũ ����");
			else
				printf("������ũ��: %d \n", x);
			break;

		case 7:
			Clear(&deck);
			break;

		case 8:
			Print(&deck);
			break;

		case 9:
			printf("�˻���:");
			scanf("%d", &x);
			if ((idx = Search(&deck, x)) == -1)
				puts("Ž�� ����");
			else
				printf("�����ʹ� �ε���%d�� �ִ�", idx);
			break;


		case 10:
			printf("�˻���:");
			scanf("%d", &x);
			if ((idx = Search2(&deck, x)) == -1)
				puts("Ž�� ����");
			else
				printf("�����ʹ� �ε���%d�� �ִ�", idx);
			break;

		case 11:
			printf("ť�� ���� %s\n", Isfull(&deck) ? "���ִ�" : "������ �ʴ�");
			printf("ť�� ��� %s\n", Isempty(&deck) ? "�ִ�" : "�����ʴ�");
			break;

		}
	}
	Terminate(&deck);
	return 0;
}