#include <stdio.h>
#include <string.h>

int main(void)
{
	char k[6] = "korea";
	char j[6] = "japan";
	char tmp[6];

	printf("원래값 k= %s, j=%s \n\n", k, j);

	strcpy_s(tmp, sizeof(tmp), k);
	strcpy_s(k, sizeof(k), j);
	strcpy_s(j, sizeof(j), tmp);

	printf(" 변경후 k=%s, j=%s \n", k, j);

	return 0;
}