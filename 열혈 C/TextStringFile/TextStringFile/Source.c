#include<stdio.h>

int main(void)
{
	FILE* src;
	FILE* des;
	fopen_s(&src, "simple.txt", "rt");
	fopen_s(&des, "simplecopy.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�");
	else
		puts("���Ϻ��� ����");

	fclose(src);
	fclose(des);
	return 0;

}