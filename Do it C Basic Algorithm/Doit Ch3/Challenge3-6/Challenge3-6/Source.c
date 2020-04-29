#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void BSGcom(int*arr) // 컴퓨터 난수 입력,  중복검사
{
	srand((int)time(NULL));
	
	/*selection1*/
	arr[0] = rand()%10;

	/*selection2*/
	do {
		arr[1] = rand() % 10;  
	}while (arr[0] == arr[1]);  //중복시 재입력

	/*selection3*/
	do {
		arr[2] = rand() % 10;
	} while ((arr[0] == arr[1])||(arr[1]==arr[2])); //중복시 재입력
}


int IsValid(int* arr) // 중복성 검사(사용자 입력)
{
	if (arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2])
		return 0;
	else
		return 1;
}
void BSGusr(int* arr)
{

	int valid;

	printf("세 개의 숫자입력: ");
	while (1)
	{

		scanf_s("%d %d %d", &arr[0], &arr[1], &arr[2]);
		valid = IsValid(arr);

		if (valid == 1)
			break;
		else
			printf("잘못입력하셨습니다.  다시입력하세요 :");


	}
}

int Compare(int* arr1, int* arr2)
{
	static int count = 0;
	int strike = 0, ball = 0;
	int i, j;

	for (i = 0; i < 3; i++) // 스트라이크 조건 검사
	{
		if (arr1[i] == arr2[i])
			strike++;
	}
	for (i = 0; i < 3; i++) // 볼 조건검사  스트라이크와 겹치지 않게 주의
	{
		for (j = 0; j < 3; j++)
		{
			if (arr1[i] == arr2[j]&&i!=j)
			{
				ball++;
				break;
			}
		}
	}

	count++;
	printf("%d번째 도전 결과 : %dstrike, %dball!!\n", count, strike, ball); //결과 출력

	if (strike == 3) // 종료 조건 리턴값
		return 1;
	else  
		return 0;
}
int main(void)
{
	int usr[3], com[3];
	int result=0;
	int num = 1;

	
	BSGcom(com);
	printf("----------GAME START---------");
	
	while (result!=1) 
	{
		BSGusr(usr);
		result=Compare(com, usr);
		printf("\n");
	}
	printf("------GAME END------ \n");
	return 0;

}