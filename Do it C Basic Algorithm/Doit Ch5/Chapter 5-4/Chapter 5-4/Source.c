/* �Լ� recur�� ������͸� ����*/
void recur(int n)
{
Top:
	if (n > 0) {
		return recur(n - 1);   // n=n-1 + n�� �ӽ����� + �ӽ������� n �ٽ� ȣ�� �ʿ� ==> ���ñ��� Ȱ��
		printf("%d\n", n);
		n = n - 2;
		goto Top; //  recur(n-2) ����
	}
}