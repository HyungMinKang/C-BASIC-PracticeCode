#include <stdio.h>

int SimpleFuncOne(void)
{
	int num = 10; //���ĺ��� SimpleFuncOne�� num ��ȿ
	num++;
	printf("SimpleFuncOne: %d \n", num);
	return 0; // SimpleFuncOne�� num�� ��ȿ�� ������ ����
}

int SimpleFunTwo(void)
{
	int num1 = 20; // ���� num1��ȿ
	int num2 = 30; // ���� num2 ��ȿ
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0; // num1 , num2�� ��ȿ�� ������ ����
}

int main(void)
{
	int num = 17; // ���ĺ��� main�� num ��ȿ
	SimpleFuncOne();
	SimpleFunTwo();
	printf("main num: %d \n", num);
	return 0; // main�� num�� ��ȿ�� ������ ���� 
}