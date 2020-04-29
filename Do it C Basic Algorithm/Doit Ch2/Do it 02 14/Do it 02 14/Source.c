#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x,y) do{type t=x; x=y; y=t;}while(0)


int card_conver(unsigned x, int n, char d[])
{
	int i;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;
	if (x == 0)
		d[digits++] = dchar[0];
	else {
		while (x)
		{
			d[digits++] = dchar[x % n];
			x /= n;
		}
	}
	
	for (i = 0; i < digits / 2; i++)
		swap(char, d[0], d[digits - i - 1]);

	return digits;
}

int main(void)
{
	int i;
	unsigned no;
	int cd;
	int dno;
	char cno[512];
	int retry;
	puts("10진수를 기수변환합니다");
	do {
		printf("변환하는 음이 아닌정수: ");
		scanf("%u", &no);
		do {
			printf("어떤 진수로 변환할까요(2-36):");
			scanf("%d", &cd);
		} while (cd < 2 || cd>36);
		dno = card_conver(no, cd, cno);
		printf("%d진수로는",cd);
		for (i = 0; i <= dno - 1; i++)
			printf("%c", cno[i]);
		printf("입니다");
		printf("한번더 할까요( 1---예/ 0---아니요): ");
		scanf("%d", &retry);
	} while (retry == 1);
	return 0;
}