
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

/*���� �ʱ�ȭ*/
int Initialize(IntStack* s,int max)
{
	s->ptrA = 0; 
	if ((s->stk = calloc(max, sizeof(int))) == NULL) // 
	{
		s->max = 0;
		s->ptrB = 0;
		return -1;
	}
	s->ptrB = max - 1;
	s->max = max; //�ִ밪 �ʱ�ȭ
	return 0;
}

/*���ÿ� �����͸� Ǫ��*/
int  Push(IntStack* s, int sw, int x)
{	
	if (s->ptrA >= s->ptrB+1)  //�����÷ο� �߻�
		return -1;
	switch (sw)
	{
	case StackA: 
		s->stk[s->ptrA++] = x;
		break;
	case StackB: 
		s->stk[s->ptrB--] = x;
		break;

	}
	return 0;
}

/*���ÿ� �����͸� ��*/
int Pop(IntStack* s, int sw, int* x)
{
	switch (sw)
	{
	case StackA:  
		if (s->ptrA <= 0)  // �Ϲ����� ���ð� ���� ���������Ͱ� ������ ����Ű�� �� �Ұ�
			return -1;
		
		*x = s->stk[--s->ptrA]; break;  // �Ϲ��� ���ð� ����
	
	case StackB: 
		if (s->ptrB >= s->max - 1)   // ����B�� �ٴ��� max-1 == ����������B��  max-1�� ����Ű�°�== ���� B �������
			return -1;
		*x = s->stk[++s->ptrB]; break;  //����B�� �Ϲ����� ���ð� �޸� ���ϸ鼭 index�� Ŀ��
	}
	return 0;
}

/*���ÿ��� ������ ��ũ*/
int Peek(IntStack* s, int sw, int* x)
{
	switch (sw)
	{
	case StackA:
		if (s->ptrA <= 0)
			return -1;
		*x = s->stk[s->ptrA - 1];
		break;
	
	case StackB:
		if (s->ptrB >= s->max - 1)
			return -1;
		*x = s->stk[s->ptrB + 1];
		break;
	}
	
	return 0;
}

//���ú���
void Clear(IntStack* s, int sw)
{	
	switch (sw)
	{
	case StackA:
		s->ptrA = 0;
		break;

	case StackB:
		s->ptrB = s->max-1;
		break;
	}
	
}
// ���� �뷮
int Capacity(const IntStack* s)
{
	return s->max;
}

// ���ÿ� �׿��ִ� ������ ��
int Size(const IntStack* s, int sw)
{
	switch (sw)
	{
	case StackA:
		return s->ptrA;
		break;
		
	case StackB:
		return s->max -s->ptrB-1;
		break;
	}
	return 0;
}

//������ ����ִ°� ( ��������� 1, �ƴϸ� 0)
int Isempty(const IntStack* s, int sw)
{
	return (sw == StackA) ? (s->ptrA <= 0) : (s->ptrB >= s->max - 1);
}

//������ ������ �ִ°�( ������ ������ 1, �ƴϸ� 0)
int Isfull(const IntStack* s)
{
	return s->ptrA >= s->ptrB + 1;
}

// ���ÿ��� �˻� 
int Search(const IntStack* s, int sw, int x)
{
	int i;
	switch (sw)
	{
	case StackA:
		for (i = s->ptrA - 1; i >= 0; i--)
			if (s->stk[i] == x)
				return i;
		
		return -1;
	
	case StackB:
		for (i = s->ptrB + 1; i < s->max; i++)
			if (s->stk[i] == x)
				return i;
		return -1;
	}

}

//��絥���� ���
void Printf(const IntStack* s, int sw)
{
	int i;
	switch (sw)
	{
	case StackA:
		for (i = 0; i < s->ptrA; i++)
			printf("%d ", s->stk[i]);
		break;

	case StackB:
		for (i = s->max-1; i > s->ptrB; i--)
			printf("%d ", s->stk[i]);
		break;
	}
}

//�������� == �޸� �Ҵ� ����
void Terminate(IntStack* s)
{
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptrA= s->ptrB = 0;
}