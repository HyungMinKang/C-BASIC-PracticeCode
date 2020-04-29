#ifndef __BitSet
#define __BitSet

typedef unsigned long BitSet;

#define BitSetNull (BitSet)0
#define BitSetBits 32
#define SetOf(no) ((BitSet)1 <<(no))

//집합 s에 n이 있는지 확인
int IsMember(BitSet s, int n);

//집합 s에 n을 추가
void Add(BitSet* s, int n);

//집합 s에서 n을 삭제
void Remove(BitSet* s, int n);

//집합 s의 원소개수를 반환
int Size(BitSet s);

//집합 s의 모든 원소를 출력
void Print(BitSet s);

//집합 s의 모든 원소를 출력(개행 문자포함)
void PrintLn(BitSet s);

#endif


