#include <stdio.h>

int main(void)
{
	int num;
	printf("자연수 입력: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1을 입력 하셨습니다 \n");
	goto END;
TWO:
	printf("2를 입력하셨습니다. \n");
	goto END;
OTHER:
	printf("3또는 그 이상의 수를 입력하셨습니다");

END:
	return 0;
}