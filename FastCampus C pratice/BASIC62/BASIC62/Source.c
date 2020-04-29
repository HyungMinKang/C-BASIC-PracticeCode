#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int mon;
	scanf("%d", &mon);
	switch (mon)
	{
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall");
		break;
	
	default:
		printf("winter");
		break;

	}
	return 0;

}