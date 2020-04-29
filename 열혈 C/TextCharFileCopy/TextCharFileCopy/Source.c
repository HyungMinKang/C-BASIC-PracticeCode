#include<stdio.h>

int main(void)
{
	FILE* src;
	FILE* des;
	fopen_s(&src, "simple.txt", "rt");
	fopen_s(&des, "dst.txt", "wt");
	int ch;

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�");
	else
		puts("���Ϻ��� ����");

	fclose(src);
	fclose(des);
	return 0;
}