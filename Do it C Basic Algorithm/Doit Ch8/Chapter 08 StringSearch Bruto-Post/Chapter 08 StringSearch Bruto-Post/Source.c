#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//���Ʈ-������ 
int bf_match(const char txt[], const char pat[])
{	
	int i, k = -1;
	int pt = 0; // txtĿ��
	int pp = 0; //patternĿ��
	int cnt = 0;
	int tl = strlen(txt);
	int pl = strlen(pat);
	while (txt[pt] != '\0' && pat[pp] != '\0') // �ݺ��� Ż������- ���̻� �˻� text�� ������ && ������ �ؽ�Ʈ���� ã������
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
	printf("�񱳸� %d�� �õ��մϴ�\n", cnt);
	if (pat[pp] == '\0')
		return pt - pp;
	return -1;
}

int main(void)
{
	int idx;
	char s1[256]; //�ؽ�Ʈ
	char s2[256]; 
	puts("���Ʈ- ����Ʈ��");
	printf("�ؽ�Ʈ: ");
	scanf("%s", s1);
	printf("����: ");
	scanf("%s", s2);
	idx = bf_match(s1, s2);
	if (idx == -1)
		puts("�ؽ�Ʈ�� ������ �����ϴ�");
	else
		printf("%d���� ���ں��� match�մϴ�\n", idx + 1);

	return 0;
}