#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num[100000] = {0};
	char b[100000] = {0};
	int sum = 0, i = 1,j=1;
	while (1)
	{
		if (i == 1)
		{
			scanf("%d", &num[i]);
			sum = num[i];
		}

		else if (i % 2 != 0)
		{
			scanf("%d", &num[i]);
		}

		else
		{
			scanf("%c", &b[i]);
			if (b[i] == '=')
			{
				break;
			}
		}
		
		i++;
	}
	
	for (j = 1; j < i; j++)
	{	
		
		if (j % 2 == 0)
		{
			if (b[j] == '+')
				sum = sum + num[j + 1];
			else if (b[j] == '-')
				sum = sum - num[j + 1];
			else if (b[j] == '/')
				sum = sum / num[j + 1];
			else if (b[j] == '*')
				sum = sum * num[j + 1];
			else
				break;
		}
	}

	printf("%d", sum);
	
	return 0;
}


//모범답안
#include <stdio.h>

int main()
{
	int n, sum = 0;
	char c;

	scanf("%d", &n);

	sum = n;
	while (1)
	{
		scanf("%c", &c);
		if (c == '=') break;

		scanf("%d", &n);
		if (c == '+') sum += n;
		else if (c == '-') sum -= n;
		else if (c == '*') sum *= n;
		else if (c == '/') sum /= n;
	}
	printf("%d", sum);
	return 0;
}