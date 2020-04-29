#include <stdio.h>

int SimpleFuncOne(void)
{
	int num = 10; //이후부터 SimpleFuncOne의 num 유효
	num++;
	printf("SimpleFuncOne: %d \n", num);
	return 0; // SimpleFuncOne의 num이 유효한 마지막 문장
}

int SimpleFunTwo(void)
{
	int num1 = 20; // 이후 num1유효
	int num2 = 30; // 이후 num2 유효
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0; // num1 , num2이 유효한 마지막 문장
}

int main(void)
{
	int num = 17; // 이후부터 main의 num 유효
	SimpleFuncOne();
	SimpleFunTwo();
	printf("main num: %d \n", num);
	return 0; // main의 num이 유효한 마지막 문장 
}