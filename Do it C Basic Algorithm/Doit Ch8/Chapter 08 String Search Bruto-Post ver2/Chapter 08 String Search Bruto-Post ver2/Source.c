#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int bf_matchr(const char txt[], const char pat[])
{
	int txt_len = strlen(txt);
	int pat_len = strlen(pat);
	int pt = txt_len - pat_len;
	int pp;
	while (pt >= 0)
	{	

		pp = 0;
		while (txt[pt] == pat[pp])
		{
			if (pp == pat_len - 1)
				return pt - pp;
			pp++;
			pt++;
		}
		pt = pt - pp - 1;
		
	}

	
	return -1;
}

int main(void)
{
	int idx;
	char s1[256]; /* �ؽ�Ʈ */
	char s2[256]; /* ���� */

	puts("���Ʈ-������(�˻� ���ڿ��� ������ �ε��� ��ȯ)");

	printf("�ؽ�Ʈ: ");
	scanf("%s", s1);

	printf("����: ");
	scanf("%s", s2);

	idx = bf_matchr(s1, s2);

	if (idx == -1)
		puts("�ؽ�Ʈ�� ������ �����ϴ�.");
	else
		printf("%d��° ���ڿ� ��ġ�մϴ�.\n", idx + 1);

	return 0;
}