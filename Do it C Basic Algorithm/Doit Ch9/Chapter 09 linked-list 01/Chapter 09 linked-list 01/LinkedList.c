#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "Linkedlist.h"


//��带�������� ����
static Node* AllocNode(void)
{
	return calloc(1, sizeof(Node));
}

//n�� ����Ű�� ��� �� ����� ���� ����
static void SetNode(Node* n, const Member* x, const Node* next)
{
	n->data = *x;
	n->next = next;
}

//���Ḯ��Ʈ �ʱ�ȭ
void Initialize(List* list)
{
	list->head = NULL;
	list->crnt = NULL;
}

//���Ḯ��Ʈ���� �˻�
Node* search(List* list, const Member* x, int compare(const Member* x, const Member* y))
{
	Node* ptr = list->head;
	while (ptr != NULL) //�˻� ��尡 ��������϶�����
	{
		if (compare(&ptr->data, x) == 0)
		{
			list->crnt = ptr;
			return ptr;
		}
		ptr = ptr->next; //���� ��带 ����
	}
	
	return NULL; //�˻�����
}

//�Ӹ� ��忡 ����
void InsertFront(List* list, const Member* x)
{
	Node* ptr = list->head;
	list->head = list->crnt = AllocNode();
	SetNode(list->head, x, ptr);
}

//������ ��带 ����
void InsertRear(List* list, const Member* x)
{
	if (list->head == NULL) //����Ʈ�� ����ٸ� == �Ӹ���� ���԰��� ����
		InsertFront(list, x);
	else
	{
		Node* ptr = list->head;
		while (ptr->next != NULL) //������� ã��
			ptr = ptr->next;
		ptr->next = list->crnt = AllocNode();
		SetNode(ptr->next, x, NULL);
	}
}

//�Ӹ� ��� ����
void RemoveFront(List* list)
{
	if (list->head != NULL)
	{
		Node* ptr = list->head->next;
		free(list->head);
		list->head = list->crnt = ptr;
	}
}

//���� ��� ����
void RemoveRear(List* list)
{
	if (list->head != NULL)
	{
		if ((list->head)->next == NULL) //����Ʈ�� ���Ե� ��尡 �ϳ��̴�
			RemoveFront(list);

		else
		{
			Node* ptr = list->head;
			Node* pre=AllocNode();
			while (ptr->next != NULL)
			{
				pre = ptr;
				ptr = ptr->next;
			}
			pre->next = NULL; //pre�� �������� ����� == ������� ������ ������尡 ��)
			free(ptr); // ������� �Ҵ�����
			list->crnt = pre; 
		}
	
	}
}

//������ ��带 �����ϴ� �Լ�
void RemoveCurrent(List* list)
{
	if (list->head != NULL)
	{
		if (list->crnt == list->head)
			RemoveFront(list);
		else
		{
			Node* ptr = list->head;
			while (ptr->next != list->crnt) //������ ��� �� ��� ã��
			{
				ptr = ptr->next;
			}
			ptr->next = list->crnt->next; //������ ��� �� ����� next���� �����ҳ���� ������ ������Ʈ
			free(list->crnt); //������ ��� ����
			list->crnt = ptr; //������ ���= ������ ��� �ճ��� ������Ʈ
		}
	}
}

//��� ��带 ����
void Clear(List* list)
{
	while (list->head != NULL)
		RemoveFront(list);
	list->crnt = NULL;
}

//������ ����� �����͸� ���
void PrintCurrent(const List* list)
{
	if (list->crnt == NULL)
		printf("������ ��尡 �����ϴ�");
	else
		PrintMember(&list->crnt->data);
}
void PrintLnCurrent(const List* list)
{
	PrintCurrent(list);
	putchar('\n');
}

//��� ��� �����͸� ����Ʈ ������ ���
void Print(const List* list)
{
	if (list->head == NULL)
		puts("��尡 �����ϴ�");
	else
	{
		Node* ptr = list->head;
		puts("[��� ����]");
		while (ptr != NULL)
		{
			PrintLnMember(&ptr->data);
			ptr = ptr->next;
		}
	}
}

void Terminate(List* list)
{
	Clear(list);
}

void Purge(List* list, int compare(const Member* x, const Member* y))
{
	Node* ptr = list->head;

	while (ptr!= NULL)
	{
		Node* ptr2 = ptr;
		Node* pre = ptr;
		while (pre->next != NULL)
		{
			ptr2 = pre->next;
			if (!(compare(&ptr->data, &ptr2->data)))
			{
				pre->next = ptr2->next;
				free(ptr2);
			}
			else
			{
				pre = ptr2;
			}
		}
		ptr = ptr->next;
	}
	list->crnt = list->head;
}

Node* Retrieve(List* list, int n)
{
	Node* ptr = list->head;

	while (n >= 0 && ptr != NULL)
	{
		if (n-- == 0)
		{
			list->crnt = ptr;
			return ptr;
		}
		ptr = ptr->next;
	}

	return NULL;
}