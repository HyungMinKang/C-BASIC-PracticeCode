#ifndef ___IntQueue
#define ___IntQueue

typedef struct {
	int max;
	int num;
	int* que;
}ArrayIntQueue;

//ť�ʱ�ȭ
int Intialize(ArrayIntQueue* q, int max);

//ť�� �����͸� ��ť
int Enque(ArrayIntQueue* q, int x);

//ť�� �����͸� ��ť
int Deque(ArrayIntQueue* q, int* x);

//ť�� �����͸� ��ũ
int Peek(const ArrayIntQueue* q, int* x);

//��� ������ ����
void Clear(ArrayIntQueue* q);

//ť�� �ִ�뷮
int Capacity(ArrayIntQueue* q);

//ť�� ����� ������ ����
int Size(const ArrayIntQueue* q);

//ť�� ����ִ°�
int Isempty(const ArrayIntQueue* q);

//ť�� ����á�°�
int Isfull(const ArrayIntQueue* q);

//ť���� �˻�
int Search(const ArrayIntQueue* q, int x);

//��� ������ ���
void Print(const ArrayIntQueue* q);

//ť ����
void Terminate(ArrayIntQueue* q);

#endif