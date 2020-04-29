//헤더파일 limits.h 정수형 범위의 상수 정의

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("CHAR_BIT = %d char의 비트수 \n", CHAR_BIT);

	puts("\n char형");
	printf("CHAR_MIN= %d signed char의 최소값 \n", CHAR_MIN);
	printf("CHAR_MAX= %d signed char의 최댓값 \n", CHAR_MAX);

	puts(" \n signed char형");

	printf("SCHAR_MIN= %d signed char의 최소값 \n", SCHAR_MIN);
	printf("SCHAR_MAX= %d signed char의 최대값 \n", SCHAR_MAX);
	printf("UCHAR_MAX= %d unsigned char의 최댓값 \n", UCHAR_MAX);

	puts("\n short형");

	printf("SHRT_MIN= %d short int 최솟값 \n", SHRT_MIN);
	printf("SHRT_MAX= %d short int 최댓값 \n", SHRT_MAX);
	printf("USHRT_MAX= %d unsigned short int 최댓값 \n", USHRT_MAX);

	puts("\n int형");
	
	printf("INT_MIN= %d int 최솟값 \n", INT_MIN);
	printf("INT_MAX= %d int 최댓값 \n", INT_MAX);
	printf("UINT_MAX= %u unsigned short int 최댓값 \n", UINT_MAX);

	puts(" \n long형");

	printf("LONG_MIN= %d long 최솟값 \n", LONG_MIN);
	printf("LONG_MAX= %d long 최댓값 \n", LONG_MAX);
	printf("ULONG_MAX= %u unsigned long 최댓값 \n", ULONG_MAX);

	return 0;
}