// ���ڿ��� �±�ȯ

#include <stdio.h>
#include <string.h>

int main()
{
	char k[5] = "kbs", m[5] = "mbc";
	char tmp[5];

	puts("-----------------------");
	puts(" *���ڿ��� �±�ȯ * ");
	puts(" ----------------------");

	puts(" ��ȯ�� ");
	puts(" ------------");
	printf("k= %s \n", k);
	printf("m= %s \n\n", m);

	strcpy_s(tmp, sizeof(tmp), k);
	strcpy_s(k, sizeof(k), m);
	strcpy_s(m, sizeof(m), tmp);

	puts(" ��ȯ�� ");
	puts("--------------");
	printf(" k= %s \n", k);
	printf(" m= %s \n", m);
	puts("---------------");

	puts(" �迭���� ������ �ƴϴ�. ���� ���� �� �� ���� ");
	puts(" ���ڿ�����(strcpy) �����Լ��� ���");
	puts("---------------------------------------------");
	
	return 0;
}