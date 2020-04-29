#ifndef __LinkedList
#define __LinkedList

#include "Member.h"


//���
typedef struct __node {
	Member data; //������
	struct __node* next; //���� ��忡���� ������
}Node;

//���Ḯ��Ʈ
typedef struct
{
	Node* head;  //�Ӹ� ��忡����������
	Node* crnt; //������ ��忡 ���� ������
}List;

//���Ḯ��Ʈ �ʱ�ȭ
void Initialize(List* list);

//compare�Լ��� x�� ���� ���Ž��
Node* search(List* list, const Member* x, int compare(const Member* x, const Member* y));

//�Ӹ� ��忡 ����
void InsertFront(List* list, const Member* x);

//������ ��� ����
void InsertRear(List* list, const Member* x);

//�Ӹ� ��带 ����
void RemoveFront(List* list);

//���� ��带 ����
void RemoveRear(List* list);

//������ ��带 ����
void RemoveCurrent(List* list);

//��� ��� ����
void Clear(List* list);

//������ ����� ������ ���
void PrintCurrent(const List* list);

//������ ����� ������ ���(���๮�� ����)
void PrintLnCurrent(const List* list);

//�� ����� �����͸� ����Ʈ ������� ���
void Print(const List* list);

//���Ḯ��Ʈ ����
void Terminate(List* list);

//���� ������ ��带 ����� ��� ����
void Purge(List* list, int compare(const Member* x, const Member* y));

Node* Retrieve(List* list, int n);
#endif

