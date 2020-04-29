
#ifndef ___IntQueue
#define ___IntQueue


typedef struct
{
	int max;  //ť�� �ִ�뷮
	int num; //������ ��Ұ���
	int front;  //����Ʈ
	int rear; //����
	int* que;//ť�� �Ǿ� ��ҿ����� ������
	
}IntQueue;

//ť�ʱ�ȭ
int Intialize(IntQueue* q, int max);

//ť front�� �����͸� ��ť
int FrontEnque(IntQueue* q, int x);

//ť rear�� �����͸� ��ť
int RearEnque(IntQueue* q, int x);

//ť front�� �����͸� ��ť
int FrontDeque(IntQueue* q, int* x);

//ť rear�� �����͸� ��ť
int RearDeque(IntQueue* q, int* x);

//ť front�� �����͸� ��ũ
int FrontPeek(const IntQueue* q, int* x);

//ť rear�� �����͸� ��ũ
int RearPeek(const IntQueue* q, int* x);

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