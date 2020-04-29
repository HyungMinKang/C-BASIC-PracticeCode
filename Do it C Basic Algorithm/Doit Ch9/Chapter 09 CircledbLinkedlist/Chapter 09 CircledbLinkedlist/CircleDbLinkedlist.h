#ifndef ___CircledbLinkedlist
#define ___CircledbLinkedlist
#include "Member.h"

//노드
typedef struct __node {
	Member data;
	struct __node* prev;
	struct __node* next;
}Dnode;

//원형 이중 연결리스트
typedef struct {
	Dnode* head;
	Dnode* crnt;
}Dlist;

//리스트 초기화
void Initalize(Dlist* list);

//선택한 노드의 데이터를 출력
void PrintCurrent(const Dlist* list);

//선택한 노드의 데이터 출력(개행문자 포함)
void PrintLnCurrent(const Dlist* list);

//compare함수로 x와 일치하는 노드를 검색
Dnode* Search(Dlist* list, const Member* x, int compare(const Member* x, const Member* y));

//모든 노드의 데이터를 리스트 순서대로 출력
void Print(const Dlist* list);

//모든 노드의 데이터를 리스트 순서의 역순으로 출력
void PrintReverse(const Dlist* list);

//선택한 노드의 다음으로 진행
int Next(Dlist* list);

//선택한 노드의 앞쪽으로 진행
int Prev(Dlist* list);

//p가 가리키는 노드바로 뒤에 노드를 삽입
void InsertAfter(Dlist* list, Dnode* p, const Member* x);

//머리에 노드를 삽입
void InsertFront(Dlist* list, const Member* x);

//꼬리에 노드를 삽입
void InsertRear(Dlist* list, const Member* x);

//p가 가리키는 노드 삭제
void Remove(Dlist* list, Dnode* p);

//머리 노드 삭제
void RemoveFront(Dlist* list);

//꼬리 노드 삭제
void RemoveRear(Dlist* list);

//선택한 노드를 삭제
void RemoveCurrent(Dlist* list);

//모든 노드 삭제
void Clear(Dlist* list);

//원형 이중연결 리스트 종료
void Terminate(Dlist* list);
#endif