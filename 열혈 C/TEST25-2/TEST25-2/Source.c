#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char* str;
	int max,i,len;
	int word_count=0, word_len=0;
	printf("문자열의 최대 길이: ");
	scanf_s("%d", &max);
	getchar();
	str = (char*)malloc(sizeof(char) * (max+1));

	printf("문자열 입력: ");
	fgets(str, max+1, stdin);
	str[strlen(str) - 1] = 0; // \n문자 제거
	len = strlen(str);

	for (i =len; i > 0; i--)
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	printf("%s", &str[0]);
	free(str);
	
	return 0;
}