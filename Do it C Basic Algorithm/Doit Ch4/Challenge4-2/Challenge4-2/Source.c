#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Bookinf
{
	char writer[20];
	char name[20];
	int page;
}Bi;

int main(void)
{
	Bi * arr[3];
	int i;
	puts("도서정보 입력");
	for (i = 0; i < 3; i++)
	{
		Bi * pBook = (Bi*)malloc(sizeof(Bi) * 1);
		do {
			printf("저자: ");
			gets(pBook -> writer);
			printf("제목: ");
			gets(pBook ->name);
			printf("페이지수: ");
			scanf_s("%d", &(pBook->page));
		} while (getchar() != '\n');
		arr[i] = pBook;
	}


	puts(" 도서정보 출력");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("저자: %s \n", arr[i]->writer);
		printf("이름: %s \n", arr[i]->name);
		printf("페이지수:%d \n", arr[i]->page);
	}

	for (i = 0; i < 3; i++)	// 할당된 메모리 해제.
	{
		free(arr[i]);

	}

	return 0;
}