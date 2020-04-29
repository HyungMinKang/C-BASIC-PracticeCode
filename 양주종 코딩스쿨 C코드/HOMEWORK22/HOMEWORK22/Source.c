//c언어 구조체 입출력

#include <stdio.h>

typedef struct Mt
{
	char mount[20];
	int alt;
}Mt;

int main(void)
{
	Mt m1 = { "설악산", 1708 }, m2;

	printf("가고 싶은 산은 :");
	gets(m2.mount);

	printf("그 산의 높이는 : ");
	scanf_s("%d", &m2.alt);

	printf(" %s은 해발 %dM \n", m1.mount, m1.alt);
	printf("%s은 해발 %dM \n", m2.mount, m2.alt);

	puts(" m.alt에서 .은 멤버 접근 연산자");

	return 0;
}