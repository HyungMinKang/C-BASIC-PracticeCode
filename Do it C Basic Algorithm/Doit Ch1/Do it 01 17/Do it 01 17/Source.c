#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
int main(void)
{
	int no;
	printf("2�ڸ� ������ �Է��ϼ��� \n");
	do {
		printf("���� :");
		scanf("%d", &no);
	} while (no < 10 || no>99);

	printf("no= %d", no);
	return 0;
}