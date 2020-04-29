#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int card_convr(unsigned x, int n, char d[]) //정수 x를 n진수로 변환하여 배열d에 아래자리부터 저장
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0; /*변환후 자리수*/
	if (x == 0)
		d[digits++] = dchar[0];
	else
		while (x) {
			d[digits++] = dchar[x % n];
			x = x / n;
		}
	return digits;
}

int main(void)
{
	int i;
	unsigned no; //변환하는 정수
	int cd;  //기수 ==진수
	int dno; //변환후 자리수;
	char cno[512]; //변환한 값의 각 자리의 숫자를 저장하는 문자배열
	int retry;
	puts("10진수를 기수 변환합니다");
	do{
		printf("변환하는 음이 아닌 정수: ");
		scanf("%u", &no);
		do
		{
			printf("어떤 진수로 변환할까요(2-36): ");
			scanf("%d", &cd);
		} while (cd < 2 || cd>36);
		dno = card_convr(no, cd, cno);
		printf("%d진수로는", cd);
		for (i = dno - 1; i >= 0; i--)
			printf("%c", cno[i]);
		printf("입니다 \n");
		printf("한 번더 할까요(1-----예/0-----아니요): ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;

}