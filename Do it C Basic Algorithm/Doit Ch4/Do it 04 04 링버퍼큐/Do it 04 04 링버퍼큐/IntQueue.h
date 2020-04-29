#ifndef ___IntQueue
#define ___IntQueue

typedef struct
{
	int max;  //큐의 최대용량
	int num; //현재이 요소개수
	int front;  //프런트
	int rear; //리어
	int* que;  //큐의 맨앞 요소에대한 포인터
}IntQueue;

//큐초기화
int Intialize(IntQueue* q, int max);

//큐에 데이터를 인큐
int Enque(IntQueue* q, int x);

//큐에 데이터를 디큐
int Deque(IntQueue* q, int* x);

//큐에 데이터를 피크
int Peek(const IntQueue* q, int* x);

//모든 데이터 삭제
void Clear(IntQueue* q);

//큐의 최대용량
int Capacity(IntQueue* q);

//큐의 저장된 데이터 개수
int Size(const IntQueue* q);

//큐가 비어있는가
int Isempty(const IntQueue* q);

//큐가 가득찼는가
int Isfull(const IntQueue* q);

//큐에서 검색
int Search(const IntQueue* q, int x);

//모든 데이터 출력
void Print(const IntQueue* q);

//큐탐색 2
int Search2(const IntQueue* q, int x);

//큐 종료
void Terminate(IntQueue* q);

#endif