#include <stdio.h>
#include <stdlib.h>
#include "ClosedHash.h"
#include "Member.h"

//해시함수
static int hash(int key, int size)
{
	return key % size;
}

//재해시 함수
static int rehash(int key, int size)
{
	return (key + 1) % size;
}

//각 노드의 멤버값설정
static void SetBucket(Bucket* n, const Member* x, Status stat)
{
	n->data = *x;
	n->stat = stat;
}

//해시테이블 초기화
int Initialize(ClosedHash* h, int size)
{
	int i;
	if ((h->table = calloc(size, sizeof(Bucket))) == NULL)
	{
		h->size = 0;
		return 0;
	}
	h->size = size;
	for (i = 0; i < size; i++)
		h->table[i].stat = Empty;
	return 1;
}

//검색
Bucket* Search(const ClosedHash* h, const Member* x)
{
	int i;
	int key = hash(x->no, h->size);
	Bucket* p = &h->table[key];
	for (i = 0; p->stat != Empty && i < h->size; i++)  //stat가 Deleted여도 검색 계속진행
 	{
		if (p->stat == Occupied && p->data.no == x->no)
			return p;
		key = rehash(key, h->size); //재해시
		p = &h->table[key];
	}
	return NULL;
}

//데이터 추가
int Add(ClosedHash* h, const Member* x)
{
	int i;
	int key = hash(x->no, h->size);
	Bucket* p = &h->table[key];

	if (Search(h, x)) //이 값은 이미 등록됨
		return 1;
	for (i = 0; i < h->size; i++)
	{
		if (p->stat == Empty || p->stat == Deleted) //해당 키값의 버켓이 비어있거나 삭제된 상태라면 등록됨으로 업데이트
		{
			SetBucket(p, x, Occupied);
			return 0;
		}
		key = rehash(key, h->size);
		p = &h->table[key];
	}

	return 2; //해시 테이블이 가득참
}

//데이터 삭제
int Remove(ClosedHash* h, const Member* x)
{
	Bucket* p = Search(h, x);
	if (p == NULL)
		return 1;
	p->stat = Deleted;
	return 0;
}

//해시 테이블 덤프
void Dump(const ClosedHash* h)
{
	int i;
	for (i = 0; i < h->size; i++)
	{
		printf("%02d : ", i);
		switch (h->table[i].stat)
		{
		case Occupied:
			printf("%d(%s)\n", h->table[i].data.no, h->table[i].data.name);
			break;
		case Empty:
			printf("-- 미등록 --\n");
			break;
		case Deleted:
			printf("-- 삭제마침 --\n");
			break;

		}
	}
}

//모든 데이터 삭제
void Clear(ClosedHash* h)
{
	int i;
	for (i = 0; i < h->size; i++)
		h->table[i].stat = Empty;
}

//해시테이블 종료
void Terminate(ClosedHash* h)
{
	Clear(h);
	free(h->table);
	h->size = 0;
}