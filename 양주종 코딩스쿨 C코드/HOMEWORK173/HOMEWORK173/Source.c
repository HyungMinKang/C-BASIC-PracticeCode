#include <stdio.h>
#include <ctype.h>
#include <Windows.h>

int main(void)
{
	printf(islower('a') ? "%c�� �ҹ��� \n" : "%c�� �ҹ��� �ƴ� \n", 'a');
	printf(islower('b') ? "%c�� �ҹ��� \n" : "%c�� �ҹ��� �ƴ� \n", 'b');
	printf(islower('F') ? "%c�� �ҹ��� \n" : "%c�� �ҹ��� �ƴ� \n", 'F');
	printf(islower('L') ? "%c�� �ҹ��� \n" : "%c�� �ҹ��� �ƴ� \n", 'L');
	printf(islower('$') ? "%c�� �ҹ��� \n" : "%c�� �ҹ��� �ƴ� \n", '$');

	system("pause");
	return 0;
}