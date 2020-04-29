#include <stdio.h>

int main(void)
{
	int num;
	int num2=1;

	for (num = 1; num < 10; num++)
	{
		if (num % 2 !=0)
			continue;
			
		while (1)
		{
			printf("%d*%d= %d \n", num,num2,num*num2);
			num2++;
				
			if (num < num2)
					break;
		}

		

	}
	return 0;
}