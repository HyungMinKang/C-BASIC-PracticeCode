#include<stdio.h>
#include<string.h>

int main(void)
{
	
	char str1[20]="Billmark's tstory";
	char str2[20];
	char str3[5];

	
	strcpy_s(str2,sizeof(str1),str1);
	puts(str2);

	strncpy_s(str3, sizeof(str3), str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	return 0;
}