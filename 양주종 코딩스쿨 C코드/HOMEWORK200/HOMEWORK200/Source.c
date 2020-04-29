// 힙에 할당된 메모리 확인하기

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)  //패딩바이트 없애기

typedef struct Book
{
	char BookTilte[20];
	char BookAuthor[30];
	int pages;
}Book;

int main(void)
{
	char* cp = (char*)malloc(sizeof(char) * 30);
	int* ip = (int*)malloc(sizeof(int) * 10);
	double* dp = (double*)malloc(sizeof(double) * 5);
	Book* bp = (Book*)malloc(sizeof(Book) * 5);

	printf("cp에 할당된 메모리는 %d byte \n", _msize(cp));
	printf("ip에 할당된 메모리는 %d byte \n", _msize(ip));
	printf("dp에 할당된 메모리는 %d byte \n", _msize(dp));
	printf("bp에 할당된 메모리는 %d byte \n", _msize(bp));

	printf("구조체 Book= %d byte \n", sizeof(Book));

	return 0;
}