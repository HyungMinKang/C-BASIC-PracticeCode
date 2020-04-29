#include <stdio.h>

//전역적 2차원 배열 설정
int record[5][5];

/* 학생별 성적 입력*/
void WriteStudentInf(void)
{
	int i, j;
	int sum;

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		printf("%d번째 학생의 성적입력: \n", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("과목 %d :", j + 1);
			scanf_s("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

/*과목별 성적 합계 */
void WriteSumRecord(void)
{
	int sum = 0;// 과목별 합
	int i, j;

	for (i = 0; i<4; i++)
	{
		sum = 0;
		for (j = 0; j<4; j++)
			sum += record[j][i];
		record[4][i] = sum;
		record[4][4] += sum;
	}
	
}

/* 배열에 저장된 값 출력*/
void ShowAllresult(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%3d", record[i][j]);
		printf("\n");
	}
}
			
int main(void)
{
	WriteStudentInf();
	WriteSumRecord();
	ShowAllresult();
	return 0;
	
}