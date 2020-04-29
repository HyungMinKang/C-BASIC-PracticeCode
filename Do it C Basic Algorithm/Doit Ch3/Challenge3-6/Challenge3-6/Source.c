#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void BSGcom(int*arr) // ��ǻ�� ���� �Է�,  �ߺ��˻�
{
	srand((int)time(NULL));
	
	/*selection1*/
	arr[0] = rand()%10;

	/*selection2*/
	do {
		arr[1] = rand() % 10;  
	}while (arr[0] == arr[1]);  //�ߺ��� ���Է�

	/*selection3*/
	do {
		arr[2] = rand() % 10;
	} while ((arr[0] == arr[1])||(arr[1]==arr[2])); //�ߺ��� ���Է�
}


int IsValid(int* arr) // �ߺ��� �˻�(����� �Է�)
{
	if (arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2])
		return 0;
	else
		return 1;
}
void BSGusr(int* arr)
{

	int valid;

	printf("�� ���� �����Է�: ");
	while (1)
	{

		scanf_s("%d %d %d", &arr[0], &arr[1], &arr[2]);
		valid = IsValid(arr);

		if (valid == 1)
			break;
		else
			printf("�߸��Է��ϼ̽��ϴ�.  �ٽ��Է��ϼ��� :");


	}
}

int Compare(int* arr1, int* arr2)
{
	static int count = 0;
	int strike = 0, ball = 0;
	int i, j;

	for (i = 0; i < 3; i++) // ��Ʈ����ũ ���� �˻�
	{
		if (arr1[i] == arr2[i])
			strike++;
	}
	for (i = 0; i < 3; i++) // �� ���ǰ˻�  ��Ʈ����ũ�� ��ġ�� �ʰ� ����
	{
		for (j = 0; j < 3; j++)
		{
			if (arr1[i] == arr2[j]&&i!=j)
			{
				ball++;
				break;
			}
		}
	}

	count++;
	printf("%d��° ���� ��� : %dstrike, %dball!!\n", count, strike, ball); //��� ���

	if (strike == 3) // ���� ���� ���ϰ�
		return 1;
	else  
		return 0;
}
int main(void)
{
	int usr[3], com[3];
	int result=0;
	int num = 1;

	
	BSGcom(com);
	printf("----------GAME START---------");
	
	while (result!=1) 
	{
		BSGusr(usr);
		result=Compare(com, usr);
		printf("\n");
	}
	printf("------GAME END------ \n");
	return 0;

}