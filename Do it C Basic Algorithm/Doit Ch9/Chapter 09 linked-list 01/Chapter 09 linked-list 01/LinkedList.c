#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "Linkedlist.h"


//노드를동적으로 생성
static Node* AllocNode(void)
{
	return calloc(1, sizeof(Node));
}

//n이 가리키는 노등 각 멤버에 값을 설정
static void SetNode(Node* n, const Member* x, const Node* next)
{
	n->data = *x;
	n->next = next;
}

//연결리스트 초기화
void Initialize(List* list)
{
	list->head = NULL;
	list->crnt = NULL;
}

//연결리스트에서 검색
Node* search(List* list, const Member* x, int compare(const Member* x, const Member* y))
{
	Node* ptr = list->head;
	while (ptr != NULL) //검색 노드가 꼬리노드일때까지
	{
		if (compare(&ptr->data, x) == 0)
		{
			list->crnt = ptr;
			return ptr;
		}
		ptr = ptr->next; //다음 노드를 선택
	}
	
	return NULL; //검색실패
}

//머리 노드에 삽입
void InsertFront(List* list, const Member* x)
{
	Node* ptr = list->head;
	list->head = list->crnt = AllocNode();
	SetNode(list->head, x, ptr);
}

//꼬리에 노드를 삽입
void InsertRear(List* list, const Member* x)
{
	if (list->head == NULL) //리스트가 비었다면 == 머리노드 삽입과정 수행
		InsertFront(list, x);
	else
	{
		Node* ptr = list->head;
		while (ptr->next != NULL) //꼬리노드 찾기
			ptr = ptr->next;
		ptr->next = list->crnt = AllocNode();
		SetNode(ptr->next, x, NULL);
	}
}

//머리 노드 삭제
void RemoveFront(List* list)
{
	if (list->head != NULL)
	{
		Node* ptr = list->head->next;
		free(list->head);
		list->head = list->crnt = ptr;
	}
}

//꼬리 노드 삭제
void RemoveRear(List* list)
{
	if (list->head != NULL)
	{
		if ((list->head)->next == NULL) //리스트에 삽입된 노드가 하나이다
			RemoveFront(list);

		else
		{
			Node* ptr = list->head;
			Node* pre=AllocNode();
			while (ptr->next != NULL)
			{
				pre = ptr;
				ptr = ptr->next;
			}
			pre->next = NULL; //pre는 꼬리노드로 전노드 == 꼬리노드 삭제후 꼬리노드가 됨)
			free(ptr); // 꼬리노드 할당해제
			list->crnt = pre; 
		}
	
	}
}

//선택한 노드를 삭제하는 함수
void RemoveCurrent(List* list)
{
	if (list->head != NULL)
	{
		if (list->crnt == list->head)
			RemoveFront(list);
		else
		{
			Node* ptr = list->head;
			while (ptr->next != list->crnt) //삭제할 노드 앞 노드 찾기
			{
				ptr = ptr->next;
			}
			ptr->next = list->crnt->next; //삭제할 노드 앞 노드의 next값을 삭제할노드의 값으로 업데이트
			free(list->crnt); //선택한 노드 삭제
			list->crnt = ptr; //선택한 노드= 삭제할 노드 앞노드로 업데이트
		}
	}
}

//모든 노드를 삭제
void Clear(List* list)
{
	while (list->head != NULL)
		RemoveFront(list);
	list->crnt = NULL;
}

//선택한 노드의 데이터를 출력
void PrintCurrent(const List* list)
{
	if (list->crnt == NULL)
		printf("선택한 노드가 없습니다");
	else
		PrintMember(&list->crnt->data);
}
void PrintLnCurrent(const List* list)
{
	PrintCurrent(list);
	putchar('\n');
}

//모든 노드 데이터를 리스트 순으로 출력
void Print(const List* list)
{
	if (list->head == NULL)
		puts("노드가 없습니다");
	else
	{
		Node* ptr = list->head;
		puts("[모두 보기]");
		while (ptr != NULL)
		{
			PrintLnMember(&ptr->data);
			ptr = ptr->next;
		}
	}
}

void Terminate(List* list)
{
	Clear(list);
}

void Purge(List* list, int compare(const Member* x, const Member* y))
{
	Node* ptr = list->head;

	while (ptr!= NULL)
	{
		Node* ptr2 = ptr;
		Node* pre = ptr;
		while (pre->next != NULL)
		{
			ptr2 = pre->next;
			if (!(compare(&ptr->data, &ptr2->data)))
			{
				pre->next = ptr2->next;
				free(ptr2);
			}
			else
			{
				pre = ptr2;
			}
		}
		ptr = ptr->next;
	}
	list->crnt = list->head;
}

Node* Retrieve(List* list, int n)
{
	Node* ptr = list->head;

	while (n >= 0 && ptr != NULL)
	{
		if (n-- == 0)
		{
			list->crnt = ptr;
			return ptr;
		}
		ptr = ptr->next;
	}

	return NULL;
}