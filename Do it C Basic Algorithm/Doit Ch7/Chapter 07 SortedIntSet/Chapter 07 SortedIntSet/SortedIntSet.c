#include <stdio.h>
#include <stdlib.h>
#include "SortedIntSet.h"

//집합 초기화
int Initialize(SortedIntSet* s, int max)
{
	s->num = 0;
	if ((s->set = calloc(max, sizeof(int))) == NULL)
	{
		max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

int Search(SortedIntSet* s, int n, int* flag)
{
	int pl = 0;
	int pr = s->num - 1;
	int pc;

	int* flag = 1;
	if (s->num <= 0) return 0;
	
	do 
	{
		pc = (pl + pr) / 2;
		if (s->set[pc] == n) {		
			*flag = 0;
			return pc;
		}
		else if (s->set[pc] < n)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);
	
	return pl;	
}

//집합 s에 n이 들어있는지 확인
int IsMember(const SortedIntSet* s, int n)
{
	int flag;
	int idx=Search(s,n,&flag);
	return flag ? idx : -1;

}

//집합 s에 n을 추가
void Add(SortedIntSet* s, int n)
{
	int idx, i, flag;
	if (s->num < s->max) {
		idx = _search(s, n, &flag);
		if (flag == 1) {					
			s->num++;
			for (i = s->num - 1; i > idx; i--)
				s->set[i] = s->set[i - 1];
			s->set[idx] = n;					
		}
	}
}

//집합 s에서 n을 제거
void Remove(SortedIntSet* s, int n)
{
	int i, idx, flag;
	
	if (s->num > 0) {
		idx = _search(s, n, &flag);
	if (flag == 0) 
	{						
		--s->num;
		for (i = idx; i < s->num; i++)		
			s->set[i] = s->set[i + 1];		
		}
	}
}

//집합s에 넣을 수있는 최대의 원소개수를 반환
int Capacity(const SortedIntSet* s)
{
	return s->max;
}

//집합 s의 원소개수를 반환
int Size(const SortedIntSet* s)
{
	return s->num;
}

//집합 s2를 s1에 대입
void Assign(SortedIntSet* s1, const SortedIntSet* s2)
{
	int i;
	int n = (s1->max < s2->num) ? s1->max : s2->num;
	for (i = 0; i < n; i++)
		s1->set[i] = s2->set[i];
	s1->num = n;
}

//집합 s1과 s2가 같은지 확인
int Equal(const SortedIntSet* s1, const SortedIntSet* s2)
{
	int i, j;
	if (Size(s1) != Size(s2))
		return 0;
	for (i = 0; i < s1->num; i++)
	{
		for (j = 0; j < s2->num; j++)
		{
			if (s1->set[i] == s2->set[j])
				break;
			if (j == s2->num)
				return 0;
		}
	}
	return 1;
}

//집합 s2와 s3의 합집합을 s1에 대입
SortedIntSet* Union(SortedIntSet* s1, const SortedIntSet* s2, const SortedIntSet* s3)
{
	int i;
	Assign(s1, s2);
	for (i = 0; i < s3->num; i++)
	{
		Add(s1, s3->set[i]);
	}
	return s1;
}

//집합 s2와 s3의 교집합을 s1에 대입
SortedIntSet* Intersection(SortedIntSet* s1, const SortedIntSet* s2, const SortedIntSet* s3)
{
	int i, j;
	s1->num = 0; // s1 을 공집합으로 만듭니다
	for (i = 0; i < s2->num; i++)
	{
		for (j = 0; j < s3->num; j++)
		{
			if (s2->set[i] == s3->set[i])
				Add(s1, s2->set[i]);
		}
	}
	return s1;
}

//집합 s2에 s3을 뺀 차집합을 s1에 대입
SortedIntSet* Difference(SortedIntSet* s1, const SortedIntSet* s2, const SortedIntSet* s3)
{
	int i, j;
	s1->num = 0;
	for (i = 0; i < s2->num; i++)
	{
		for (j = 0; j < s3->num; j++)
		{
			if (s2->set[i] == s3->set[i])
				break;
		}
		if (j == s3->num)
			Add(s1, s2->set[i]);
	}
	return s1;
}

//집합 s의 모든 원소 출력
void Print(const SortedIntSet* s)
{
	int i;
	printf("{");
	for (i = 0; i < s->num; i++)
		printf("%d ", s->set[i]);

	printf("}");
}
// 집합 s의 모든 원소 출력 + 개행
void PrintLn(const SortedIntSet* s)
{
	Print(s);
	putchar('\n');
}

//집합 종료
void Terminate(SortedIntSet* s)
{
	if (s->set != NULL)
	{
		free(s->set);
		s->max = s->num = 0;

	}
}

//집합이 가득찼는가 1/ 0
int IsFull(const SortedIntSet* s)
{
	return s->num >= s->max;
}

//집합 비우기
void Clear(SortedIntSet* s)
{
	s->num = 0;
}
// 집합 s1에 집합s2,s3의 대칭차 대입( 대칭차= s2,s3 합집합- s2,s3 교집합)
SortedIntSet* symmetricDifference(SortedIntSet* s1, const SortedIntSet* s2, const SortedIntSet* s3)
{
	int i, j;
	s1->num = 0;

	for (i = 0; i < s2->num; i++)
	{
		if ((IsMember(s3, s2->set[i])) == -1)
		{
			Add(s1, s2->set[i]);
		}
	}

	for (i = 0; i < s3->num; i++)
	{
		if ((IsMember(s2, s3->set[i])) == -1)
		{
			Add(s1, s3->set[i]);
		}
	}

	return s1;
}

//집합 s1에 s2의 모든 원소를 추가하는 함수(s1 포인터 반환)
SortedIntSet* ToUnion(SortedIntSet* s1, const SortedIntSet* s2)
{
	int i;
	for (i = 0; i < s2->num; i++)
	{
		Add(s1, s2->set[i]);

	}

	return s1;
}

//집합 s1에서 s2에 들어있지 않은 모든 원소를 삭제하는 함수(s1 포인터 반환)
SortedIntSet* ToIntersection(SortedIntSet* s1, const SortedIntSet* s2)
{
	int i, j;
	for (i = 0; i < s1->num; i++)
	{
		if ((IsMember(s2, s1->set[i])) == -1)
		{
			Remove(s1, s1->set[i]);
		}

	}
	return s1;
}

//집합 s1에서 s2에 들어있는 모든 원소를 삭제하는 함수(s1 포인터 반환)
SortedIntSet* ToDifference(SortedIntSet* s1, const SortedIntSet* s2)
{
	int i, j;
	for (i = 0; i < s2->num; i++)
	{
		Remove(s1, s2->set[i]);

	}
	return s1;
}

//집합 s1이 s2의 부분집합이면 1 아니면 0
int IsSubset(const SortedIntSet* s1, const SortedIntSet* s2)
{
	int i, j;
	for (i = 0; i < s1->num; i++)
	{
		for (j = 0; j < s2->num; j++)
		{
			if (s1->set[i] == s2->set[j])
				break;
		}
		if (j == s2->num)
			return 0;
	}
	return 1;
}

//집합 s1이 s2의 진부분집합 1 , 0
int IsProperSubset(const SortedIntSet* s1, const SortedIntSet* s2)
{
	if (s1->num >= s2->num)
		return 0;

	return IsSubset(s1, s2);
}