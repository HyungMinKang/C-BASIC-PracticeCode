#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_len(const char* s)
{
	int len = 0;
	while (s[len])
		len++;

	return len;
}

/*
int str_len(const char*s/)
{
	int len=0;
	while(*s++)
		lent++;
	return len;


*/

/*
int str_len(const char*s)
{
	const char *p=s;
	while(*s)
		s++;
	return s-p;
	
*/

int main(void)
{
	char str[256];
	printf("���ڿ�: ");
	scanf("%s", str);
	printf("�� ���ڿ��� ���̴� %d�Դϴ� \n", str_len(str));

	return 0;
}