#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

/*스택 초기화*/
int Initialize(IntStack* s, int max)
{
	s->ptr = 0; // 스택의 시작인덱스 0
	if ((s->stk = calloc(max, sizeof(int))) == NULL) // 
	{
		s->max = 0; //스택배열 생성 실패
		return -1;
	}
	s->max = max; //최대값 초기화
	return 0;
}

/*스택에 데이터를 푸쉬*/
int  Push(IntStack* s, int x)
{
	if (s->ptr >= s->max) // 스택이 가득참  스택포인터가 탑을 가리키고 있음 // 스택오버플로우 방지
		return -1; 
	s->stk[s->ptr++] = x; //데이터 푸쉬하고 포인터 증가
	return 0;
}

/*스택에 데이터를 팝*/
int Pop(IntStack* s, int* x)
{
	if (s->ptr <= 0) //스택포인터가 이미 바닥을 가리기고 있음 // 스택 언더플로우 방지
		return -1;
	s->ptr--;
	*x = s->stk[s->ptr]; //스택의 탑부터 데이터를 빼내서 포인터x에 저장후  스택포인터 감소
	return 0;
}

/*스택에서 데이터 피크*/ 
int Peek(IntStack* s, int* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[s->ptr - 1]; //팝과 유사하지만 피크는 데이터 입출력없이 탑부분의 데이터만 확인하는것// 스택포인터 변화X
	return 0;
}

//스택비우기
void Clear(IntStack* s)
{
	s->ptr = 0;
}
// 스택 용량
int Capacity(const IntStack* s)
{
	return s->max;
}

// 스택에 쌓여있는 데이터 수
int Size(const IntStack* s)
{
	return s->ptr;
}

//스택이 비어있는가 ( 비어있으면 1, 아니면 0)
int Isempty(const IntStack* s)
{
	return s->ptr <= 0;
}

//스택이 가득차 있는가( 가득차 있으면 1, 아니면 0)
int Isfull(const IntStack* s)
{
	return s->ptr >= s->max;
}

// 스택에서 검색 
int Search(const IntStack* s, int x)
{
	int i;
	for (i =s->ptr-1; i >= 0; i--) // top-> bottom으로 선형 검사(linear search)
	{
		if (s->stk[i] == x)
			return i;
	}
	return -1;
}

//모든데이터 출력
void Printf(const IntStack* s)
{
	int i;
	for (i = 0; i < s->ptr; i++)
		printf("%d ", s->stk[i]);
	putchar('\n');
}

//스택종료 == 메모리 할당 해제
void Terminate(IntStack* s)
{
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}