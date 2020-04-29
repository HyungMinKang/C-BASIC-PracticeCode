#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double start, end,time, tsum;
double money, msum;

int main(void)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%lf %lf", &start, &end);
		
		time = (end - start);
		
		if (time <= 1)
			continue;
		else if (time > 1 && time < 5)
		{	
			tsum += time - 1;
			time = time - 1;
			time = time *2;
			money = (time) * 5000;
			msum += money;
			
		}
		else
		{
			tsum += 4;
			money = 40000;
			msum += money;
			
		}
		
	}
	
	if (tsum >= 15)
	{
		msum = msum - (msum * 0.05);
		printf("%.0f", msum);
	}
	else if(tsum<=5)
	{
		msum = msum + (msum * 0.05);
		printf("%.0f", msum);
		
	}
	else
	{
		printf("%.0f", msum);
	}
	
	
	return 0;
}

/*
#include <stdio.h>

main()
{
	int n = 5;
	double s, e, t, sum = 0;

	while ( n-- )
	{
		scanf("%lf %lf", &s, &e);
		t = e - s - 1;
		if ( t <= 0.0 ) t = 0.0;
		if ( t >= 4.0 ) t = 4.0;
		sum += (t / 0.5) * 5000;
	}

	if ( sum >= 15 * 10000 ) printf("%.lf", sum * 0.95);
	else if ( sum <= 5 * 10000 ) printf("%.lf", sum * 1.05);
	else printf("%.lf", sum);
}

*/