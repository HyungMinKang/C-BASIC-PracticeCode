// 3���� �迭�� ������

#include <stdio.h>

int main(void)
{
	char aa[3][5][20];
	int bb[3][6][10];

	char(*aap)[5][20] = aa; //�迭������
	int(*bbp)[6][10] = bb; //�迭������

	puts("\n 3���� �迭�� ������ \n\n");

	printf(" aa=%d, aa+1=%d \n", aa, aa + 1);
	printf(" aap=%d, aap+1=%d \n\n", aap, aap + 1);

	printf("bb= %d, bb+1=%d \n", bb, bb + 1);
	printf("bbp-%d, bbp+1=%d \n\n", bbp, bbp + 1);

	printf("aa=%d byte \n", sizeof(aa));
	printf("aap=%d byte \n", sizeof(aap));
	printf("bb= %d byte \n", sizeof(bb));
	printf("bbp=%d byte \n", sizeof(bbp));

	puts("\n 32bit���� �����ʹ� �׻� 4����Ʈ�� \n\n");

	return 0;
}