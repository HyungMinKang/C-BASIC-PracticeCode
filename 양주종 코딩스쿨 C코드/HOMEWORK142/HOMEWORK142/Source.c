// fprintf �Լ�
#include <stdio.h>
int main(void)
{
	puts(" * fprintf �Լ� *");

	puts(" **puts�Լ� ���** ");
	printf(" %d, %.1f %c %s \n", 20, 3.14, 'A', "kora");
	printf(" �λ��� �� ���� �����̴�. \n");

	fprintf(stdout, " \n *** fprintf �Լ� ��� *** \n");
	fprintf(stdout, " %d, %.1f %c %s \n", 20, 3.14, 'A', "kora");
	fprintf(stdout, "�λ��� �� ���� �����̴�. \n");
	
	puts("\n --------------------------------------------------");
	puts(" ��κ� printf �Լ��� ���� ");
	puts(" ����� ������ �ϴ� stdout�� �տ� ���Ϳ� ");
	puts(" fputs �Լ��� �������̰�, ���� ��� �������� ");
	puts(" ---------------------------------------------------");
	return 0;

}