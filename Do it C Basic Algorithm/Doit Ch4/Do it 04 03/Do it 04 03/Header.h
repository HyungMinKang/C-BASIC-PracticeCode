#ifndef ___IntQueue
#define ___IntQueue

typedef struct {
	int max;
	int num;
	int* que;
}ArrayIntQueue;

//큐초기화
int Intialize(ArrayIntQueue* q, int max);

//큐에 데이터를 인큐
int Enque(ArrayIntQueue* q, int x);

//큐에 데이터를 디큐
int Deque(ArrayIntQueue* q, int* x);

//큐에 데이터를 피크
int Peek(const ArrayIntQueue* q, int* x);

//모든 데이터 삭제
void Clear(ArrayIntQueue* q);

//큐의 최대용량
int Capacity(ArrayIntQueue* q);

//큐의 저장된 데이터 개수
int Size(const ArrayIntQueue* q);

//큐가 비어있는가
int Isempty(const ArrayIntQueue* q);

//큐가 가득찼는가
int Isfull(const ArrayIntQueue* q);

//큐에서 검색
int Search(const ArrayIntQueue* q, int x);

//모든 데이터 출력
void Print(const ArrayIntQueue* q);

//큐 종료
void Terminate(ArrayIntQueue* q);

#endif