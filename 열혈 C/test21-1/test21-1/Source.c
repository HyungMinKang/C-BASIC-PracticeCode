#include <stdio.h>

int Convchar(int ch)
{
	int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch+diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch-diff;
	else
		return -1;
}

int main(void)
{	
	int ch;
	printf("�����Է�: "); // ��� ��� �Ǵ� ����
	ch = getchar();		// ����ڿ��� �����ϳ� �Է¹���
	ch = Convchar(ch);
	
	if(ch==-1)
	{
		printf("������ ��� �Է°��Դϴ�");
		return -1;
	}
	putchar(ch);
	return 0;
}