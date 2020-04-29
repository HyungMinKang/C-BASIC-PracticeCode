#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	int C;
	cin >> C;
	double n;
	double arr[1000];


	for (int i = 0; i < C; i++)
	{	
		double total = 0;
		double avg = 0;
		double avgcnt = 0;
		double res = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			total += arr[j];
		}
		avg = total / n;

		for (int j = 0; j < n; j++)
		{
			if (arr[j] > avg)
			{
				avgcnt++;
			}
		}
		res = ( avgcnt/n)*100;


		cout << fixed;
		cout.precision(3);
		cout << res <<"%"<< endl;
		

	}
}