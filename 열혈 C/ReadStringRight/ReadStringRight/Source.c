#include<stdlib.h>
#include<stdio.h>

char* ReaduserName(void)
{
	char* name = (char*)malloc(sizeof(char) * 30);
	printf("What's your name?");
	gets(name);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;
	name1 = ReaduserName();
	printf("name1: %s \n", name1);
	name2 = ReaduserName();
	printf("name2: %s \n", name2);

	printf("confirm name1: %s \n", name1);
	printf("confirm name2: %s \n", name2);
	free(name1);
	free(name2);
	return 0;
}