#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

/*스택 초기화*/
int Initialize(CharStack* s, int max)
{
	s->ptr = 0; // 스택의 시작인덱스 0
	if ((s->stk = calloc(max, sizeof(char))) == NULL) // 
	{
		s->max = 0; //스택배열 생성 실패
		return -1;
	}
	s->max = max; //최대값 초기화
	return 0;
}

/*스택에 데이터를 푸쉬*/
int  Push(CharStack* s, char x)
{
	if (s->ptr >= s->max) // 스택이 가득참  스택포인터가 탑을 가리키고 있음 // 스택오버플로우 방지
		return -1;
	s->stk[s->ptr++] = x; //데이터 푸쉬하고 포인터 증가
	return 0;
}

/*스택에 데이터를 팝*/
int Pop(CharStack* s, char* x)
{
	if (s->ptr <= 0) //스택포인터가 이미 바닥을 가리기고 있음 // 스택 언더플로우 방지
		return -1;
	s->ptr--;
	*x = s->stk[s->ptr]; //스택의 탑부터 데이터를 빼내서 포인터x에 저장후  스택포인터 감소
	return 0;
}



//스택종료 == 메모리 할당 해제
void Terminate(CharStack* s)
{
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}