// ��ũ��(macro) ���

#include<stdio.h>
#define NUM 1000
#define P printf
#define PI 3.141592
#define NAME "������"

int main(void)
{
	P("NUM= %d \n", NUM);
	P("MAME= %s \n", NAME);
	P("PI= %lf \n", PI);

	return 0;
}