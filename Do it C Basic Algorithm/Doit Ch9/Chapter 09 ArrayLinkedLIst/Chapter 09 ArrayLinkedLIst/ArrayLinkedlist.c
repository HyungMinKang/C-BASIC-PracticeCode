#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "ArrayLinkedList.h"

//������ ���ڵ��� �ε����� ���� ���� ��ȯ
static Index GetIndex(List* list)
{
	if (list->deleted == Null)  //������ ���ڵ尡 ���°��
		return ++(list->max);
	else {
		Index rec = list->deleted;
		list->deleted = list->n[rec].Dnext;
		return rec;
	}
}

//������ ���ڵ带 ��������Ʈ�� ���
static void DeleteIndex(List* list, Index idx)
{
	if (list->deleted == Null)
	{
		list->deleted = idx;
		list->n[idx].Dnext = Null;
	}
	else
	{
		Index ptr = list->deleted;
		list->deleted = idx;
		list->n[idx].Dnext = ptr;
	}
}

//n�� ����Ű�� ����� �� ����� ���� ����
static void SetNode(Node* n, const Member* x, Index next)
{
	n->data = *x;
	n->next = next;
}

//���Ḯ��Ʈ�� �ʱ�ȭ
void Initialize(List* list, int size)
{
	list->n = calloc(size, sizeof(Node));
	list->head = Null;
	list->crnt = Null;
	list->max = Null;
	list->deleted = Null;
}

//compare�Լ��� x�� ��ġ�ϴ� ���˻�
Index search(List* list, const Member* x, int compare(const Member* x, const Member* y))
{
	Index ptr = list->head;
	while (ptr != Null)
	{
		if (compare(&list->n[ptr].data, x) == 0)
		{
			list->crnt = ptr;
			return ptr; //�˻�����
		}
		ptr = list->n[ptr].next;
	}
	return Null; //�˻�����
}

//�Ӹ���忡 ����
void InsertFront(List* list, const Member* x)
{
	Index ptr = list->head;
	list->head = list->crnt = GetIndex(list);
	SetNode(&list->n[list->head], x, ptr);
}

//������忡 ����
void InsertRear(List* list, const Member* x)
{
	if (list->head == Null)
		InsertFront(list, x);
	else {
		Index ptr = list->head;
		while (list->n[ptr].next != Null)
		
		ptr = list->n[ptr].next;
		list->n[ptr].next = list->crnt = GetIndex(list);
		SetNode(&list->n[list->n[ptr].next], x, Null);

		
	}
}

//�Ӹ� ��带 ����
void RemoveFront(List* list)
{
	if (list->head != Null)
	{
		Index ptr = list->n[list->head].next;
		DeleteIndex(list, list->head);
		list->head = list->crnt = ptr;
	}
}

//���� ��带 ����
void RemoveRear(List* list)
{
	if (list->head != Null)
	{
		if (list->n[list->head].next == Null) //��尡 �Ѱ��ΰ��
			RemoveFront(list);
		else {
			Index ptr = list->head;
			Index pre;
			while (list->n[ptr].next != Null)
			{
				pre = ptr;
				ptr = list->n[ptr].next;
			}
			list->n[pre].next = Null;
			DeleteIndex(list, ptr);
			list->crnt = pre;
		}
	}
}

//������ ��带 ����
void RemoveCurrent(List* list)
{
	if (list->head != Null)
	{
		if (list->crnt == list->head)
			RemoveFront(list);
		else {
			Index ptr = list->head;
			while (list->n[ptr].next != list->crnt)
				ptr = list->n[ptr].next;
			list->n[ptr].next = list->n[list->crnt].next;
			DeleteIndex(list, list->crnt);
			list->crnt = ptr;
		}
	}
}

//��� ��带 ����
void Clear(List* list)
{
	while (list->head != Null)
		RemoveFront(list);
	list->crnt = Null;
}

//������ ����� �����͸� ���
void PrintCurrent(const List* list)
{
	if (list->crnt == Null)
		printf("������ ��尡 �����ϴ�");
	else
		PrintMember(&list->n[list->crnt].data);
}

//������ ����� �����͸� ���(�ٹٲ� ���� �߰�)
void PrintLnCurrent(const List* list)
{
	PrintCurrent(list);
	putchar('\n');
}

//��� ����� �����͸� ���
void Print(const List* list)
{
	if (list->head == Null)
		puts("��尡 �����ϴ�");
	else
	{
		Index ptr = list->head;
		puts("[��κ���]");
		while (ptr != Null)
		{
			PrintLnMember(&list->n[ptr].data);
			ptr = list->n[ptr].next;
		}
	}
}

//���� ����Ʈ ����
void Terminate(List* list)
{
	Clear(list);
	free(list->n);
}