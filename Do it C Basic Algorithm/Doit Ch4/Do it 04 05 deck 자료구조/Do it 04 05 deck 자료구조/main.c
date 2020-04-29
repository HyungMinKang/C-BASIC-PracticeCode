#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(void)
{
	IntQueue deck;

	if (Intialize(&deck, 64) == -1)
	{
		puts("deck 생성 실패");
		return 1;
	}

	while (1)
	{
		int m, x, idx;
		printf("현재 데이터 개수 %d / %d\n", Size(&deck), Capacity(&deck));
		printf("(1)front인큐 (2)front 디큐 (3)front 피크 (4)rear인큐 (5)rear 디큐 (6)rear 피크 \n"
			"(7)초기화 (8)출력 (9)탐색1 (10)탐색2 (11)empty/full? (0)종료");
		scanf("%d", &m);
		switch (m)
		{
		case 1:
			printf("데이터 값:");
			scanf("%d", &x);
			if (FrontEnque(&deck, x) == -1)
				puts("오류발생 프론트인큐 실패");
			break;

		case 2:
			if (FrontDeque(&deck, &x) == -1)
				puts("오류발생 프론트디큐 실패");
			else
				printf("프론트디큐한 값: %d \n", x);
			break;

		case 3:
			if (FrontPeek(&deck, &x) == -1)
				puts("오류발생 프론트 피크 실패");
			else
				printf("프론트피크값: %d \n", x);
			break;

		case 4:
			printf("데이터 값:");
			scanf("%d", &x);
			if (RearEnque(&deck, x) == -1)
				puts("오류발생 리어인큐 실패");
			break;

		case 5:
			if (RearDeque(&deck, &x) == -1)
				puts("오류발생 리어디큐 실패");
			else
				printf("리어디큐한 값: %d \n", x);
			break;

		case 6:
			if (RearPeek(&deck, &x) == -1)
				puts("오류발생 리어 피크 실패");
			else
				printf("리어피크값: %d \n", x);
			break;

		case 7:
			Clear(&deck);
			break;

		case 8:
			Print(&deck);
			break;

		case 9:
			printf("검색값:");
			scanf("%d", &x);
			if ((idx = Search(&deck, x)) == -1)
				puts("탐색 실패");
			else
				printf("데이터는 인덱스%d에 있다", idx);
			break;


		case 10:
			printf("검색값:");
			scanf("%d", &x);
			if ((idx = Search2(&deck, x)) == -1)
				puts("탐색 실패");
			else
				printf("데이터는 인덱스%d에 있다", idx);
			break;

		case 11:
			printf("큐는 가득 %s\n", Isfull(&deck) ? "차있다" : "차있지 않다");
			printf("큐는 비어 %s\n", Isempty(&deck) ? "있다" : "있지않다");
			break;

		}
	}
	Terminate(&deck);
	return 0;
}