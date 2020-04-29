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
			scanf("%d", &arr[i][j]);  // 물풍선 상태 입력 1이상 물풍선 , -1장애물, 0비어있음
			b[i][j] = 0;
		}
	}
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (arr[i][j] >= 1) //만약 물풍선이 존재한다면
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

	
	scanf("%d", &num); // 플레이어 수 입력
	
	for (i = 1; i <= num; i++)
	{
		scanf("%d %d", &px, &py); // 플레이어 수만큼 플레이어 위치 입력

		if (b[px][py] == -2) // 물풍선이 터진후 물줄기 흐르는곳일 경우
		{
			playerlife[i] = 0;  //생존상태0 죽음
		}
		else if (b[px][py] == 0) // 물풍선이 터진후 상태가 0 or 장애물일경우
		{
			playerlife[i] = 1;  //생존상태1 살음
			b[px][py] = i; // 플레이어 위치에 플레이어 넘버를 보드판에 삽입
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

/* c++ 모범코드
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