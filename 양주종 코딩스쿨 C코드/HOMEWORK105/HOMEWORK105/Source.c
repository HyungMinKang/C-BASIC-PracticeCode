#include <stdio.h>

void OneToHun(void);
void OddAdd(void);
void EvenAdd(void);

int main(void)
{
	int i, sum=0;
	puts("-----------����1-------------");
	
	for(i=0 ;i<=100; i++)
	{
		sum += i;
		printf("i=%2d, sum=%2d \n", i, sum);
	}


	OneToHun();
	OddAdd();
	EvenAdd();

	return 0;
}

void OneToHun(void)
{
	int i=0, sum = 0;
	puts("-----------����2-------------");
	for (i = 0; i <=100; i++)
	{
		sum += i;
		printf(" i=%2d, sum=%2d \n", i, sum);
	}
}

void OddAdd(void)
{
	int i=0, sum = 0;
	puts("-----------Ȧ����------------");
	for (i = 1; i <=100; i+=2)
	{
		sum += i;
		printf(" i=%2d, sum=%2d \n", i, sum);
	}
}

void EvenAdd(void)
{
	int i=0, sum = 0;
	puts("-----------¦����------------");
	for (i = 2; i <= 100; i += 2)
	{
		sum += i;
		printf(" i=%2d, sum=%2d \n", i, sum);
	}
}