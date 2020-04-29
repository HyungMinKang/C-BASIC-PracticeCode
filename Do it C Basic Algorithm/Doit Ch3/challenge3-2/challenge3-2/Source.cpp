#include <stdio.h>
int main(void)
{
	int num1, num2;
	int i, j = 1, x;
	printf("숫자 두개를 입력하세요.\n");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		x = num2;
	}
	else
	{
		x = num1;
	}
	for (i = 1; i <= x; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			j = i;
			
		}
	}
	printf("최대공약수 : %d", j);
	return 0;
}