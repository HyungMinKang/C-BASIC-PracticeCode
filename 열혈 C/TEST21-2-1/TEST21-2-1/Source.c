#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int confirmint(char c)
{
	static int diff=1-'1';
	return c + diff;

}

int main(void)
{
	char str[50];
	int len,i;
	int sum = 0;
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str),stdin);
	len = strlen(str);
	
	for (i = 0; i < len; i++)
	{
		if('1'<=str[i] && str[i]<='9')
			sum+=confirmint(str[i]);

	}
	printf("������ ����: %d", sum);
	return 0;
}