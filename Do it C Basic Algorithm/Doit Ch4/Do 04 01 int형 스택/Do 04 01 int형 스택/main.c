#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "IntStack.h"

int main(void)
{
	IntStack s; 
	if (Initialize(&s, 64) == -1)
	{
		puts("���� ������ �����߽��ϴ�");
		return 1;
	}

	while (1)
	{
		int menu, x;
		int idx;
		printf("���� �����ͼ�: %d/ %d\n", Size(&s), Capacity(&s));
		printf("(1) Ǫ�� (2)�� (3)��ũ (4)��� (5)Ž�� (6)�ʱ�ȭ (7)����ֳ�/���� (0)����");
		scanf("%d", &menu);

		if (menu == 0) break;
		switch (menu)
		{
		case 1: //Ǫ��
			printf("������: ");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				puts("�����߻� Ǫ���� �����߽��ϴ�");
			break;


		case 2: //��
			if (Pop(&s, &x) == -1)
				puts("�����߻� �˿� �����߽��ϴ�");
			else
				printf("�� �����ʹ� %d�Դϴ�\n", x);
			break;

		case 3: //��ũ
			if (Peek(&s, &x) == -1)
				puts("�����߻� ��ũ�� �����߽��ϴ�");
			else
				printf("��ũ �����ʹ� %d�Դϴ� \n", x);
			break;


		case 4: //���
			Printf(&s);
			break;

		case 5: //Ž��
			printf("Ž���� ������:");
			scanf("%d", &x);
			idx = Search(&s, x);
			if (idx =Search(&s, x) == -1)
				puts("�����߻� Ž���� �����߽��ϴ�");
			else
				printf("�����ʹ� �ε��� %d���ֽ��ϴ�",idx);
			break;

		case 6: //�ʱ�ȭ
			Clear(&s);
			break;
		case 7 :// ����/���
			printf("������ ��� %s \n", Isempty(&s) ? "�ֽ��ϴ�" : "���� �ʽ��ϴ�");
			printf("������ ���� %s \n", Isfull(&s) ? "���ֽ��ϴ�" : "������ �ʽ��ϴ�");
			break;
		}
	}
	Terminate(&s);
	return 0;
}