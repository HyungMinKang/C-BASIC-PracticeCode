// 구조체정렬 고급

#include<stdio.h>
#include<string.h>
typedef struct Lunch
{
	char menu[20]; // 메뉴
	int price; // 가격
}Lunch;

int main(void)
{
	Lunch lun[5];
	int i, j, n;
	Lunch tmp;
	n = sizeof(lun) / sizeof(Lunch);

	puts("------------------------");
	puts(" *구조체 정렬 고급 *");
	puts(" -----------------------");

	//1. 입력 
	printf("[%d]개의 즐겨먹는 점심 메뉴 입력 \n", n);
	puts("--------------------------------------");
	for (i = 0; i < n; i++)
	{
	do 
	{
		printf("[%d]번째 메뉴: ", i + 1);
		gets(lun[i].menu);
		printf(" 얼마에요: ");
		scanf_s("%d", &lun[i].price);
	} while (getchar() != '\n');
	}
	
	//2. 원본 출력- 점검하고 안되면 넘어가지 마세요
	puts("--- 원 본 출 력 ---");
	puts("  *** 메 뉴 판 ***  ");
	puts(" -----------------------");
	for (i = 0; i < n; i++)
		printf("[%d]번  %s ==> %d원 \n", i + 1, lun[i].menu, lun[i].price);
	puts("--------------------------");

	//3. 메뉴순 정렬
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(lun[j].menu, lun[j + 1].menu)>0)
			{
				tmp= lun[j];
				lun[j]=lun[j+1];
				lun[j+1]=tmp;
			}
		}
	}

	//4. 메뉴순 출력
	puts("--- 메뉴순 출 력 ---");
	puts("  *** 메 뉴 판 ***  ");
	puts(" -----------------------");
	for (i = 0; i < n; i++)
		printf("[%d]번  %s ==> %d원 \n", i + 1, lun[i].menu, lun[i].price);
	puts("--------------------------");

	//5.가격순 정렬
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (lun[j].price > lun[j + 1].price)
			{
				tmp = lun[j];
				lun[j] = lun[j + 1];
				lun[j + 1] = tmp;
			}
		}
	}

	//6. 가격순 출력
	puts("--- 가격순 출 력 ---");
	puts("  *** 메 뉴 판 ***  ");
	puts(" -----------------------");
	for (i = 0; i < n; i++)
		printf("[%d]번  %s ==> %d원 \n", i + 1, lun[i].menu, lun[i].price);
	puts("--------------------------");

	return 0;
}