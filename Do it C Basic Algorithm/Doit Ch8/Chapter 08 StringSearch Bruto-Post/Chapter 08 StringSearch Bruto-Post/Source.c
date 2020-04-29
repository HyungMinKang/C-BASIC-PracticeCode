#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//브루트-포스법 
int bf_match(const char txt[], const char pat[])
{	
	int i, k = -1;
	int pt = 0; // txt커서
	int pp = 0; //pattern커서
	int cnt = 0;
	int tl = strlen(txt);
	int pl = strlen(pat);
	while (txt[pt] != '\0' && pat[pp] != '\0') // 반복문 탈출조건- 더이상 검색 text가 없을떄 && 패턴을 텍스트에서 찾았을때
	{	
		if (k == pt - pp)
			printf("    ");
		else
		{
			printf("%2d  ", pt - pp);
			k = pt - pp;
		}
		for (i = 0; i < tl; i++)
			printf("%c ", txt[i]);
		putchar('\n');

		printf("%*s%c\n", pt * 2 + 4, "", (txt[pt] == pat[pp]) ? '+' : '|');
		
		printf("%*s", (pt - pp) * 2 + 4, "");
		for (i = 0; i < pl; i++)
			printf("%c ", pat[i]);
		printf("\n\n");
		cnt++;
		if (txt[pt] == pat[pp])
		{  
			
			pt++;
			pp++;
			
		}
		else
		{	
			
			pt = pt - pp + 1;
			pp = 0;
			
		}
	}
	printf("비교를 %d번 시도합니다\n", cnt);
	if (pat[pp] == '\0')
		return pt - pp;
	return -1;
}

int main(void)
{
	int idx;
	char s1[256]; //텍스트
	char s2[256]; 
	puts("브루트- 포스트법");
	printf("텍스트: ");
	scanf("%s", s1);
	printf("패턴: ");
	scanf("%s", s2);
	idx = bf_match(s1, s2);
	if (idx == -1)
		puts("텍스트에 패턴이 없습니다");
	else
		printf("%d번쨰 문자부터 match합니다\n", idx + 1);

	return 0;
}