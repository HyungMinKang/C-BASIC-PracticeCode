#include <stdio.h>
#include <stdlib.h>
#include "CircleDbLinkedlist.h"

//1개 노드 동적생성
static Dnode* AllocDnode(void)
{
	return calloc(1, sizeof(Dnode));
}

//노드의 각 멤버값 설정
static void SetDnode(Dnode* n, const Member* x, const Dnode* prev, const Dnode* next)
{
	n->data = *x; //데이터
	n->prev = prev; //앞쪽 노드에 대한 포인터
	n->next = next; //다음 노드에 대한 포인터
}

//리스트가 비어있는지 검삼
static int IsEmpty(const Dlist* list)
{
	return list->head->next == list->head;
}

//리스트 초기화
void Initalize(Dlist* list)
{
	Dnode* dummyNode = AllocDnode(); //더미노드 생성
	list->head = list->crnt = dummyNode;
	dummyNode->prev = dummyNode->next = dummyNode;
}

void PrintCurrent(const Dlist* list)
{
	if (IsEmpty(list))
		printf("선택한 노드가 없습니다");
	else
		PrintMember(&list->crnt->data);
}

void PrintLnCurrent(const Dlist* list)
{
	PrintCurrent(list);
	putchar('\n');
}

//compare함수로 x와 일치하는 노드를 검색
Dnode* Search(Dlist* list, const Member* x, int compare(const Member* x, const Member* y))
{
	Dnode* ptr = list->head->next;
	while (ptr != list->head)
	{
		if (compare(&ptr->data, x) == 0)
		{
			list->crnt = ptr;
			return ptr;
		}
		ptr = ptr->next;
	}
	return NULL;
}

//모든 노드의 데이터를 리스트 순서대로 출력
void Print(const Dlist* list)
{
	if (IsEmpty(list))
		puts("노드가 없습니다");
	else
	{
		Dnode* ptr = list->head->next;
		puts("[모두 보기]");
		while (ptr != list->head)
		{
			PrintLnMember(&ptr->data);
			ptr = ptr->next;
		}
	}
}

//모든노드의 데이터를 리스트 역순으로 출력
void PrintReverse(const Dlist* list)
{
	if (IsEmpty(list))
		puts("노드가 없습니다");
	else
	{
		Dnode* ptr = list->head->prev;
		puts("[모두보기]");
		while (ptr != list->head)
		{
			PrintLnMember(&ptr->data);
			ptr = ptr->prev;
		}
	}
}

//선택한 노드를 다음으로 진행
int Next(Dlist* list)
{
	if (IsEmpty(list) || list->crnt->next == list->head) //리스트가 비어있거나, 선택한 노드가 마지막 노드일떄
		return 0; 
	list->crnt = list->crnt->next;
	return 1;
}

//선택한 노드를 앞쪽으로 진행
int Prev(Dlist* list)
{
	if (IsEmpty(list) || list->crnt->prev == list->head) //리스트가 비어있거나, 선택한 노드가 첫번쨰노드일떄
		return 0;
	list->crnt = list->crnt->prev;
	return 1;
}

//p가 가리키는 노드바로 다음 노드를 삽입
void InsertAfter(Dlist* list, Dnode* p, const Member *x)
{
	Dnode *ptr = AllocDnode();
	Dnode *nxt = p->next;
	p->next = p->next->prev = ptr;
	SetDnode(ptr, x, p, nxt);
	list->crnt = ptr;
}

//머리에 노드를 삽입
void InsertFront(Dlist* list, const Member* x)
{
	InsertAfter(list, list->head, x);
}

//꼬리에 노드를 삽입
void InsertRear(Dlist* list, const Member* x)
{
	InsertAfter(list, list->head->prev, x);
}

//p 가리키는 노드를 삭제
void Remove(Dlist* list, Dnode* p)
{
	p->prev->next = p->next;
	p->next->prev = p->prev;
	list->crnt = p->prev;
	free(p);
	if (list->crnt == list->head)
		list->crnt = list->head->next;
}

//머리 노드를 삭제
void RemoveFront(Dlist* list)
{
	if (!(IsEmpty(list)))
		Remove(list, list->head->next);
}

//꼬리 노드를 삭제
void RemoveRear(Dlist* list)
{
	if (!(IsEmpty(list)))
		Remove(list, list->head->prev);
}

//선택한 노드를 삭제
void RemoveCurrent(Dlist* list)
{
	if (list->crnt != list->head)
		Remove(list, list->crnt);
}

//모든 노드를 삭제
void Clear(Dlist* list)
{
	while (!IsEmpty(list))
		RemoveFront(list);
}

//원형 이중 연결리스트 종료
void Terminate(Dlist* list)
{
	Clear(list); //리스트 비우기
	free(list->head); //더미노드 삭제
}