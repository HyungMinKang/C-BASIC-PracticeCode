#include <stdio.h>

int main(void)
{
	int num=0;
	int sum = 0;
	int cnt = 0;

	while (cnt< 5)// 5���� ���� �Է�
	{
		while (num <= 0) //1�̸� �� �Է½� ���Է� �䱸
		{
			printf("������ �Է��ϼ��� \n");
			scanf_s("%d", &num);
		}
		sum += num; // ���� �� 
		num = 0;
		cnt++;
	}
	printf("%d", sum); 
	return 0;

}