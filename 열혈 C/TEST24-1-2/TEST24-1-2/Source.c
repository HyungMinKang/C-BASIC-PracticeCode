#include <stdio.h>

int main(void)
{
	FILE* fp;
	fopen_s(&fp, "mystory.txt", "at");

	if (fp == NULL) {
		puts("�߰� �Է½���:");
		return -1;
	}
	fputs("#��ܸԴ� ����: «�� ������ \n", fp);
	fputs("#���: �౸ \n", fp);

	fclose(fp);
	return 0;

}