/* �Է¹��� �������� ��ȣ(���/����/0) �Ǵ�*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf(" ������ �Է��ϼ���: ");
	scanf("%d", &n);
	if (n > 0)
		printf("���");
	else if (n < 0)
		printf("����");
	else
		printf("0");

	return 0;
}