#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int totalpay;
	int wsm;
	scanf("%d", &totalpay);
	if (totalpay <= 500)
		printf("%d", totalpay * 70 / 100);
	else if (totalpay > 500 && totalpay <= 1500)
		printf("%d", 350 + ((totalpay - 500) * 40 / 100));
	else if(totalpay>1500 && totalpay<=4500)
		printf("%d", 750 + ((totalpay - 1500) * 15 / 100));
	else if(totalpay>4500 && totalpay<10000)
		printf("%d", 1200 + ((totalpay - 4500) * 5 / 100));
	else
		printf("%d", 1475 + ((totalpay - 10000) * 2 / 100));

	return 0;
}