// fprintf 함수
#include <stdio.h>
int main(void)
{
	puts(" * fprintf 함수 *");

	puts(" **puts함수 출력** ");
	printf(" %d, %.1f %c %s \n", 20, 3.14, 'A', "kora");
	printf(" 인생은 한 판의 연극이다. \n");

	fprintf(stdout, " \n *** fprintf 함수 출력 *** \n");
	fprintf(stdout, " %d, %.1f %c %s \n", 20, 3.14, 'A', "kora");
	fprintf(stdout, "인생은 한 판의 연극이다. \n");
	
	puts("\n --------------------------------------------------");
	puts(" 대부분 printf 함수와 같다 ");
	puts(" 모니터 지정을 하는 stdout이 앞에 나와요 ");
	puts(" fputs 함수와 차이점이고, 만든 사람 마음이죠 ");
	puts(" ---------------------------------------------------");
	return 0;

}