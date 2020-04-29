#ifndef ___IntStack
#define ___IntStack

typedef struct {
	int max; //스택용량
	int ptr; //스택포인터( 저장할 위치)
	int* stk; // 스택의 첫요소에 대한 포인터( 배열의 첫주소를 가리키는 것과 유사)
}IntStack;

//스택 초기화
int Initialize(IntStack* s, int max); 

//스택에 데이터 푸쉬
int Push(IntStack* s, int x);

//스택에서 데이터를 팝
int Pop(IntStack* s, int* x);

//스택에서 데이터 피크
int Peek(const IntStack* s, int* x);

//스택비우기
void Clear(IntStack* s);

//스택의 최대용량
int Capcaity(const IntStack* s);

//스택의 데이터 개수
int Size(const IntStack* s);

// 스택이 비어있나요
int Isempty(const IntStack* s);

//스택이 가득찼나요
int Isfull(const IntStack* s);

//스택에서 검색
int Search(const IntStack* s);

//모든 데이터 출력
void Printf(const IntStack* s);

// 스택 종료
void Terminate(IntStack* s);

#endif