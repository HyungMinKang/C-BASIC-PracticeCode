
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

/*스택 초기화*/
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
	s->max = max; //최대값 초기화
	return 0;
}

/*스택에 데이터를 푸쉬*/
int  Push(IntStack* s, int sw, int x)
{	
	if (s->ptrA >= s->ptrB+1)  //오버플로우 발생
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

/*스택에 데이터를 팝*/
int Pop(IntStack* s, int sw, int* x)
{
	switch (sw)
	{
	case StackA:  
		if (s->ptrA <= 0)  // 일반적인 스택과 동일 스택포인터가 바텀을 가리키면 팝 불가
			return -1;
		
		*x = s->stk[--s->ptrA]; break;  // 일반적 스택과 동일
	
	case StackB: 
		if (s->ptrB >= s->max - 1)   // 스택B의 바닥은 max-1 == 스택포인터B가  max-1을 가리키는것== 스택 B 비어있음
			return -1;
		*x = s->stk[++s->ptrB]; break;  //스택B는 일반적인 스택과 달리 팝하면서 index가 커짐
	}
	return 0;
}

/*스택에서 데이터 피크*/
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

//스택비우기
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
// 스택 용량
int Capacity(const IntStack* s)
{
	return s->max;
}

// 스택에 쌓여있는 데이터 수
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

//스택이 비어있는가 ( 비어있으면 1, 아니면 0)
int Isempty(const IntStack* s, int sw)
{
	return (sw == StackA) ? (s->ptrA <= 0) : (s->ptrB >= s->max - 1);
}

//스택이 가득차 있는가( 가득차 있으면 1, 아니면 0)
int Isfull(const IntStack* s)
{
	return s->ptrA >= s->ptrB + 1;
}

// 스택에서 검색 
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

//모든데이터 출력
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

//스택종료 == 메모리 할당 해제
void Terminate(IntStack* s)
{
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptrA= s->ptrB = 0;
}