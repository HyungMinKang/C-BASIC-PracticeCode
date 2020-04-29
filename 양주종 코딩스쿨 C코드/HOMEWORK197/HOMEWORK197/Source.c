//메모리 동적할당 (malloc, free 함수)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 10;
	int* p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		puts("동적할당실패!!");
	}

	*p = 50;

	printf("a= %d 주소 &a=%d \n", a, &a);
	printf("p=%d, 주소 &p=%d \n", p, &p);
	printf("p가 가리키는 값= %d \n", *p);

	free(p);

	return 0;
}
