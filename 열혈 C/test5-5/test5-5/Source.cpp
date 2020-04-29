#include <stdio.h>

int main(void)
{
	char ch1;
	
	printf("알파벳을 입력하세요 \n");
	scanf_s("%c", &ch1);
	printf("%c=%d", ch1, ch1);
	return 0;


}