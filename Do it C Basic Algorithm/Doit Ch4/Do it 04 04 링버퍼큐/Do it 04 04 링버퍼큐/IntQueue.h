#ifndef ___IntQueue
#define ___IntQueue

typedef struct
{
	int max;  //ť�� �ִ�뷮
	int num; //������ ��Ұ���
	int front;  //����Ʈ
	int rear; //����
	int* que;  //ť�� �Ǿ� ��ҿ����� ������
}IntQueue;

//ť�ʱ�ȭ
int Intialize(IntQueue* q, int max);

//ť�� �����͸� ��ť
int Enque(IntQueue* q, int x);

//ť�� �����͸� ��ť
int Deque(IntQueue* q, int* x);

//ť�� �����͸� ��ũ
int Peek(const IntQueue* q, int* x);

//��� ������ ����
void Clear(IntQueue* q);

//ť�� �ִ�뷮
int Capacity(IntQueue* q);

//ť�� ����� ������ ����
int Size(const IntQueue* q);

//ť�� ����ִ°�
int Isempty(const IntQueue* q);

//ť�� ����á�°�
int Isfull(const IntQueue* q);

//ť���� �˻�
int Search(const IntQueue* q, int x);

//��� ������ ���
void Print(const IntQueue* q);

//ťŽ�� 2
int Search2(const IntQueue* q, int x);

//ť ����
void Terminate(IntQueue* q);

#endif