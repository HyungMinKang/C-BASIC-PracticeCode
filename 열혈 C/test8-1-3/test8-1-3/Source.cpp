#include <stdio.h>

int main(void)
{
	int korea;
	int english;
	int math;
	int total, avg;
	
	
	printf("��������: ");
	scanf_s("%d", &korea);
	printf("��������: ");
	scanf_s("%d", &english);
	printf("��������: ");
	scanf_s("%d", &math);

	total = korea + english + math;
	avg = total / 3;

	if (avg >= 90)
		printf("����: A");

	else if (avg >= 80)
		printf("���� : B");

	else if (avg >= 70)
		printf("����: C");
	
	else if (avg >= 50)
		printf("����: D");
	
	else
		printf("���� : F");

	return 0;

}