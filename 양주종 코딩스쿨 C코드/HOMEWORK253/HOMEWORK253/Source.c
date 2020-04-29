// 정수 자료형의 종류(큰 수 다르기)

#include <stdio.h>

int main(void)
{
	__int16 a1;
	__int32 a2;
	__int64 a3;
	long a4;
	long long a5;

	puts("정수 자료형의 종류 \n");

	printf("__int16 a1 = %d byte \n", sizeof(__int16));
	printf("__int32 a2 = %d byte \n", sizeof(__int32));
	printf("__int64 a3 = %d byte \n", sizeof(__int64));

	printf("long a4= %d byte \n", sizeof(long));
	printf("long long = %d byte \n", sizeof(long long));

	return 0;
}