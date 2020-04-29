#include <stdio.h>
int main(void)
{
	puts(" * fputs 함수 * ");

	puts(" ** puts 함수 출력 ** ");
	puts(" 삶은 속도가 아니라 방향이다");
	puts(" 인생은 성적순이 아니다");
	puts(" 빌게이트, 스티브잡스, 마크주커버거 모두 대학 중퇴자다");

	fputs(" \n ** fputs함수 출력 ** \n", stdout);
	fputs(" 삶은 속도가 아니라 방향이다 \n", stdout);
	fputs(" 인생은 성적순이 아니다 \n", stdout);
	fputs(" 빌게이트, 스티브잡스, 마크주커버거 모두 대학 중퇴자다 \n",stdout);

	puts("\n --------------------------------------------------");
	puts(" stdout은 표준출력을 의미합니다  ");
	puts(" fputs 함수는 출력이름을 지정해야 해요 ");
	puts(" fputs 함수는 자동 줄바꿈 X ");
	puts("---------------------------------------------");
	return 0;
}