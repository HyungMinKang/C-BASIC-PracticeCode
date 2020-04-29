#pragma once
#ifndef ___IntStack
#define ___IntStack

typedef struct {
	int max; //���ÿ뷮
	char ptr; //����������( ������ ��ġ)
	char* stk; // ������ ù��ҿ� ���� ������( �迭�� ù�ּҸ� ����Ű�� �Ͱ� ����)
}CharStack;

//���� �ʱ�ȭ
int Initialize(CharStack* s, int max);

//���ÿ� ������ Ǫ��
int Push(CharStack* s, int x);

//���ÿ��� �����͸� ��
int Pop(CharStack* s, int* x);


// ���� ����
void Terminate(CharStack* s);

#endif