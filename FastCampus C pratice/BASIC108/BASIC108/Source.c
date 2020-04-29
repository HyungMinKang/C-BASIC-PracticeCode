#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int id, mf;
	scanf("%d %d", &id, &mf);
	
	if (mf == 1 || mf == 2)

		printf("%d", 2012 - ((1900 + id / 10000)) + 1);


	else
	{
		printf("%d", 2012 - ((2000 + id / 10000)) + 1);
	}
	
		
	

	return 0;
}