#include <stdio.h>

int main (void )
{
	int arr[10];
	int i, num;
	int start = 0, end = 9;
	printf("총10개의 숫자입력 \n:");
	for (i = 0; i < 10; i++)
	{
		printf("입력 :");
		scanf_s("%d", &num);
		
		if (num % 2 == 0)
		{
			arr[end] = num;
			end--;
		}
		else if (num % 2 == 1)
		{
			arr[start] = num;
			start++;
		}
	}
	printf("배열 요소의 출력 : ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
	return 0;
}