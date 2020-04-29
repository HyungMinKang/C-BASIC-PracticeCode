//미리 정의된 매크로

#include <stdio.h>
#include <time.h>

int main(void)
{
	printf(" 현재시간: %s \n", __TIME__);
	printf(" 현재날짜: %s \n", __DATE__);
	printf(" 현재파일: %s \n", __FILE__);
	printf(" 현재함수: %s \n", __func__);

	printf(" 현재라인: %d \n", __LINE__);

	return 0;
}