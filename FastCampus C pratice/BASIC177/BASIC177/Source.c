#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[21];
	char s2[21];
	char s3[21];
	
	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%s", s3);
	
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	int n3 = strlen(s3);

	

	if (s1[n1-1] == s2[0] && s2[n2-1] == s3[0] && s3[n3-1] == s1[0])
		printf("good");
	else
		printf("bad");
	return 0;
}