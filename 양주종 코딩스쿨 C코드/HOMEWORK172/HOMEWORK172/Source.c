#include <stdio.h>
#include <ctype.h>
#include <Windows.h>

int main(void)
{
	printf(isgraph('8')? "%c�� �׷��� ���� \n": "%c�� �׷��ȹ��� �ƴ�\n", '8');
	printf(isgraph('$') ? "%c�� �׷��� ���� \n" : "%c�� �׷��ȹ��� �ƴ�\n", '$');
	printf(isgraph('F') ? "%c�� �׷��� ���� \n" : "%c�� �׷��ȹ��� �ƴ� \n", 'F');
	printf(isgraph('\n') ? "%c�� �׷��� ���� \n" : "%c�� �׷��ȹ��� �ƴ� \n", '\\n');
	printf(isgraph('\0') ? "%c�� �׷��ȹ��� \n" : "%c�� �׷��� ���� �ƴ� \n", '\\0');
	system("pause");
	return 0;
}