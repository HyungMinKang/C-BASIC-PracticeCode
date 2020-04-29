#ifndef ___ArrayLinkedList
#define ___ArrayLinkedList
#include "Member.h"

#define Null -1

typedef int Index;

//���
typedef struct {
	Member data;
	Index next;
	Index Dnext;
}Node;

//���Ḯ��Ʈ
typedef struct {
	Node* n; //����Ʈ ��ü(�迭)
	Index head; //�Ӹ����
	Index max; //������� ���� ���ڵ�
	Index deleted; //��������Ʈ�� �Ӹ����
	Index crnt; //������ ���
}List;

//���Ḯ��Ʈ �ʱ�ȭ (���� ū ��Ұ��� size)
void Initialize(List* list, int size);

//�Լ� compare�� x�� ���� ��带 �˻�
Index search(List* list, const Member* x, int compare(const Member* x, const Member* y));

//�Ӹ��� ��带 ����
void InsertFront(List* list, const Member* x);

//������ ��带 ����
void InsertRear(List* list, const Member* x);

//�Ӹ���带 ����
void RemoveFront(List* list);

//������带 ����
void RemoveRear(List* list);

//������ ��带 ����
void RemoveCurrent(List* list);

//��� ��带 ����
void Clear(List* list);

//������ ����� �����͸� ���
void PrintCurrent(const List* list);

//������ ����� ������ ���(�ٹٲ� ����)
void PrintLnCurrent(const List* list);

//��� ����� ������ ���
void Print(const List* list);

//���Ḯ��Ʈ ����
void Terminate(List* list);
#endif