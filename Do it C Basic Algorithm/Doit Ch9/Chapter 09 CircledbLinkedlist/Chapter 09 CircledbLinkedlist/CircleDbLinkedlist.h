#ifndef ___CircledbLinkedlist
#define ___CircledbLinkedlist
#include "Member.h"

//���
typedef struct __node {
	Member data;
	struct __node* prev;
	struct __node* next;
}Dnode;

//���� ���� ���Ḯ��Ʈ
typedef struct {
	Dnode* head;
	Dnode* crnt;
}Dlist;

//����Ʈ �ʱ�ȭ
void Initalize(Dlist* list);

//������ ����� �����͸� ���
void PrintCurrent(const Dlist* list);

//������ ����� ������ ���(���๮�� ����)
void PrintLnCurrent(const Dlist* list);

//compare�Լ��� x�� ��ġ�ϴ� ��带 �˻�
Dnode* Search(Dlist* list, const Member* x, int compare(const Member* x, const Member* y));

//��� ����� �����͸� ����Ʈ ������� ���
void Print(const Dlist* list);

//��� ����� �����͸� ����Ʈ ������ �������� ���
void PrintReverse(const Dlist* list);

//������ ����� �������� ����
int Next(Dlist* list);

//������ ����� �������� ����
int Prev(Dlist* list);

//p�� ����Ű�� ���ٷ� �ڿ� ��带 ����
void InsertAfter(Dlist* list, Dnode* p, const Member* x);

//�Ӹ��� ��带 ����
void InsertFront(Dlist* list, const Member* x);

//������ ��带 ����
void InsertRear(Dlist* list, const Member* x);

//p�� ����Ű�� ��� ����
void Remove(Dlist* list, Dnode* p);

//�Ӹ� ��� ����
void RemoveFront(Dlist* list);

//���� ��� ����
void RemoveRear(Dlist* list);

//������ ��带 ����
void RemoveCurrent(Dlist* list);

//��� ��� ����
void Clear(Dlist* list);

//���� ���߿��� ����Ʈ ����
void Terminate(Dlist* list);
#endif