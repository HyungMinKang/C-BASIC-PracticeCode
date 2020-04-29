#pragma once
#ifndef ___IntStack
#define ___IntStack

typedef struct {
	int max; //스택용량
	char ptr; //스택포인터( 저장할 위치)
	char* stk; // 스택의 첫요소에 대한 포인터( 배열의 첫주소를 가리키는 것과 유사)
}CharStack;

//스택 초기화
int Initialize(CharStack* s, int max);

//스택에 데이터 푸쉬
int Push(CharStack* s, int x);

//스택에서 데이터를 팝
int Pop(CharStack* s, int* x);


// 스택 종료
void Terminate(CharStack* s);

#endif