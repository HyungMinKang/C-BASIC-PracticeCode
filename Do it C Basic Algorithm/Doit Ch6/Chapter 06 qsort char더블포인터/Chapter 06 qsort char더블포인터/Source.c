#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void twod_str(char* a, int n1, int n2)  //2차원 배열에 대한 qsort 
{
	qsort(a, n1, n2, (int(*)(const void*, const void*))strcmp);
}

static int p_str(const void*x, const void*y)
{
	return strcmp(*(const char** )x, *(const char** )y);
}

void sort_pvstr(char* p[], int n)
{
	qsort(p, n, sizeof(char *), p_str);
}

int main(void)
{
	int i;
	char a[][7] = { "LISP","C","Ada","Pascal" };
	char* p[] = { "LISP","C","Ada","Pascal" };

	twod_str(&a[0][0], 4, 7);
	
	sort_pvstr(p, 4);

	puts("오름차순으로 정렬했습니다.");
	
	for (i = 0; i < 4; i++)
		printf("a[%d] = %s\n", i, a[i]);
	
	for (i = 0; i < 4; i++)
		printf("p[%d] = %s\n", i, p[i]);
	
	return 0;
}