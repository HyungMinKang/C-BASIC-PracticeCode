#ifndef ___IntStack
#define ___IntStack

enum{StackA ,StackB};

typedef struct {
	int max; //���ÿ뷮
	int ptrA;//����������( ������ ��ġ)
	int ptrB;
	int* stk; // ������ ù��ҿ� ���� ������( �迭�� ù�ּҸ� ����Ű�� �Ͱ� ����)
}IntStack;

//���� �ʱ�ȭ
int Initialize(IntStack* s, int max);

//���ÿ� ������ Ǫ��
int Push(IntStack* s, int sw, int x);

//���ÿ��� �����͸� ��
int Pop(IntStack* s, int sw, int* x);

//���ÿ��� ������ ��ũ
int Peek(const IntStack* s, int sw, int* x);

//���ú���
void Clear(IntStack* s, int sw);

//������ �ִ�뷮
int Capacity(const IntStack* s);

//������ ������ ����
int Size(const IntStack* s, int sw);

// ������ ����ֳ���
int Isempty(const IntStack* s , int sw);

//������ ����á����
int Isfull(const IntStack* s);

//���ÿ��� �˻�
int Search(const IntStack* s, int sw, int x);

//��� ������ ���
void Printf(const IntStack* s, int sw);

// ���� ����
void Terminate(IntStack* s);

#endif
