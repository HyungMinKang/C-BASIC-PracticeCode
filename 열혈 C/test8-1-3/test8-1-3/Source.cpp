#include <stdio.h>

int main(void)
{
	int korea;
	int english;
	int math;
	int total, avg;
	
	
	printf("국어점수: ");
	scanf_s("%d", &korea);
	printf("영어점수: ");
	scanf_s("%d", &english);
	printf("수학점수: ");
	scanf_s("%d", &math);

	total = korea + english + math;
	avg = total / 3;

	if (avg >= 90)
		printf("학점: A");

	else if (avg >= 80)
		printf("학점 : B");

	else if (avg >= 70)
		printf("학점: C");
	
	else if (avg >= 50)
		printf("학점: D");
	
	else
		printf("학점 : F");

	return 0;

}