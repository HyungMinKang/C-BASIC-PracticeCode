#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const R = 1;  // �ָ�: 1
const S = 2;  // ����: 2
const P = 3;  //  ��:3

/*��ǻ�� ���������� �Է� + ����*/
int RSPcom(void) 
{	
	srand((int)time(NULL));
	int sel= rand() %3 +1;
	if (sel == 1)
		printf("��ǻ�ʹ� �������� ");
	if (sel == 2)
		printf("��ǻ�ʹ� �������� ");
	if (sel == 3)
		printf("��ǻ�ʹ� ������ ");
	return sel;
}


/* ���� ���������� �Է�*/
int RSPusr(void)
{	
	int sel;
	printf("������ 1, ������ 2, ���� 3: ");
	scanf_s("%d", &sel);
	
	if (sel == 1)
		printf("����� ��������, ");
	if (sel == 2)
		printf("����� ��������, ");
	if (sel == 3)
		printf("����� ������, ");

	return sel;

}

int Whoiswin(int s1, int s2)
{
	if (s1 == s2)  // ���º�
		return 0;
	else if (s1 % 3 == (s2 + 1) % 3) // s2 �¸� 
		return 1;
	else // s1 �¸�
		return -1;
}

int main(void)
{
	int usr, com;
	int result;
	int win=0, draw=0, lose=0;
	
	while (1)
	{
		usr = RSPusr();
		com = RSPcom();

		result = Whoiswin(com, usr);
		if (result == 1)
		{
			printf("����� �̰���ϴ� \n");
			win++;
		}
		else if (result == -1)
		{
			printf("����� �����ϴ�! \n");
			break;
		}
		else
		{
			printf("�����ϴ� \n");
			draw++;
		}

	}
	printf("�����ǰ�� %d��  %d��", win, draw);
	return 0;
}

