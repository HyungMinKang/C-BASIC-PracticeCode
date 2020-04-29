#ifndef __IntSet
#define __IntSet

//int�� ������ �����ϴ� ����ü
typedef struct {
	int max; /*���� ũ��*/
	int num; //������ ���Ұ���
	int* set; // ���� ��ü�� �迭
}IntSet;

//�����ʱ�ȭ
int Initialize(IntSet *s, int max);

//���� s�� n�� ����ִ��� Ȯ��
int IsMember(const IntSet* s, int n);

//���� s�� n�� �߰�
void Add(IntSet* s, int n);

//���� s���� n�� ����
void Remove(IntSet*s, int n);

//���� s�� ���� �� �ִ� �ִ��� ���Ұ����� ��ȯ
int Capacity(const IntSet* s);

//���� s�� ���Ұ���
int Size(const IntSet* s);

//���� s2�� s1�� ����
void Assign(IntSet* s1, const IntSet* s2);

//���� s1�� s2�� ������ Ȯ��
int Equal(const IntSet* s1, const IntSet* s2);

//���� s2�� s3�� ��Ĩ���� s1�� ����
IntSet* Union(IntSet* s1, const IntSet* s2, const IntSet* s3);

//���� s2�� s3�� �������� s1�� ����
IntSet* Intersection(IntSet* s1, const IntSet* s2, const IntSet* s3);

//���� s2�� s3�� �������� s1�� ����
IntSet* Difference(IntSet* s1, const IntSet* s2, const IntSet* s3);

//���� s�� ��� ���� ���
void Print(const IntSet* s);

//���� s�� ��� ���� ��� (���๮�� ����)
void PrintLn(const IntSet* s);

//���� ����
void Terminate(IntSet* s);

//������ ����á�ٸ� 1 �ƴϸ� 0�� ��ȯ
int IsFull(const IntSet* s);

//������ ��� ���Ҹ� �����ϴ� �Լ�
void Clear(IntSet* s);

//���� s2,s3�� ��Ī ����s1�� �����ϴ� �Լ�
IntSet* symmetricDifference(IntSet* s1, const IntSet* s2, const IntSet* s3);

//���� s1�� s2�� ��� ���Ҹ� �߰��ϴ� �Լ�(s1 ������)��ȯ
IntSet* ToUnion(IntSet* s1, const IntSet* s2);

//���� s1���� s2�� ������� ���� ��� ���Ҹ� �����ϴ� �Լ�(s1������ ��ȯ)
IntSet* ToIntersection(IntSet* s1, const IntSet* s2);

//���� s1���� s2�� ����ִ� ��� ���Ҹ� �����ϴ� �Լ�(s1 ������ ��ȯ)
IntSet* ToDifference(IntSet* s1, const IntSet* s2);

//���� s1�� s2�� �κ������̸� 1, �ƴϸ� 0
int IsSubset(const IntSet* s1, const IntSet* s2);

//���� s1�� s2�� ���κ������̸� 1, �ƴϸ� 0
int IsProperSubset(const IntSet* s1, const IntSet* s2);

#endif
