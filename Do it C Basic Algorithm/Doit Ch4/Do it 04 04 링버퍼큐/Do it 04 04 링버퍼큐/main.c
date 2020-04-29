#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	IntQueue que;

	if (Intialize(&que, 64) == -1)
	{
		puts("큐생성 실패");
		return 1;
	}

	while (1)
	{
		int m, x;
		int idx;
		printf("현재 데이터 수: %d / %d \n", Size(&que) , Capacity(&que));
		printf("(1)인큐 (2)디큐 (3)피크 (4)출력 (5)초기화 (6)비어/가득 (7)탐색1 (8)탐색2 (0)종료: ");
		scanf("%d", &m);
		if (m == 0)
			break;

		switch (m)
		{
		case 1:
			printf("데이터: "); scanf("%d", &x);
			if (Enque(&que, x) == -1)
				puts("오류발생 인큐실패");
			break;

		case 2:
			if (Deque(&que, &x) == -1)
				puts("오류발생 디큐실패");
			else
				printf("디큐한 데이터는 %d입니다 \n", x);
			break;

		case 3:
			if (Peek(&que, &x) == -1)
				puts("오류발생 피크실패");
			else
				printf("피크한 데이터는 %d입니다 \n", x);
			break;

		case 4:
			Print(&que);
			break;

		case 5:
			Clear(&que);
			break;
		case 6:
			printf("큐는 가득 %s\n", Isfull(&que) ? "차있다" : "차있지 않다");
			printf("큐는 비어 %s\n", Isempty(&que) ? "있다" : "있지않다");
			break;

		case 7:
			printf("검색값:");
			scanf("%d", &x);
			if ((idx = Search(&que, x)) == -1)
				puts("탐색 실패");
			else
				printf("데이터는 인덱스%d에 있다", idx);
			break;

		case 8:
			printf("검색값:");
			scanf("%d", &x);
			if ((idx = Search2(&que, x)) == -1)
				puts("탐색 실패");
			else
				printf("데이터는 인덱스%d에 있다", idx);
			break;
		}
	}
	Terminate(&que);
	return 0;
}