#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*** 공백 확인 함수***/
int GetSpaceIPX(char str[])
{
	int i, len;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;   // 공백문자의 위치 설정- 하나의 문자열에서 이름과 나이 구분기준  str[0]~str[i-1] 이름, str[i+1]~str[len] 나이
	}

	return -1;
}

/***이름 길이 비교 함수***/
int CompareName(char str1[], char str2[])
{
	int idx1 = GetSpaceIPX(str1);
	int idx2 = GetSpaceIPX(str2);
	
	
	if (idx1 != idx2) //길이가 다르면 다른 이름
		return 0;

	else
		return !strncmp(str1, str2, idx1); // 문자열 비교 같은이름 이면 !0 =1,  다른이름이면 !1=0

}
/***나이 비교 함수***/
int CompareAge(char str1[], char str2[])
{
	int idx1 = GetSpaceIPX(str1);
	int idx2 = GetSpaceIPX(str2);
	int age1, age2;
	age1 = atoi(&str1[idx1 + 1]); // 나이가 저장된 위치  정수값으로 전환
	age2 = atoi(&str2[idx2 + 1]); 

	if (age1 == age2) // 정수값 비교
		return 1;
	else
		return 0;
}

void RemoveBSN(char str[]) //공백제거 함수
{
	int len = strlen(str);
	str[len - 1] = 0;
 }
/*** 비교함수 리턴값으로 결과 출력 메인함수***/
int main(void)
{
	char str1[20];
	char str2[20];

	printf("첫번쟤 사람 정보 입력: ");
	fgets(str1, sizeof(str1), stdin);
	RemoveBSN(str1);

	printf("두번쟤 사람 정보 입력: ");
	fgets(str2, sizeof(str2), stdin);
	RemoveBSN(str2);

	if (CompareName(str1, str2)) //return값이 1이면 참= 같은 이름일경우 return이 1이다
		puts("이름이 동일합니다");

	else  // 길이가 다르거나   strncmp 함수 return 값이 1인경우
		puts("이름이 다릅니다");

	if (CompareAge(str1, str2)) // 단수 정수값 비교 return 결과
		puts("나이가 같습니다!");
	else
		puts("나이가 다릅니다");

	return 0;

}