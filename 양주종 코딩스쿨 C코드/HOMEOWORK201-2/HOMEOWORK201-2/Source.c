// 자료형의 크기 알아보기

#include <stdio.h>

int main(void)
{
	char ca = 'A';
	int ia = 50;
	double da = 3.14;
	char cp[] = "google";

	char* charP = &ca;
	int* intP = &ia;
	double* doubleP = &da;
	char* cpP = cp;

	printf("char ca= 'A ==> %d byte \n", sizeof(ca));
	printf("int ia= 50 ==> %d byte \n", sizeof(ia));
	printf("double da=3.14 ==> %d byte \n", sizeof(da));
	printf("char cp[]= \"google\" ==> %d byte \n", sizeof(cp));

	printf("cha*  charP==> %d byte \n", sizeof(charP));
	printf("int*  intP==> %d byte \n", sizeof(intP));
	printf("double* doubleP==> %d byte \n", sizeof(doubleP));
	printf("char* cpP==> %d byte \n", sizeof(cpP));
	return 0; 
	// 포인터 변수는 자료형과 상관없이 4바이트다(win32비트에서) 8바이트다(win64)
}