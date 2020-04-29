// 문자열 입력
#include <stdio.h>
int main(void)
{
	char name[10];

	printf("이름을 입력하세요: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = 0;

	printf("%s님 반갑습니다", name);

	return 0;
}