// �ڷ����� ũ��(����) 

#include<stdio.h>

int main(void)
{
	puts("------------------");
	puts(" �ڷ����� ũ��");
	puts("------------------");

	printf(" char = %d byte \n", sizeof(char));
	printf(" int = %d byte \n", sizeof(int));
	printf(" double = %d byte \n", sizeof(double));
	puts("-----------------");

	printf("\'A\'= %d byte \n", sizeof('A'));
	printf(" 50= %d byte \n", sizeof(50));
	printf(" 35.78= %d byte \n", sizeof(35.78));

	puts(" A�� ���������� ���� 65�� �ν��Ͽ� 4����Ʈ");
	puts(" �Ǽ��� �⺻������ double 8����Ʈ�� �ν�");
	puts("-----------------------------------------");
	return 0; 
}