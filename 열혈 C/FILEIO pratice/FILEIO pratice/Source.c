#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	FILE* fp; 
	int num1,num2; 
	printf("�����Է�: ");
	scanf("%d %d", &num1, &num2);

	fp = fopen("ex3.txt", "wt");
	if (fp == NULL) {
		printf("file open error");
		return -1;
	}

	fprintf(fp, "%d�� %d�� ��Ģ���� ��� \n", num1, num2);
	fprintf(fp, "%d+%d=%d \n", num1, num2, num1 + num2);
	fprintf(fp, "%d-%d=%d \n", num1, num2, num1 - num2);
	fprintf(fp, "%d*%d=%d \n", num1, num2, num1 * num2);
	fprintf(fp, "%d/%d=%d \n ", num1, num2, num1 / num2);

	fclose(fp);

	printf("�Ϸ�\n");
	return 0;


}