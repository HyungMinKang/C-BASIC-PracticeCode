#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char st[128];
	puts("\"STRING\"�� ó�� 3�����ڿ� ���մϴ�");
	puts(" XXXX�� �Է��ϸ� �����մϴ�");
	while (1)
	{
		printf("���ڿ� st: ");
		scanf("%s", st);
		if (strncmp("XXXX", st,3) == 0)
			break;
		
		printf("strncmp(STRING,st,3)= %d\n", strncmp("STRING", st, 3));
	}

	return 0;
}

int str_ncmp(const char* s1, const char* s2, size_t n)
{
	
	while ( n &&*s1 &&*s2)
	{
		if (*s1 != *s2)
		{
			return (unsigned char)*s1 - (unsigned char)*s2;
		}
		n--;
		s1++;
		s2++;
	}
	
	if (!n) return 0;
	if (*s1) return 1;
	return -1;
	
}