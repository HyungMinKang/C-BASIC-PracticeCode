#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*공백제거 함수 */
void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}


int main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];

	/* fgets 를 통한 문자열 입력*/
	printf("문자열1 입력: ");
	fgets(str1, sizeof(str1), stdin);
	RemoveBSN(str1);
	
	printf("문자열2 입력: ");
	fgets(str2, sizeof(str2), stdin);
	RemoveBSN(str2);

	strncpy_s(str3, sizeof(str3), str1, sizeof(str3) - 1); //문자열 복사
	strcat_s(str3,sizeof(str3), str2); //문자열 붙이기 

	
	puts(str3); //결과 출력

	return 0;
}