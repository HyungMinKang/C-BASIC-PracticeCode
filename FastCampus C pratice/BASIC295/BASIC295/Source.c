#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct stdinf   //�л��̸��� �������� ���� ����ü
{
	char name[10];
	int score;
}stdinf;



int main(void)
{	
	stdinf stdinf[100];
	int n; // ������ ����
	int m; // ��� ����
	int tmp; //��ȯ�� ���� �׸�
	char tmp1[10];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) //������ ���� ��ŭ �л����� �Է�
	{	
		scanf("%s", &stdinf[i].name);
		scanf("%d", &stdinf[i].score);
	}

	//������ ����
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (stdinf[j].score < stdinf[j + 1].score)
			{
				tmp = stdinf[j].score;
				stdinf[j].score = stdinf[j + 1].score;
				stdinf[j + 1].score = tmp;

				strcpy(tmp1, stdinf[j].name);

				strcpy(stdinf[j].name, stdinf[j+1].name);

				strcpy(stdinf[j + 1].name, tmp1);
			}
		}
	}

	// ��°�����ŭ ���
	for (int i = 1; i <= m; i++)
	{
		printf("%s \n", stdinf[i].name);
	}

	return 0;
}