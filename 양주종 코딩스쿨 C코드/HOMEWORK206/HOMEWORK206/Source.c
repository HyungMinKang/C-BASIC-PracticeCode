// ���ڿ� �Է�
#include <stdio.h>
int main(void)
{
	char name[10];

	printf("�̸��� �Է��ϼ���: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = 0;

	printf("%s�� �ݰ����ϴ�", name);

	return 0;
}