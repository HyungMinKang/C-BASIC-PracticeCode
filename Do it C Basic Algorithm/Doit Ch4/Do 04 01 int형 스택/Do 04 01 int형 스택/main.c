#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "IntStack.h"

int main(void)
{
	IntStack s; 
	if (Initialize(&s, 64) == -1)
	{
		puts("스택 생성에 실패했습니다");
		return 1;
	}

	while (1)
	{
		int menu, x;
		int idx;
		printf("현재 데이터수: %d/ %d\n", Size(&s), Capacity(&s));
		printf("(1) 푸쉬 (2)팝 (3)피크 (4)출력 (5)탐색 (6)초기화 (7)비어있나/가득 (0)종료");
		scanf("%d", &menu);

		if (menu == 0) break;
		switch (menu)
		{
		case 1: //푸쉬
			printf("데이터: ");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				puts("오류발생 푸쉬에 실패했습니다");
			break;


		case 2: //팝
			if (Pop(&s, &x) == -1)
				puts("오류발생 팝에 실패했습니다");
			else
				printf("팝 데이터는 %d입니다\n", x);
			break;

		case 3: //피크
			if (Peek(&s, &x) == -1)
				puts("오류발생 피크에 실패했습니다");
			else
				printf("피크 데이터는 %d입니다 \n", x);
			break;


		case 4: //출력
			Printf(&s);
			break;

		case 5: //탐색
			printf("탐색할 데이터:");
			scanf("%d", &x);
			idx = Search(&s, x);
			if (idx =Search(&s, x) == -1)
				puts("오류발생 탐색에 실패했습니다");
			else
				printf("데이터는 인덱스 %d에있습니다",idx);
			break;

		case 6: //초기화
			Clear(&s);
			break;
		case 7 :// 가득/비어
			printf("스택은 비어 %s \n", Isempty(&s) ? "있습니다" : "있지 않습니다");
			printf("스택은 가득 %s \n", Isfull(&s) ? "차있습니다" : "차있지 않습니다");
			break;
		}
	}
	Terminate(&s);
	return 0;
}