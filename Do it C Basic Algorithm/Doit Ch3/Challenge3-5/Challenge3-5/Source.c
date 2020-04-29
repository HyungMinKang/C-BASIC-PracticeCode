#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const R = 1;  // 주먹: 1
const S = 2;  // 가위: 2
const P = 3;  //  보:3

/*컴퓨터 가위바위보 입력 + 난수*/
int RSPcom(void) 
{	
	srand((int)time(NULL));
	int sel= rand() %3 +1;
	if (sel == 1)
		printf("컴퓨터는 바위선택 ");
	if (sel == 2)
		printf("컴퓨터는 가위선택 ");
	if (sel == 3)
		printf("컴퓨터는 보선택 ");
	return sel;
}


/* 유저 가위바위보 입력*/
int RSPusr(void)
{	
	int sel;
	printf("바위는 1, 가위는 2, 보는 3: ");
	scanf_s("%d", &sel);
	
	if (sel == 1)
		printf("당신은 바위선택, ");
	if (sel == 2)
		printf("당신은 가위선택, ");
	if (sel == 3)
		printf("당신은 보선택, ");

	return sel;

}

int Whoiswin(int s1, int s2)
{
	if (s1 == s2)  // 무승부
		return 0;
	else if (s1 % 3 == (s2 + 1) % 3) // s2 승리 
		return 1;
	else // s1 승리
		return -1;
}

int main(void)
{
	int usr, com;
	int result;
	int win=0, draw=0, lose=0;
	
	while (1)
	{
		usr = RSPusr();
		com = RSPcom();

		result = Whoiswin(com, usr);
		if (result == 1)
		{
			printf("당신이 이겼습니다 \n");
			win++;
		}
		else if (result == -1)
		{
			printf("당신이 졌습니다! \n");
			break;
		}
		else
		{
			printf("비겼습니다 \n");
			draw++;
		}

	}
	printf("게임의결과 %d승  %d무", win, draw);
	return 0;
}

