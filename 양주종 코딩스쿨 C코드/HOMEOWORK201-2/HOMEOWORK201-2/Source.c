// �ڷ����� ũ�� �˾ƺ���

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
	// ������ ������ �ڷ����� ������� 4����Ʈ��(win32��Ʈ����) 8����Ʈ��(win64)
}