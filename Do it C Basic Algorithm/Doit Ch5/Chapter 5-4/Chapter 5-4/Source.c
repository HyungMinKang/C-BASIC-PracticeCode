/* 함수 recur의 꼬리재귀를 제거*/
void recur(int n)
{
Top:
	if (n > 0) {
		return recur(n - 1);   // n=n-1 + n을 임시저장 + 임시저장한 n 다시 호출 필요 ==> 스택구조 활용
		printf("%d\n", n);
		n = n - 2;
		goto Top; //  recur(n-2) 변형
	}
}