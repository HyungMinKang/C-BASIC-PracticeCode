/*bsearch 함수를 사용한 구조체 배열에서의 문자열 검색*/
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

int main(void)
{
	Person x[] = {
	{"김영준",179,79},
	{"박현규",172,63},
	{"이수진",176,52},
	{"최윤미",165,51},
	{"함진아",181,73},
	{"홍연의",172,84},
	};
	
	int nx = sizeof(x) / sizeof(x[0]);
	int retry;
	puts("이름으로 검색합니다");
	do {
		Person temp, * p;
		printf("이름: "); // key
		scanf("%s", temp.name);
		p = bsearch(&temp, x, nx, sizeof(Person), (int(*)(const void*, const void*))npcmp);

		if (p == NULL)
			puts("검색에 실패");
		else {
			puts("검색 성공 ");
			printf("x[%d]: %s %dcm %dkg\n", (int)(p - x), p->name, p->height, p->weight);
		}
		printf("다시 검색할까요 (1)예/ (0) 아니요: ");
		scanf("%d", &retry);

	} while (retry == 1);

	return 0;
}