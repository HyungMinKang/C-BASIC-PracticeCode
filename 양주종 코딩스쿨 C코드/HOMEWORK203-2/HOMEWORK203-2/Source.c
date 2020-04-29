// 정수배열이 함수의 인수로 전달( 배열의 크기를 알수 없음 --> 배열의 시작주소를 전달하는 것이기 떄문에)

#include <stdio.h>
void Display(int x[5])
{
	int i;
	puts(" \n ===> Display 함수");
	printf(" x=%d byte \n", sizeof(x)); //20바이트 X 4바이트O ==> 배열이 통째로 전달X 
	puts(" 0~9까지 10번 반복");
	for (i = 0; i < 10; i++)
	{
		printf("x[%d] ==> %d 주소 ==> %d \n", i, x[i], &x[i]);
	}

	puts("\n -2~5까지 8번 반복");
	for (i = -2; i < 6; i++)
	{
		printf("x[%d] ==> %d 주소 ==> %d \n", i, x[i], &x[i]);
	}
}
	
int main(void)
{
	int a[5] = { 10,20,30,40,50 };
	int n = sizeof(a) / sizeof(int);

	Display(a);

	return 0;
}