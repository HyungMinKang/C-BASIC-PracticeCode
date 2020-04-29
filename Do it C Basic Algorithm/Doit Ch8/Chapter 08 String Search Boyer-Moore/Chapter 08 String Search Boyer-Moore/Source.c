#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int bm_match(const char txt[], const char pat[])
{
	int pt; 
	int pp;
	int txt_len = strlen(txt);
	int pat_len = strlen(pat);
	int skip[UCHAR_MAX + 1];
	//건너뛰기 테이블 작성
	for (pt = 0; pt <= UCHAR_MAX; pt++)
	{
		skip[pt] = pat_len;   //패턴에 없는 문자이거나 패턴안에 하나밖에 없는 경우
	}
	for (pt = 0; pt < pat_len - 1; pt++)
	{
		skip[pat[pt]] = pat_len - pt - 1; //패턴안에 두개이상 존재 하는경우 마지막 인데그 기준 입력됨 패턴길이-인덱스-1
	}

	while (pt < txt_len)
	{
		pp = pat_len - 1;
		while (txt[pt] == pat[pp])
		{
			if (pp == 0)
				return pt;
			pp--;
			pt--;
		}
		pt += (skip[txt[pt]] > pat_len - pp) ? skip[txt[pt]] : pat_len - pp;
	}
	return -1;
}

int main(void)
{
	int idx;
	char s1[256]; //텍스트
	char s2[256]; // 패턴
	puts("Boyer-Moore법");
	printf("텍스트: ");
	scanf("%s", s1);
	printf("패턴: ");
	scanf("%s", s2);
	idx = bm_match(s1, s2);
	if (idx == -1)
		puts("텍스트에 패턴이 없습니다");
	else
		printf("%d번쨰 문자부터 match합니다\n", idx + 1);

	return 0;
}