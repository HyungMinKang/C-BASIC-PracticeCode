#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main(void)
{
	IntStack s;
	if (Initialize(&s, 12) == -1)
	{
		puts("스택 생성 실패");
		return 1;
	}

	while (1)
	{
		int menu, x;
		int idx;
		printf("현재 데이터수: A: %d  B: %d /%d\n\n", Size(&s, StackA), Size(&s, StackB), Capacity(&s));
		printf("(1)A에 푸쉬 (2)A에서 팝 (3)A에서 피크 (4)A 초기화 (5)A에서 검색 (6) A 출력 \n"
			"(7)B에 푸쉬 (8)B에서 팝 (9)B에서 피크 (10)B 초기화 (11)B에서 검색 (12) B 출력\n"
			"(13) 빈상태/가득찬 상태 (0) 종료\n");
		scanf("%d", &menu);

		if (menu == 0)
			break;
		switch (menu)
		{
		case 1:
			printf("데이터:");
			scanf("%d", &x);
			if (Push(&s, StackA, x) == -1)
				puts("오류발생 푸쉬에 실패했습니다");
			break;
		case 2:
			if (Pop(&s, StackA, &x) == -1)
				puts("오류발생 팝에 실패했습니다");
			else
				printf("팝 데이터는 %d입니다 \n", x);
			break;
		case 3:
			if (Peek(&s, StackA, &x) == -1)
				puts("오류발생 피크에 실패했습니다");
			else
				printf("피크데이터는 %d입니다\n", x);
			break;
		case 4: 
			Clear(&s, StackA);
			break;

		case 5:
			printf("검색값:");
			scanf("%d", &x);
			if ((idx = Search(&s, StackA, x) )== -1)
				puts("오류 발생 탐색 실패");
			else
				printf("데이터는 %d인덱스에 있다\n", idx);
			break;

		case 6:
			Printf(&s, StackA);
			break;

		case 7:
			printf("데이터:");
			scanf("%d", &x);
			if (Push(&s, StackB, x) == -1)
				puts("오류발생 푸쉬에 실패했습니다");
			break;
		
		case 8:
			if (Pop(&s, StackB, &x) == -1)
				puts("오류발생 팝에 실패했습니다");
			else
				printf("팝 데이터는 %d입니다 \n", x);
			break;


		case 9:
			if (Peek(&s, StackB, &x) == -1)
				puts("오류발생 피크에 실패했습니다");
			else
				printf("피크데이터는 %d입니다\n", x);
			break;

		case 10:
			Clear(&s, StackB);
			break;

		case 11:
			printf("검색값:");
			scanf("%d", &x);
			if ((idx = Search(&s, StackB, x)) == -1)
				puts("오류 발생 탐색 실패");
			else
				printf("데이터는 %d인덱스에 있다\n", idx);
			break;

		case 12:
			Printf(&s, StackB);
			break;

		case 13:
			printf("스택A는 비어 %s\n", Isempty(&s, StackA) ? "있습니다" : "있지 않습니다");
			printf("스택B는 비어 %s\n", Isempty(&s, StackB) ? "있습니다" : "있지 않습니다");
			printf("스택은 가득 %s\n", Isfull(&s) ? "차있습니다" : "차있지 않습니다");
			break;
		}
	}
	Terminate(&s);
	return 0;

}