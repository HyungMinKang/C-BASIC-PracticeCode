#include <stdio.h>

int Convchar(int ch)
{
	int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch+diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch-diff;
	else
		return -1;
}

int main(void)
{	
	int ch;
	printf("문자입력: "); // 사실 없어도 되는 문장
	ch = getchar();		// 사용자에게 문자하나 입력받음
	ch = Convchar(ch);
	
	if(ch==-1)
	{
		printf("범위를 벗어난 입력값입니다");
		return -1;
	}
	putchar(ch);
	return 0;
}