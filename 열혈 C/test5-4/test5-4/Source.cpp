#include <stdio.h>

int main(void)
{
	int ch1;

	printf("아스키코드를 입력하세요 \n");
	scanf_s("%d", &ch1);
	printf("%d=%c, ", ch1, ch1);
	return 0;
}