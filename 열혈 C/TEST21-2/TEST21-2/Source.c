#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*�������� �Լ� */
void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}


int main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];

	/* fgets �� ���� ���ڿ� �Է�*/
	printf("���ڿ�1 �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	RemoveBSN(str1);
	
	printf("���ڿ�2 �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	RemoveBSN(str2);

	strncpy_s(str3, sizeof(str3), str1, sizeof(str3) - 1); //���ڿ� ����
	strcat_s(str3,sizeof(str3), str2); //���ڿ� ���̱� 

	
	puts(str3); //��� ���

	return 0;
}