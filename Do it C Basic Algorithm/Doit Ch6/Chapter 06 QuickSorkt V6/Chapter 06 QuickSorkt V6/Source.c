#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

/*���� �ʱ�ȭ*/
int Initialize(IntStack* s, int max)
{
	s->ptr = 0; // ������ �����ε��� 0
	if ((s->stk = calloc(max, sizeof(int))) == NULL) // 
	{
		s->max = 0; //���ù迭 ���� ����
		return -1;
	}
	s->max = max; //�ִ밪 �ʱ�ȭ
	return 0;
}

/*���ÿ� �����͸� Ǫ��*/
int  Push(IntStack* s, int x)
{
	if (s->ptr >= s->max) // ������ ������  ���������Ͱ� ž�� ����Ű�� ���� // ���ÿ����÷ο� ����
		return -1; 
	s->stk[s->ptr++] = x; //������ Ǫ���ϰ� ������ ����
	return 0;
}

/*���ÿ� �����͸� ��*/
int Pop(IntStack* s, int* x)
{
	if (s->ptr <= 0) //���������Ͱ� �̹� �ٴ��� ������� ���� // ���� ����÷ο� ����
		return -1;
	s->ptr--;
	*x = s->stk[s->ptr]; //������ ž���� �����͸� ������ ������x�� ������  ���������� ����
	return 0;
}

/*���ÿ��� ������ ��ũ*/ 
int Peek(IntStack* s, int* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[s->ptr - 1]; //�˰� ���������� ��ũ�� ������ ����¾��� ž�κ��� �����͸� Ȯ���ϴ°�// ���������� ��ȭX
	return 0;
}

//���ú���
void Clear(IntStack* s)
{
	s->ptr = 0;
}
// ���� �뷮
int Capacity(const IntStack* s)
{
	return s->max;
}

// ���ÿ� �׿��ִ� ������ ��
int Size(const IntStack* s)
{
	return s->ptr;
}

//������ ����ִ°� ( ��������� 1, �ƴϸ� 0)
int Isempty(const IntStack* s)
{
	return s->ptr <= 0;
}

//������ ������ �ִ°�( ������ ������ 1, �ƴϸ� 0)
int Isfull(const IntStack* s)
{
	return s->ptr >= s->max;
}

// ���ÿ��� �˻� 
int Search(const IntStack* s, int x)
{
	int i;
	for (i =s->ptr-1; i >= 0; i--) // top-> bottom���� ���� �˻�(linear search)
	{
		if (s->stk[i] == x)
			return i;
	}
	return -1;
}

//��絥���� ���
void Printf(const IntStack* s)
{
	int i;
	for (i = 0; i < s->ptr; i++)
		printf("%d ", s->stk[i]);
	putchar('\n');
}

//�������� == �޸� �Ҵ� ����
void Terminate(IntStack* s)
{
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}