// 함수의 인수(argument)- 구조체(struct) 전달

#include <stdio.h>
typedef struct Mt
{
	char mount[20];
	int alt;
}Mt;

void Disp(Mt x)
{
	puts("\n Disp 함수에서 출력");
	printf("%s은 해발 %d M \n", x.mount, x.alt);
	printf("&x= %d\n", &x);

	puts("\n m와 x의 주소는 다르다");
}

int main(void)
{
	Mt m = { "설악산", 1708 };

	puts("\n 함수의 인수(argument)로 구조체 전달 \n\n");

	printf("%s은 해발 %dM \n", m.mount, m.alt);
	printf("&m= %d \n", &m);

	Disp(m);

	return 0;
}