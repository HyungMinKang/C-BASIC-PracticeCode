#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "CircleDbLinkedlist.h"

//메뉴
typedef enum {
	TERMINATE, INS_FRONT,INS_REAR,	RMV_FRONT,RMV_REAR,PRINT_CRNT,
	RMV_CRNT,SRCH_NO,SRCH_NAME, PRINT_ALL, NEXT,PREV,CLEAR
}Menu;

//메뉴 선택
Menu SelectMenu(void)
{
	int i, ch;
	char* mstring[] = {
		"머리에 노드를 삽입",		"꼬리에 노드를 삽입",		"머리노드를 삭제",
		"꼬리 노드를 삭제",		"선택한 노드를 출력",		"선택한 노드를 삭제",
		"번호로 검색",			"이름으로 검색",			"모든 노드를 출력",
		"선택한 노드를 뒤쪽으로", "선택한 노드를 앞쪽으로",	"모든 노드를 삭제",
	};

	do {
		for (i = TERMINATE; i < CLEAR; i++)
		{
			printf("(%2d) %-22.22s ", i + 1, mstring[i]);
			if ((i % 3) == 2)
				putchar('\n');
		}
		printf("(0) 종료: ");
		scanf("%d", &ch);
	}while (ch<TERMINATE || ch>CLEAR);
	
	return (Menu)ch;
}

int main(void)
{
	Menu menu;
	Dlist list;
	Initalize(&list);
	do {
		Member x;
		switch (menu = SelectMenu()) {

			//머리에 노드를 삽입
		case INS_FRONT:
			x = ScanMember("머리에 삽입", MEMBER_NO | MEMBER_NAME);
			InsertFront(&list, &x);
			break;

			//꼬리에 노드를 삽입
		case INS_REAR:
			x = ScanMember("꼬리에 삽입", MEMBER_NO | MEMBER_NAME);
			InsertRear(&list, &x);
			break;

			//머리 노드를 삭제
		case RMV_FRONT:
			RemoveFront(&list);
			break;

			//꼬리 노드를 삭제
		case RMV_REAR:
			RemoveRear(&list);
			break;

			//선택한 노드의 데이터 출력
		case PRINT_CRNT:
			PrintLnCurrent(&list);
			break;

			//선택한 노드를 삭제
		case RMV_CRNT:
			RemoveCurrent(&list);
			break;

			//번호로 검색
		case SRCH_NO:
			x = ScanMember("검색", MEMBER_NO);
			if (Search(&list, &x, MemberNoCmp) != NULL)
				PrintLnCurrent(&list);
			else
				puts("그 번호의 데이터가 없습니다");
			break;

			//이름으로 검색
		case SRCH_NAME:
			x = ScanMember("검색", MEMBER_NAME);
			if (Search(&list, &x, MemberNameCmp) != NULL)
				PrintLnCurrent(&list);
			else
				puts("그 이름의 데이터가 없습니다");
			break;

			//모든 노드의 데이터 출력
		case PRINT_ALL:
			Print(&list);
			break;

			//선택한 노드를 뒤쪽으로 진행
		case NEXT:
			Next(&list);
			break;

			//선택한 노드를 앞쪽으로 진행
		case PREV:
			Prev(&list);
			break;

			//모든 노드를 삭제
		case CLEAR:
			Clear(&list);
			break;

		}
	} while (menu != TERMINATE);

	Terminate(&list);
	return 0;
}

		
	
