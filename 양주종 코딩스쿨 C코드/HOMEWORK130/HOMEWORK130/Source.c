// switch-case와 열거형(enum)

#include<stdio.h>
int main(void)
{
	enum week{SUN,MON,TUE,WED,THU,FRI,SAT};

	int number;
	while (1)
	{
		puts(" \t ** Favorite Day ** ");
		puts(" \t 0. Sunday ");
		puts(" \t 1. Monday ");
		puts(" \t 2. Tuesday ");
		puts(" \t 3. Wednsday ");
		puts(" \t 4. Thursday ");
		puts(" \t 5. Friday ");
		puts(" \t 6. Saturday ");
		puts(" \t ***************");
		printf(" \t Choose Num( 0 to quit) [   ]\b\b\b");

		scanf_s("%d", &number);

		switch (number)
		{
		case SUN:
			printf(" \t %d ==> SUNDAY \n", SUN);
			break;
		case MON:
			printf(" \t %d ==> MONDAY \n", MON);
			break;
		case TUE:
			printf(" \t %d ==> TUESDAY \n", TUE);
			break;
		case WED:
			printf(" \t %d ==> WENDSDAY \n", WED);
			break;
		case THU:
			printf(" \t %d ==> THURSDAY \n", THU);
			break;
		case FRI:
			printf(" \t %d ==> FRIDAY \n", FRI);
			break;
		case SAT:
			printf(" \t %d ==> SATURDAY \n", SAT);
			break;
		case 9:
			printf(" \t %d 프로그램 종료합니다. \n", number);
			return 1;
		default:
			printf(" \t %d ==> NO DAY \a\a\n", number);
		}
	}
	return 0;
}