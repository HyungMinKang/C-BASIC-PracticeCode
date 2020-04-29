#ifndef __BitSet
#define __BitSet

typedef unsigned long BitSet;

#define BitSetNull (BitSet)0
#define BitSetBits 32
#define SetOf(no) ((BitSet)1 <<(no))

//���� s�� n�� �ִ��� Ȯ��
int IsMember(BitSet s, int n);

//���� s�� n�� �߰�
void Add(BitSet* s, int n);

//���� s���� n�� ����
void Remove(BitSet* s, int n);

//���� s�� ���Ұ����� ��ȯ
int Size(BitSet s);

//���� s�� ��� ���Ҹ� ���
void Print(BitSet s);

//���� s�� ��� ���Ҹ� ���(���� ��������)
void PrintLn(BitSet s);

#endif


