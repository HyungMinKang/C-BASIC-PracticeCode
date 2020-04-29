#include <stdio.h>

int main(void) // 프로그램 시작
{
	int i=0, j=0; // 변수 설정 i= 행, j= 0개수 조절 변수 
	while (i < 5) // 5행 실행
	{
		while (j < i) // 0이 하나씩 증가함
		{
			printf("  0");
			j++;
		}

		j = 0; // j값 초기화
		printf(" * \n");
		i++; // 다음행
	}
	return 0; //프로그램 종료
}