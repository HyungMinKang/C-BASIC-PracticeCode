#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*** ���� Ȯ�� �Լ�***/
int GetSpaceIPX(char str[])
{
	int i, len;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;   // ���鹮���� ��ġ ����- �ϳ��� ���ڿ����� �̸��� ���� ���б���  str[0]~str[i-1] �̸�, str[i+1]~str[len] ����
	}

	return -1;
}

/***�̸� ���� �� �Լ�***/
int CompareName(char str1[], char str2[])
{
	int idx1 = GetSpaceIPX(str1);
	int idx2 = GetSpaceIPX(str2);
	
	
	if (idx1 != idx2) //���̰� �ٸ��� �ٸ� �̸�
		return 0;

	else
		return !strncmp(str1, str2, idx1); // ���ڿ� �� �����̸� �̸� !0 =1,  �ٸ��̸��̸� !1=0

}
/***���� �� �Լ�***/
int CompareAge(char str1[], char str2[])
{
	int idx1 = GetSpaceIPX(str1);
	int idx2 = GetSpaceIPX(str2);
	int age1, age2;
	age1 = atoi(&str1[idx1 + 1]); // ���̰� ����� ��ġ  ���������� ��ȯ
	age2 = atoi(&str2[idx2 + 1]); 

	if (age1 == age2) // ������ ��
		return 1;
	else
		return 0;
}

void RemoveBSN(char str[]) //�������� �Լ�
{
	int len = strlen(str);
	str[len - 1] = 0;
 }
/*** ���Լ� ���ϰ����� ��� ��� �����Լ�***/
int main(void)
{
	char str1[20];
	char str2[20];

	printf("ù���� ��� ���� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	RemoveBSN(str1);

	printf("�ι��� ��� ���� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	RemoveBSN(str2);

	if (CompareName(str1, str2)) //return���� 1�̸� ��= ���� �̸��ϰ�� return�� 1�̴�
		puts("�̸��� �����մϴ�");

	else  // ���̰� �ٸ��ų�   strncmp �Լ� return ���� 1�ΰ��
		puts("�̸��� �ٸ��ϴ�");

	if (CompareAge(str1, str2)) // �ܼ� ������ �� return ���
		puts("���̰� �����ϴ�!");
	else
		puts("���̰� �ٸ��ϴ�");

	return 0;

}