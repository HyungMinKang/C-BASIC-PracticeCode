#include <stdio.h>
#define swap_ptr(type,x,y) do{type t=x; x=y; y=t;} while(0)

int main(void)
{
	char* s1 = "ABCD";
	char* s2 = "EFGH";

	printf("������ s1�� \"%s\"�� ����ŵ�ϴ�\n", s1);
	printf("������ s2�� \"%s\"�� ����ŵ�ϴ�\n", s2);

	swap_ptr(char*,s1, s2);

	printf("\n������ s1�� s2�� ���� ���� ��ȯ�߽��ϴ�\n");

	printf("������ s1�� \"%s\"�� ����ŵ�ϴ�\n", s1);
	printf("������ s2�� \"%s\"�� ����ŵ�ϴ�\n", s2);

	return 0;
}