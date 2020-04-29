#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	IntQueue que;

	if (Intialize(&que, 64) == -1)
	{
		puts("ť���� ����");
		return 1;
	}

	while (1)
	{
		int m, x;
		int idx;
		printf("���� ������ ��: %d / %d \n", Size(&que) , Capacity(&que));
		printf("(1)��ť (2)��ť (3)��ũ (4)��� (5)�ʱ�ȭ (6)���/���� (7)Ž��1 (8)Ž��2 (0)����: ");
		scanf("%d", &m);
		if (m == 0)
			break;

		switch (m)
		{
		case 1:
			printf("������: "); scanf("%d", &x);
			if (Enque(&que, x) == -1)
				puts("�����߻� ��ť����");
			break;

		case 2:
			if (Deque(&que, &x) == -1)
				puts("�����߻� ��ť����");
			else
				printf("��ť�� �����ʹ� %d�Դϴ� \n", x);
			break;

		case 3:
			if (Peek(&que, &x) == -1)
				puts("�����߻� ��ũ����");
			else
				printf("��ũ�� �����ʹ� %d�Դϴ� \n", x);
			break;

		case 4:
			Print(&que);
			break;

		case 5:
			Clear(&que);
			break;
		case 6:
			printf("ť�� ���� %s\n", Isfull(&que) ? "���ִ�" : "������ �ʴ�");
			printf("ť�� ��� %s\n", Isempty(&que) ? "�ִ�" : "�����ʴ�");
			break;

		case 7:
			printf("�˻���:");
			scanf("%d", &x);
			if ((idx = Search(&que, x)) == -1)
				puts("Ž�� ����");
			else
				printf("�����ʹ� �ε���%d�� �ִ�", idx);
			break;

		case 8:
			printf("�˻���:");
			scanf("%d", &x);
			if ((idx = Search2(&que, x)) == -1)
				puts("Ž�� ����");
			else
				printf("�����ʹ� �ε���%d�� �ִ�", idx);
			break;
		}
	}
	Terminate(&que);
	return 0;
}