//�̸� ���ǵ� ��ũ��

#include <stdio.h>
#include <time.h>

int main(void)
{
	printf(" ����ð�: %s \n", __TIME__);
	printf(" ���糯¥: %s \n", __DATE__);
	printf(" ��������: %s \n", __FILE__);
	printf(" �����Լ�: %s \n", __func__);

	printf(" �������: %d \n", __LINE__);

	return 0;
}