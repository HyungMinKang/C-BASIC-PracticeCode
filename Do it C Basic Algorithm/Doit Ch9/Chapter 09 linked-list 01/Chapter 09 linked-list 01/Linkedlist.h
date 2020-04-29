#ifndef __LinkedList
#define __LinkedList

#include "Member.h"


//노드
typedef struct __node {
	Member data; //데이터
	struct __node* next; //다음 노드에대한 포인터
}Node;

//연결리스트
typedef struct
{
	Node* head;  //머리 노드에대한포인터
	Node* crnt; //선택한 노드에 대한 포인터
}List;

//연결리스트 초기화
void Initialize(List* list);

//compare함수로 x와 같은 노드탐색
Node* search(List* list, const Member* x, int compare(const Member* x, const Member* y));

//머리 노드에 삽입
void InsertFront(List* list, const Member* x);

//꼬리에 노드 삽입
void InsertRear(List* list, const Member* x);

//머리 노드를 삭제
void RemoveFront(List* list);

//꼬리 노드를 삭제
void RemoveRear(List* list);

//선택한 노드를 삭제
void RemoveCurrent(List* list);

//모든 노드 삭제
void Clear(List* list);

//선택한 노드의 데이터 출력
void PrintCurrent(const List* list);

//선택한 노드의 데이터 출력(개행문자 포함)
void PrintLnCurrent(const List* list);

//모돈 노드의 데이터를 리스트 순서대로 출력
void Print(const List* list);

//연결리스트 종료
void Terminate(List* list);

//가장 앞쪽의 노드를 남기고 모두 삭제
void Purge(List* list, int compare(const Member* x, const Member* y));

Node* Retrieve(List* list, int n);
#endif

