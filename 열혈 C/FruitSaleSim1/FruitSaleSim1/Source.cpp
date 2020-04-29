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
			cout << "잘못된 입력으로 판매를 취소합니다" << endl;
			return 0;
		}
		int num = money / APPLE_PRICE;
		numofApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSaleResult() const
	{
		cout << "남은 사과: " << numofApples << endl;
		cout << "판매 수익: " << myMoney << endl<<endl;
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
			cout << "잘못된 입력으로 구매를 취소합니다" << endl;
			return;
		}
		numofApples+= seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult() const
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numofApples << endl << endl;
	}
};

int main(void)
{	
	FruitSeller seller;
	FruitBuyer buyer;
	seller.InitMembers(1000, 20, 0);
	buyer.InitMemebers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSaleResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}