#include <stdio.h>

int main(void)
{
	int num=0, cnt=0;
	

	printf("���� ������ �Է��ϼ���");
	scanf_s("%d", &num);

	while (cnt < num)
	{
		cnt++;
		printf("%d \n", 3 * cnt);
	}
	return 0;
}