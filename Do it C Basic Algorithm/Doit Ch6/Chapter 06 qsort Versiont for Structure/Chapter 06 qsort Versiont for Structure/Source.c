#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10];
	int height;
	int weight;
}Person;

int npcmp(const Person* x, const Person* y)
{
	return strcmp(x->name, y->name);
}

int hpcmp(const Person* x, const Person* y)
{
	return x->height<y->height ? 1 :
		x->height>y->height ? -1 : 0;
}

int wpcmp(const Person* x, const Person* y)
{
	return x->weight<y->weight ? -1 :
		x->weight>y->weight ? 1 : 0;
}

void print_person(const Person x[], int no)
{
	int i;
	for (i = 0; i < no; i++)
		printf("%-10s %dcm %dkg\n", x[i].name, x[i].height, x[i].weight);
}

int main(void)
{
	Person x[] = {
	{"sunmi",170,52},
	{"yoobin",180,60},
	{"sohee",172,63},
	{"jina",165,50},
	};

	int nx = sizeof(x) / sizeof(x[0]); //구조체 배열 x의 요소 개수;

	puts("정렬전");
	print_person(x, nx);

	//이름기준 오름차순 정렬
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*))npcmp);
	puts("\n이름기준 오름차순 정렬후");
	print_person(x, nx);

	//키기준 오름차순 정렬
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*))hpcmp);
	puts("\n키기준 오름차순 정렬후");
	print_person(x, nx);

	//몸무게 기준 내림차순 정렬
	qsort(x, nx, sizeof(Person), (int(*)(const void*, const void*))wpcmp);
	puts("\n무게 기준 내림차순 정렬후");
	print_person(x, nx);

	return 0;
}