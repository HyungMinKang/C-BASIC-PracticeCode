//다양한 정수 자료형

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int8_t b1;
	int16_t b2;
	int32_t b3;
	int64_t b4;

	uint8_t ub1;
	uint16_t ub2;
	uint32_t ub3;
	uint64_t un4;

	puts("정수 자료형의 종류 \n");

	printf("int8_t b1 = %d byte \n", sizeof(int8_t));
	printf("int16_t b2 = %d byte \n", sizeof(int16_t));
	printf("int32_t b3 = %d byte \n", sizeof(int32_t));
	printf("int64_t b4 = %d byte \n", sizeof(int64_t));

	puts(" \n 부호없는 정수 \n");

	printf(" uint8_t b1 = %d byte \n", sizeof(uint8_t));
	printf(" uint16_t b2 = %d byte \n", sizeof(uint16_t));
	printf(" unint32_t b3 = %d byte \n", sizeof(uint32_t));
	printf(" uint64_t b4 = %d byte \n", sizeof(uint64_t));

	return 0;
}