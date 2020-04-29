#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

/*���� �ʱ�ȭ*/
int Initialize(CharStack* s, int max)
{
	s->ptr = 0; // ������ �����ε��� 0
	if ((s->stk = calloc(max, sizeof(char))) == NULL) // 
	{
		s->max = 0; //���ù迭 ���� ����
		return -1;
	}
	s->max = max; //�ִ밪 �ʱ�ȭ
	return 0;
}

/*���ÿ� �����͸� Ǫ��*/
int  Push(CharStack* s, char x)
{
	if (s->ptr >= s->max) // ������ ������  ���������Ͱ� ž�� ����Ű�� ���� // ���ÿ����÷ο� ����
		return -1;
	s->stk[s->ptr++] = x; //������ Ǫ���ϰ� ������ ����
	return 0;
}

/*���ÿ� �����͸� ��*/
int Pop(CharStack* s, char* x)
{
	if (s->ptr <= 0) //���������Ͱ� �̹� �ٴ��� ������� ���� // ���� ����÷ο� ����
		return -1;
	s->ptr--;
	*x = s->stk[s->ptr]; //������ ž���� �����͸� ������ ������x�� ������  ���������� ����
	return 0;
}



//�������� == �޸� �Ҵ� ����
void Terminate(CharStack* s)
{
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}