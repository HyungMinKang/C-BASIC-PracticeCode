#include <iostream>
using namespace std;

bool Ispositive(int num)
{
	if (num <= 0)
		return false;
	else
		return true;
}

int main(void)
{
	bool isPos;
	int num;
	cout << "Input num: ";
	cin >> num;

	isPos = Ispositive(num);
	if (isPos)
	{
		cout << "Positive Number" << endl;
	}
	else
	{
		cout << "Negative Number" << endl;
	}


	return 0;

}