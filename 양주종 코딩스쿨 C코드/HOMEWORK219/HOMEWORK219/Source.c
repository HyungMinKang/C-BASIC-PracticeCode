//getchar �Լ�
#include <stdio.h>

int main(void)
{
	char b_type;
	printf(" ����� �������� : ");
	b_type = getchar();
	printf(" \n %c���̱��� �ݰ����ϴ� \n", b_type);

	puts(" getchar �Է��Լ�");

	return 0; 
}