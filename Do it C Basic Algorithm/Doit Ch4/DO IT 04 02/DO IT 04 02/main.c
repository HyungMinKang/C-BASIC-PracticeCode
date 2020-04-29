#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main(void)
{
	IntStack s;
	if (Initialize(&s, 12) == -1)
	{
		puts("���� ���� ����");
		return 1;
	}

	while (1)
	{
		int menu, x;
		int idx;
		printf("���� �����ͼ�: A: %d  B: %d /%d\n\n", Size(&s, StackA), Size(&s, StackB), Capacity(&s));
		printf("(1)A�� Ǫ�� (2)A���� �� (3)A���� ��ũ (4)A �ʱ�ȭ (5)A���� �˻� (6) A ��� \n"
			"(7)B�� Ǫ�� (8)B���� �� (9)B���� ��ũ (10)B �ʱ�ȭ (11)B���� �˻� (12) B ���\n"
			"(13) �����/������ ���� (0) ����\n");
		scanf("%d", &menu);

		if (menu == 0)
			break;
		switch (menu)
		{
		case 1:
			printf("������:");
			scanf("%d", &x);
			if (Push(&s, StackA, x) == -1)
				puts("�����߻� Ǫ���� �����߽��ϴ�");
			break;
		case 2:
			if (Pop(&s, StackA, &x) == -1)
				puts("�����߻� �˿� �����߽��ϴ�");
			else
				printf("�� �����ʹ� %d�Դϴ� \n", x);
			break;
		case 3:
			if (Peek(&s, StackA, &x) == -1)
				puts("�����߻� ��ũ�� �����߽��ϴ�");
			else
				printf("��ũ�����ʹ� %d�Դϴ�\n", x);
			break;
		case 4: 
			Clear(&s, StackA);
			break;

		case 5:
			printf("�˻���:");
			scanf("%d", &x);
			if ((idx = Search(&s, StackA, x) )== -1)
				puts("���� �߻� Ž�� ����");
			else
				printf("�����ʹ� %d�ε����� �ִ�\n", idx);
			break;

		case 6:
			Printf(&s, StackA);
			break;

		case 7:
			printf("������:");
			scanf("%d", &x);
			if (Push(&s, StackB, x) == -1)
				puts("�����߻� Ǫ���� �����߽��ϴ�");
			break;
		
		case 8:
			if (Pop(&s, StackB, &x) == -1)
				puts("�����߻� �˿� �����߽��ϴ�");
			else
				printf("�� �����ʹ� %d�Դϴ� \n", x);
			break;


		case 9:
			if (Peek(&s, StackB, &x) == -1)
				puts("�����߻� ��ũ�� �����߽��ϴ�");
			else
				printf("��ũ�����ʹ� %d�Դϴ�\n", x);
			break;

		case 10:
			Clear(&s, StackB);
			break;

		case 11:
			printf("�˻���:");
			scanf("%d", &x);
			if ((idx = Search(&s, StackB, x)) == -1)
				puts("���� �߻� Ž�� ����");
			else
				printf("�����ʹ� %d�ε����� �ִ�\n", idx);
			break;

		case 12:
			Printf(&s, StackB);
			break;

		case 13:
			printf("����A�� ��� %s\n", Isempty(&s, StackA) ? "�ֽ��ϴ�" : "���� �ʽ��ϴ�");
			printf("����B�� ��� %s\n", Isempty(&s, StackB) ? "�ֽ��ϴ�" : "���� �ʽ��ϴ�");
			printf("������ ���� %s\n", Isfull(&s) ? "���ֽ��ϴ�" : "������ �ʽ��ϴ�");
			break;
		}
	}
	Terminate(&s);
	return 0;

}