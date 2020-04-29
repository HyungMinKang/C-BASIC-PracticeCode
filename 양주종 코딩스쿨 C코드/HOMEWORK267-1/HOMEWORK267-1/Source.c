// 3차원 배열과 포인터

#include <stdio.h>

int main(void)
{
	char aa[3][5][20];
	int bb[3][6][10];

	char(*aap)[5][20] = aa; //배열포인터
	int(*bbp)[6][10] = bb; //배열포인터

	puts("\n 3차원 배열과 포인터 \n\n");

	printf(" aa=%d, aa+1=%d \n", aa, aa + 1);
	printf(" aap=%d, aap+1=%d \n\n", aap, aap + 1);

	printf("bb= %d, bb+1=%d \n", bb, bb + 1);
	printf("bbp-%d, bbp+1=%d \n\n", bbp, bbp + 1);

	printf("aa=%d byte \n", sizeof(aa));
	printf("aap=%d byte \n", sizeof(aap));
	printf("bb= %d byte \n", sizeof(bb));
	printf("bbp=%d byte \n", sizeof(bbp));

	puts("\n 32bit에서 포인터는 항상 4바이트다 \n\n");

	return 0;
}