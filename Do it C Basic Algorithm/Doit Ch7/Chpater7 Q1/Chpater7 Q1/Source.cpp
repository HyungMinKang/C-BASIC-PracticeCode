#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauage;

public:
	int GetGasGauge()
	{
		return gasolineGauage;
	}

	Car(int Gauage):gasolineGauage(Gauage)
	{}

	Car() : gasolineGauage(100)
	{}
	~Car()
	{
		cout << "~Car: " << gasolineGauage << endl;
	}
};

class HybridCar : public Car
{
private: 
	int electricGauage;

public :
	int GetElecGauge()
	{
		return electricGauage;
	}

	HybridCar(int g1, int g2): Car(g1), electricGauage(g2)
	{}

	HybridCar(int g1) :electricGauage(g1)
	{}

	HybridCar() : electricGauage(200)
	{}
	~HybridCar()
	{
		cout << "~HybridCar: " << electricGauage << endl;
	}
};


class HybridWaterCar : public HybridCar
{
private:
	int waterGuage;

public:
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸°" << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®" << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¼ö¼Ò·®" << waterGuage << endl;
	}

	HybridWaterCar(int g1, int g2, int g3) : HybridCar(g1, g2), waterGuage(g3)
	{}

	HybridWaterCar(int g1, int g2) : HybridCar(g1), waterGuage(g2){}
	HybridWaterCar(int g1) : waterGuage(g1){}
	HybridWaterCar() :  waterGuage(300){}

	~HybridWaterCar()
	{
		cout << "~HybridWaterCar: " << waterGuage << endl;
	}
};


int main(void)
{
	HybridWaterCar car1(110, 220, 330);
	car1.ShowCurrentGauge();
	HybridWaterCar car2(110, 220);
	car2.ShowCurrentGauge();
	HybridWaterCar car3(110);
	car3.ShowCurrentGauge();
	HybridWaterCar car4();
	
	
}