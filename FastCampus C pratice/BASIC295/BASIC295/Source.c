#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct stdinf   //학생이름과 성적정보 저장 구조체
{
	char name[10];
	int score;
}stdinf;



int main(void)
{	
	stdinf stdinf[100];
	int n; // 데이터 개수
	int m; // 출력 개수
	int tmp; //교환을 위한 그릇
	char tmp1[10];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) //데이터 개수 만큼 학생정보 입력
	{	
		scanf("%s", &stdinf[i].name);
		scanf("%d", &stdinf[i].score);
	}

	//성적순 정렬
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (stdinf[j].score < stdinf[j + 1].score)
			{
				tmp = stdinf[j].score;
				stdinf[j].score = stdinf[j + 1].score;
				stdinf[j + 1].score = tmp;

				strcpy(tmp1, stdinf[j].name);

				strcpy(stdinf[j].name, stdinf[j+1].name);

				strcpy(stdinf[j + 1].name, tmp1);
			}
		}
	}

	// 출력개수만큼 출력
	for (int i = 1; i <= m; i++)
	{
		printf("%s \n", stdinf[i].name);
	}

	return 0;
}