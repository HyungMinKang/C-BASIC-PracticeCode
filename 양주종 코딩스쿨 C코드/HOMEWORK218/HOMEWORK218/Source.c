//printf �Լ� vs fprintf �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	puts(" **printf�Լ� ��� **");

	printf(" %d %.1f %c %s \n", 20, 3.14, 'A', "Kora");
	printf("�λ��� �� ���� �����̴� \n");

	fprintf(stdout, "\n fprintf �Լ� ��� \n");
	fprintf(stdout, " %d %.1f %c %s \n", 20, 3.14, 'A', "Kora");

	fprintf(stdout, "�λ��� �� ���ǿ����̴� \n");
	fprintf(stdout, "����� ������ �ϴ� stdout�� �տ� ���´�\n");
	fprintf(stdout, "fputs �Լ��� �������� \n");
	fprintf(stdout, "�μ� ��ġ�� �ٸ���, fputs �Լ��� �ڿ� ���´�");

	return 0;
}