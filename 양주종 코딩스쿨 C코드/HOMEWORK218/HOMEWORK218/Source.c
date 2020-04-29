//printf 함수 vs fprintf 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	puts(" **printf함수 출력 **");

	printf(" %d %.1f %c %s \n", 20, 3.14, 'A', "Kora");
	printf("인생은 한 판의 연극이다 \n");

	fprintf(stdout, "\n fprintf 함수 출력 \n");
	fprintf(stdout, " %d %.1f %c %s \n", 20, 3.14, 'A', "Kora");

	fprintf(stdout, "인생은 한 편의연극이다 \n");
	fprintf(stdout, "모니터 지정을 하는 stdout이 앞에 나온다\n");
	fprintf(stdout, "fputs 함수와 차이점은 \n");
	fprintf(stdout, "인수 위치가 다르다, fputs 함수는 뒤에 나온다");

	return 0;
}