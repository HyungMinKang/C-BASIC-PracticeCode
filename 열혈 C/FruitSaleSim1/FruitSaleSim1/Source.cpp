#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int numofApples;
	int APPLE_PRICE;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{	
		APPLE_PRICE = price;
		numofApples = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{	
		if (money < 0)
		{
			cout << "�߸��� �Է����� �ǸŸ� ����մϴ�" << endl;
			return 0;
		}
		int num = money / APPLE_PRICE;
		numofApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSaleResult() const
	{
		cout << "���� ���: " << numofApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl<<endl;
	}

};

class FruitBuyer
{
private:
	int myMoney;
	int numofApples;

public:
	void InitMemebers(int money)
	{
		
		myMoney = money;
		numofApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money)
	{	
		if (money < 0)
		{
			cout << "�߸��� �Է����� ���Ÿ� ����մϴ�" << endl;
			return;
		}
		numofApples+= seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numofApples << endl << endl;
	}
};

int main(void)
{	
	FruitSeller seller;
	FruitBuyer buyer;
	seller.InitMembers(1000, 20, 0);
	buyer.InitMemebers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSaleResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}