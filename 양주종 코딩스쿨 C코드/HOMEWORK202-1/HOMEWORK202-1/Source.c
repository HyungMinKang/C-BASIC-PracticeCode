//�����迭�� �������� ����

#include <stdio.h>

int main(void)
{
	int a[5] = { 10,20,30,40,50 };
	int n = sizeof(a) / sizeof(int);
	int i;
	int* p = a;

	printf("a= %d, p=%d \n\n", a, p);

	for (i = 0; i < n; i++)
	{
		//printf(" a[%d] ==> %d �ּ� ==> %d \n", i, a[i], &a[i]);
		//printf("p[%d] ==> %d �ּ� ==> %d \n", i,p[i],&p[i]);
		//printf(" *(a+%d) ==> %d �ּ� ==> %d \n" , i, *(a+i), a+i);
		printf(" *(p+%d)==> %d�ּ� ==> %d \n", i, *(p + i), p + i);
	}

	return 0; 
}