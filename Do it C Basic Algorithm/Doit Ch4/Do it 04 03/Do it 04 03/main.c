#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(void)
{
	ArrayIntQueue q;
	if (Intialize(&q, 64) == -1)
	{
		puts("ť ���� ����");
		return 1;
	}

	while (1)
	{
		int menu, x;
		int idx;
		printf("���� �����ͼ� %d/%d \n", Size(&q), Capacity(&q));
		printf("(1)��ť (2)��ť (3)��ũ (4)�ʱ�ȭ (5)Ž�� (6)����ִ���/�������ִ��� (7)��� (0)����\n");
		scanf("%d", &menu);
		if (menu == 0)
			break;

		switch (menu)
		{
		case 1:
			printf("������:");
			scanf("%d", &x);
			if (Enque(&q, x) == -1)
				puts("�����߻� ��ť����");
			break;

		case 2:
			if (Deque(&q, &x) == -1)
				puts("�����߻� ��ť����");
			else
				printf("��ť ������: %d\n", x);
			break;

		case 3:
			if (Peek(&q, &x) == -1)
				puts("�����߻� ��ũ����");
			else
				printf("��ũ ������: %d\n", x);
			break;

		case 4:
			Clear(&q);
			break;
		case 5:
			printf("�˻���:");
			scanf("%d", &x);
			if ((idx = Search(&q, x)) == -1)
				puts("Ž�� ����");
			else
				printf("�����ʹ� �ε���%d�� �ִ�", idx);
			break;

		case 6:
			printf("ť�� ���� %s\n", Isfull(&q) ? "���ִ�" : "������ �ʴ�");
			printf("ť�� ��� %s\n", Isempty(&q) ? "�ִ�" : "�����ʴ�");
			break;
		
		case 7:
			Print(&q);
			break;
		}
		
	}
	Terminate(&q);
	return 0;
}