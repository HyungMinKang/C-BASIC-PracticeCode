#include <stdio.h>

double CelToFah(double c)// ¼·¾¾¸¦ È­¾¾·Î
{
	return 1.8 * c + 32;
}

double FahCel(double f)// È­¾¾¸¦ ¼·¾¾·Î
{
	return (f - 32) / 1.8;
}

int main(void)
{	
	int sel;
	double num;

	printf("1.¼·¾¾¸¦ È­¾¾·Î 2.È­¾¾¸¦ ¼·¾¾·Î");
	printf("¼±ÅÃ>>");
	scanf_s("%d", &sel);

	if (sel == 1)
	{
		printf("¼·¾¾ÀÔ·Â:");
		scanf_s("%lf", &num);
		printf("¼·¾¾%f= È­¾¾%f \n", num, CelToFah(num));
	}

	if(sel==2)
	{ 
		printf("È­¾¾ÀÔ·Â:");
		scanf_s("%lf", &num);
		printf("È­¾¾%f= ¼·¾¾%f \n", num, FahCel(num));

	}
	return 0;


}