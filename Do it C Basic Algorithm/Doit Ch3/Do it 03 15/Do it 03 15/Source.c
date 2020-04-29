#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size, int(*compar)(const void*, const void*))
{
	size_t i;
	char* x = (char*)base;
	for (i = 0; i < nmemb; i++)
	{
		if (!compar((const void*)& x[i * size], key))
			return (&x[i * size]);
	}
	return NULL;  //�˻� ����
}

int int_cmp(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	else if (*(int*)a > * (int*)b)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i, nx, ky;
	int* x;
	int* p;
	printf("����� ����");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]: ",i);
		scanf("%d", &x[i]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);

	p = seqsearch(&ky, x, nx, sizeof(int), int_cmp);
	if (p == NULL)
		puts("Ž�� ����");
	else
		printf("%d�� x[%d]�� �ִ�", ky, (int)(p - x));

	free(x);
	return 0;
}