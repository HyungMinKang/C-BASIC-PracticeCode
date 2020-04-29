// 자료형의 크기 알아보기

#include <stdio.h>

int main(void)
{
	char ca = 'A';
	int ia = 50;
	double da = 3.14;
	char cp[] = "google";

	
	printf("char ca= 'A ==> %d byte \n", sizeof(ca));
	printf("int ia= 50 ==> %d byte \n", sizeof(ia));
	printf("double da=3.14 ==> %d byte \n", sizeof(da));
	printf("char cp[]= \"google\" ==> %d byte \n", sizeof(cp));

	return 0;
}