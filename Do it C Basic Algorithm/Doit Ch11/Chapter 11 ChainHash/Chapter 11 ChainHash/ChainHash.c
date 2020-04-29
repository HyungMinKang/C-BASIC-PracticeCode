#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "ChainHash.h"

//해시 함수(key값 반환)
static int hash(int key, int size)
{
	return key % size;
}

//노드의 각 멤버에 값을 설정
static void SetNode(Node* n, const Member* x, const Node* next)
{
	n->data = *x;
	n->next = next;
}

//해시테이블 초기화
int Initialize(ChainHash* h, int size)
{
	int i;
	if ((h->table = calloc(size, sizeof(Node*))) == NULL)
	{
		h->size = 0;
		return 0;
	}
	h->size = size;
	for (i = 0; i < size; i++)
		h->table[i] = NULL;
	return 1;
}

//검색
Node* Search(const ChainHash* h, const Member* x)
{
	int key = hash(x->no, h->size); //검색하는 데이터의 해시값
	Node* p = h->table[key]; //현재 서택한 노드
	
	while (p != NULL)
	{
		if (p->data.no == x->no) //검색성공
			return p;
		p = p->next; //다음 노드 선택
	}
	return NULL; //검색 실패
}


//데이터 추가
int Add(ChainHash* h, const Member* x)
{
	int key = hash(x->no, h->size); //추가하는 데이터의 해시값
	Node* p = h->table[key]; 
	Node* temp;
	while (p != NULL)
	{
		if (p->data.no == x->no) //이키는 이미 등록됨
			return 1;
		p = p->next;
	}
	if ((temp = calloc(1, sizeof(Node))) == NULL)
		return 2;
	SetNode(temp, x, h->table[key]);
	h->table[key] = temp;
	return 0; //추가성공
}

//데이터 삭제
int Remove(ChainHash* h, const Member* x)
{
	int key = hash(x->no, h->size);
	Node* p = h->table[key]; //현재 선택한 노드
	Node** pp = &h->table[key]; //현재 선택한 노드에대한 포인터
	while (p != NULL)
	{
		if (p->data.no == x->no)
		{
			*pp = p->next; //만약 삭제하는 노드의 다음노드 존재시  삭제노드를 가리키던 포인터를 다음노드로 업데이트
			free(p);  //삭제노드 메모리할당 해제
			return 0;
		}
		pp = &p->next; 
		p = p->next;
	}
	return 1; //삭재 실패(테이블에 존재하지 않음)
}

//해시 테이블 덤프( print all)
void Dump(const ChainHash* h)
{
	int i;
	for (i = 0; i < h->size; i++)
	{
		Node* p = h->table[i]; // 각 버킷에 접근
		printf("%02d  ", i);
		while (p != NULL) //각 버킷에 있는 연결리스트 출력
		{
			printf("->%d :(%s) ", p->data.no, p->data.name); 
			p = p->next;
		}
		putchar('\n');
	}
}

//모든 데이터 삭제
void Clear(ChainHash* h)
{
	int i;
	for (i = 0; i < h->size; i++)
	{
		Node* p = h->table[i];
		while (p != NULL)
		{
			Node* next = p->next;
			free(p);
			p = next;
		}
		h->table[i] = NULL;
	}
}

//해시테이블 종료
void Terminate(ChainHash* h)
{
	Clear(h);
	free(h->table);
	h->size = 0;
}