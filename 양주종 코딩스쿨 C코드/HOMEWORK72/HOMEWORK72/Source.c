// 구조체 배열의 입출력
#include<stdio.h>
#include<string.h>
typedef struct Lunch
{
	char menu[20];  // 메뉴
	int price; // 가격
}Lunch;

int main(void)
{
	Lunch lun[5];
	int i, n;
	n = sizeof(lun) / sizeof(Lunch);

	puts("------------------");
	puts(" 구조체 배열의 입출력");
	puts("--------------------");

	printf("[%d]개의 즐겨먹는 점심  메뉴 입력 \n", n);
	puts("-------------------------------");
	for (i = 0; i < n; i++)
	{
		
	do{
	
		printf("[%d]번째 메뉴: ", i + 1);
		gets(lun[i].menu);
		printf(" 얼마에요: ");
		scanf_s("%d", &lun[i].price);

	} while (getchar() != '\n');
	}
	
	puts(" *** 메 뉴 판 ***"); 
	puts("---------------------");
	for (i = 0; i < n; i++)
		printf("[%d]번  %s ==> %d원 \n", i + 1, lun[i].menu, lun[i].price);
	puts("----------------------------");

	puts("fflush(stdin)은 키보드 입력버퍼 비우기");
	puts("------------------------------------");
	
	return 0; 
}