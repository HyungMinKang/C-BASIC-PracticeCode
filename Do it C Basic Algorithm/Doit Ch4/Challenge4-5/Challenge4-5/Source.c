#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

const int same = 1;
const int diff = 2;

int main(void)
{
	FILE* fp1;
	FILE* fp2;
	char ch1[100];
	char ch2[100];
	int flag=same;
	fp1 = fopen("d1.txt", "rt"); //파일1 스트림 설정
	fp2 = fopen("d2.txt", "rt"); //파일2 스트림 설정

	if (fp1 == NULL || fp2 == NULL) {   //파일 오픈 오류검사
		printf("file open error");
		return -1;
	}



	while (1) // 루프
	{
		if (feof(fp1) != 0 && feof(fp2) != 0) //파일에 더이상 읽을 부분없으면 종료
			break;
		
		fgets(ch2, sizeof(ch2), fp2); //문자 하나씩 읽기
		fgets(ch1, sizeof(ch1), fp1);
		
		if (strcmp(ch1, ch2) != 0) // 문자열 비교 0이면 일치/ 그외에 불일치
		{	
			flag = diff; // 파일 불일치
			break;

		}

		
	}

	if (flag == same)
		fputs("두 개의 파일은 완전히 일치 합니다.", stdout);
	else
		fputs("두 개의 파일은 불일치 합니다.", stdout);

	fclose(fp1);  // 파일 닫기
	fclose(fp2);
	return 0; // 프로그램 종료

}