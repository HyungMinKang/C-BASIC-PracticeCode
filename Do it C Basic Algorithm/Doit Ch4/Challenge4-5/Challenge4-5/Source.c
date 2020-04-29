#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

const int same = 1;
const int diff = 2;

int main(void)
{
	FILE* fp1;
	FILE* fp2;
	char ch1[100];
	char ch2[100];
	int flag=same;
	fp1 = fopen("d1.txt", "rt"); //����1 ��Ʈ�� ����
	fp2 = fopen("d2.txt", "rt"); //����2 ��Ʈ�� ����

	if (fp1 == NULL || fp2 == NULL) {   //���� ���� �����˻�
		printf("file open error");
		return -1;
	}



	while (1) // ����
	{
		if (feof(fp1) != 0 && feof(fp2) != 0) //���Ͽ� ���̻� ���� �κо����� ����
			break;
		
		fgets(ch2, sizeof(ch2), fp2); //���� �ϳ��� �б�
		fgets(ch1, sizeof(ch1), fp1);
		
		if (strcmp(ch1, ch2) != 0) // ���ڿ� �� 0�̸� ��ġ/ �׿ܿ� ����ġ
		{	
			flag = diff; // ���� ����ġ
			break;

		}

		
	}

	if (flag == same)
		fputs("�� ���� ������ ������ ��ġ �մϴ�.", stdout);
	else
		fputs("�� ���� ������ ����ġ �մϴ�.", stdout);

	fclose(fp1);  // ���� �ݱ�
	fclose(fp2);
	return 0; // ���α׷� ����

}