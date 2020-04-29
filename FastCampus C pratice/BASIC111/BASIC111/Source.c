#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int kal = 0;
	int a, b;
	scanf("%d %d", &a, &b);

	switch (a)
	{
	case 1:
		kal += 400;
		break;
	case 2:
		kal += 340;
		break;
	case 3: 
		kal += 170;
		break;
	case 4:
		kal += 100;
		break;
	case 5:
		kal += 70;
		break;
	}

	switch (b)
	{
	case 1:
		kal += 400;
		break;
	case 2:
		kal += 340;
		break;
	case 3:
		kal += 170;
		break;
	case 4:
		kal += 100;
		break;
	case 5:
		kal += 70;
		break;
	}

	if (kal > 500)
	{
		printf("angry");
	}
	else {
		printf("no angry");
	}
}