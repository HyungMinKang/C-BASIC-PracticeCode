#include <stdio.h>

int main(void)
{
	int num1 = 15; // 00000000 00000000 00000000 00001111
	int num2 = 20; // 00000000 00000000 00000000 00010100
	int num3 = num1 ^ num2; // XOR 연산은 두 비트가 다를 때만 참(1)을 반환
	printf("XOR 연산의 결과: %d \n", num3);
	return 0;
}
