#ifndef ___IntStack
#define ___IntStack

typedef struct {
	int max; //���ÿ뷮
	int ptr; //����������( ������ ��ġ)
	int* stk; // ������ ù��ҿ� ���� ������( �迭�� ù�ּҸ� ����Ű�� �Ͱ� ����)
}IntStack;

//���� �ʱ�ȭ
int Initialize(IntStack* s, int max);

//���ÿ� ������ Ǫ��
int Push(IntStack* s, int x);

//���ÿ��� �����͸� ��
int Pop(IntStack* s, int* x);

//���ÿ��� ������ ��ũ
int Peek(const IntStack* s, int* x);

//���ú���
void Clear(IntStack* s);

//������ �ִ�뷮
int Capacity(const IntStack* s);

//������ ������ ����
int Size(const IntStack* s);

// ������ ����ֳ���
int Isempty(const IntStack* s);

//������ ����á����
int Isfull(const IntStack* s);

//���ÿ��� �˻�
int Search(const IntStack* s, int x);

//��� ������ ���
void Printf(const IntStack* s);

// ���� ����
void Terminate(IntStack* s);

#endif