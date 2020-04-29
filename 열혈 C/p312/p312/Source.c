#include<stdio.h>
void ShowArayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void AddArayElme(int* param, int len,int add)
{
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;
}

int main(void)
{
	int arr[3] = { 1,2,3, };
	AddArayElme(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElme(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElme(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	return 0;
}