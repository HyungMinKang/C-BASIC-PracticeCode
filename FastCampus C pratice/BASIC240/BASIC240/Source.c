#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int b[11][11], arr[11][11];
int playerlife[9];
int i, j,k;
int main(void)
{	
	int num;
	int px, py;
	
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			scanf("%d", &arr[i][j]);  // ��ǳ�� ���� �Է� 1�̻� ��ǳ�� , -1��ֹ�, 0�������
			b[i][j] = 0;
		}
	}
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (arr[i][j] >= 1) //���� ��ǳ���� �����Ѵٸ�
			{
				for (k = 1; k <= arr[i][j]; k++)
				{
					b[i][j] = -2;
					if (arr[i - k][j] != -1 && i-k>0)
						b[i - k][j] = -2;
					else
						break;
				}
				
				for (k = 1; k <= arr[i][j]; k++)
				{
					
					if (arr[i+ k][j] != -1&& i+k<=10)
						b[i+k][j] = -2;
					else
						break;
				}
				
				for (k = 1; k <= arr[i][j]; k++)
				{
					
					if (arr[i][j+k] != -1&&j+k<=10)
						b[i][j+k] = -2;
					else
						break;
				}
				
				for (k = 1; k <= arr[i][j]; k++)
				{
					
					if (arr[i][j-k] != -1 &&j-k>0)
						b[i][j-k] = -2;
					else
						break;
				}


			}
			else if (arr[i][j] == -1)
			{
				b[i][j] = -1;
			}
		}
	}

	
	scanf("%d", &num); // �÷��̾� �� �Է�
	
	for (i = 1; i <= num; i++)
	{
		scanf("%d %d", &px, &py); // �÷��̾� ����ŭ �÷��̾� ��ġ �Է�

		if (b[px][py] == -2) // ��ǳ���� ������ ���ٱ� �帣�°��� ���
		{
			playerlife[i] = 0;  //��������0 ����
		}
		else if (b[px][py] == 0) // ��ǳ���� ������ ���°� 0 or ��ֹ��ϰ��
		{
			playerlife[i] = 1;  //��������1 ����
			b[px][py] = i; // �÷��̾� ��ġ�� �÷��̾� �ѹ��� �����ǿ� ����
		}
		else
		{
			playerlife[i] = 1;
		}
	}

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	puts("Character Information");
	for (i = 1; i <= num; i++)
	{
		printf("player %d ", i);
		if (playerlife[i] == 1)
			printf("survive \n");
		else
			printf("dead \n");
	}

	return 0;

}

/* c++ ����ڵ�
#include <cstdio>
#include <algorithm>
using namespace std;
int func(int c)
{
if(c>=10)return 9;
	return c;
}
int main()
{
	int a[10][10],b[10][10]={0},player[1000][2],i,j,k,x,y,n;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]<0)b[i][j]=-1;
		}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&player[i][0],&player[i][1]);
		player[i][0]-=1;
		player[i][1]-=1;
		b[player[i][0]][player[i][1]]=i+1;
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[i][j]<=0)continue;
			for(k=j;k>=max(0,j-a[i][j]);k--){
				if(a[i][k]<0)break;
				b[i][k]=-2;
			}
			for(k=j;k<=func(j+a[i][j]);k++){
				if(a[i][k]<0)break;
				b[i][k]=-2;
			}
			for(k=i;k>=max(0,i-a[i][j]);k--){
				if(a[k][j]<0)break;
				b[k][j]=-2;
			}
			for(k=i;k<=func(i+a[i][j]);k++){
				if(a[k][j]<0)break;
				b[k][j]=-2;
			}
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d ",b[i][j]);
		}
		puts("");
	}
	puts("Character Information");
	for(i=0;i<n;i++){
		int x=player[i][0],y=player[i][1];
		if(b[x][y]==-2){
			printf("player %d dead\n",i+1);
		}
		else printf("player %d survive\n",i+1);
	}
	return 0;
}

*/