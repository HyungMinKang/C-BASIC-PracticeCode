#include<stdio.h>
#include<string.h>

long GetFileSize(FILE* fp);

int main(void)
{
	char str[100];
	FILE* fp;
	fopen_s(&fp, "ABC.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의크기: %ld \n", GetFileSize(fp)); 
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의크기: %ld \n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의크기: %ld \n", GetFileSize(fp));
	fclose(fp);
	return 0;
}

long GetFileSize(FILE* fp)
{
	long fpos;
	long fsize;
	fpos = ftell(fp); // 파일위치 지시자 백업- 초기화 위해
	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;
}