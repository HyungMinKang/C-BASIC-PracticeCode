// ���ڿ� �迭�� �ʱ�ȭ

#include<stdio.h>
#include<string.h>
int main()
{
	char city[5][10] = { "�� ��","�� ��","â ��","�� ��","�� ��"};
	int i, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("-----------------------");
	puts("���ڹ迭�� �ʱ�ȭ");
	puts("-----------------------");

	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("�迭�� �迭, 2���� �迭�Դϴ�");
	puts("--------------------------");

	return 0;
}