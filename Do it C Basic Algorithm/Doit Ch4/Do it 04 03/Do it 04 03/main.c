#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(void)
{
	ArrayIntQueue q;
	if (Intialize(&q, 64) == -1)
	{
		puts("큐 생성 실패");
		return 1;
	}

	while (1)
	{
		int menu, x;
		int idx;
		printf("현재 데이터수 %d/%d \n", Size(&q), Capacity(&q));
		printf("(1)인큐 (2)디큐 (3)피크 (4)초기화 (5)탐색 (6)비어있는지/가득차있는지 (7)출력 (0)종료\n");
		scanf("%d", &menu);
		if (menu == 0)
			break;

		switch (menu)
		{
		case 1:
			printf("데이터:");
			scanf("%d", &x);
			if (Enque(&q, x) == -1)
				puts("오류발생 인큐실패");
			break;

		case 2:
			if (Deque(&q, &x) == -1)
				puts("오류발생 디큐실패");
			else
				printf("디큐 데이터: %d\n", x);
			break;

		case 3:
			if (Peek(&q, &x) == -1)
				puts("오류발생 피크실패");
			else
				printf("피크 데이터: %d\n", x);
			break;

		case 4:
			Clear(&q);
			break;
		case 5:
			printf("검색값:");
			scanf("%d", &x);
			if ((idx = Search(&q, x)) == -1)
				puts("탐색 실패");
			else
				printf("데이터는 인덱스%d에 있다", idx);
			break;

		case 6:
			printf("큐는 가득 %s\n", Isfull(&q) ? "차있다" : "차있지 않다");
			printf("큐는 비어 %s\n", Isempty(&q) ? "있다" : "있지않다");
			break;
		
		case 7:
			Print(&q);
			break;
		}
		
	}
	Terminate(&q);
	return 0;
}