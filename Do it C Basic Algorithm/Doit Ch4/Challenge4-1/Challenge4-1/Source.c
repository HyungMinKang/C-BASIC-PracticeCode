#include <stdio.h>
#include <string.h>

typedef struct Bookinf
{
	char writer[20];
	char name[20];
	int page;
}Bi;


		
int main(void)
{
	Bi arr[3];
	int i;
	puts("도서정보 입력");
	for (i = 0; i < 3; i++)
	{
	do {
		printf("저자: ");
		gets(arr[i].writer);
		printf("제목: ");
		gets(arr[i].name);
		printf("페이지수: ");
		scanf_s("%d", &arr[i].page);
	} while (getchar() != '\n');
	}


	puts(" 도서정보 출력");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("저자: %s \n", arr[i].writer);
		printf("이름: %s \n", arr[i].name);
		printf("페이지수:%d \n", arr[i].page);
	}

	return 0;
}