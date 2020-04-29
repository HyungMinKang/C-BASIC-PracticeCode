//������� limits.h ������ ������ ��� ����

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("CHAR_BIT = %d char�� ��Ʈ�� \n", CHAR_BIT);

	puts("\n char��");
	printf("CHAR_MIN= %d signed char�� �ּҰ� \n", CHAR_MIN);
	printf("CHAR_MAX= %d signed char�� �ִ� \n", CHAR_MAX);

	puts(" \n signed char��");

	printf("SCHAR_MIN= %d signed char�� �ּҰ� \n", SCHAR_MIN);
	printf("SCHAR_MAX= %d signed char�� �ִ밪 \n", SCHAR_MAX);
	printf("UCHAR_MAX= %d unsigned char�� �ִ� \n", UCHAR_MAX);

	puts("\n short��");

	printf("SHRT_MIN= %d short int �ּڰ� \n", SHRT_MIN);
	printf("SHRT_MAX= %d short int �ִ� \n", SHRT_MAX);
	printf("USHRT_MAX= %d unsigned short int �ִ� \n", USHRT_MAX);

	puts("\n int��");
	
	printf("INT_MIN= %d int �ּڰ� \n", INT_MIN);
	printf("INT_MAX= %d int �ִ� \n", INT_MAX);
	printf("UINT_MAX= %u unsigned short int �ִ� \n", UINT_MAX);

	puts(" \n long��");

	printf("LONG_MIN= %d long �ּڰ� \n", LONG_MIN);
	printf("LONG_MAX= %d long �ִ� \n", LONG_MAX);
	printf("ULONG_MAX= %u unsigned long �ִ� \n", ULONG_MAX);

	return 0;
}